#include <stdio.h>
#include <Python.h>

/**
 * print_python_list_info - shows info about Python lists
 * @p: object
*/

void print _python_list_info (PyObject *p)
{
	int size, alloc, i;
	pyobject *obj;
	size = Py SIZE (p);
	alloc = ((PyListObject *)p) ->allocated;

	printf (" [*) Size of the Python List = &d\n", size);
	printf (" [*] Allocated = &d\n", alloc);

	for (i = 0; i < size; i++)
	{
	printf ("Element id: ", i);
	obj = PyList_GetItem(P, i);
	printf ("&s\n", PY_TYPE (obj)->tp_name);
	}
}
