/* Generated code for Python module '__main__'
 * created by Nuitka version 0.6.10.5
 *
 * This code is in part copyright 2020 Kay Hayen.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "nuitka/prelude.h"

#include "nuitka/unfreezing.h"

#include "__helpers.h"

/* The "module___main__" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module___main__;
PyDictObject *moduledict___main__;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[87];

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    loadConstantsBlob(&mod_consts[0], "__main__", 87);

    constants_created = true;
}

/* For multiprocessing, we want to be able to initialize the __main__ constants. */
#if _NUITKA_PLUGIN_MULTIPROCESSING_ENABLED && 1
void createMainModuleConstants(void) {
    createModuleConstants();
}
#endif

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants___main__(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    checkConstantsBlob(&mod_consts[0], "__main__", 87);
}
#endif

// The module code objects.
static PyCodeObject *codeobj_f476b70f792d762f53e8651d0c151947;
static PyCodeObject *codeobj_a2f3da3f0c947a8de7a3fa9788acc6d7;
static PyCodeObject *codeobj_e51435d404d7f9a727a8aba609606b9c;
static PyCodeObject *codeobj_6fa2000b1cb2b5fd9b7b0b7e26413ff9;
static PyCodeObject *codeobj_1e72882e399d9d0e3a01920cc11193e6;
static PyCodeObject *codeobj_89201162da2238618a57f26c4390f496;
static PyCodeObject *codeobj_06311f8412ea9b87a04b6273be0549c6;
/* For use in "MainProgram.c". */
PyCodeObject *codeobj_main = NULL;

static void createModuleCodeObjects(void) {
    module_filename_obj = mod_consts[48]; CHECK_OBJECT(module_filename_obj);
    codeobj_f476b70f792d762f53e8651d0c151947 = MAKE_CODEOBJECT(module_filename_obj, 23, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[80], mod_consts[81], NULL, 1, 0, 0);
    codeobj_a2f3da3f0c947a8de7a3fa9788acc6d7 = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[82], NULL, NULL, 0, 0, 0);
    codeobj_e51435d404d7f9a727a8aba609606b9c = MAKE_CODEOBJECT(module_filename_obj, 22, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[33], mod_consts[83], NULL, 3, 0, 0);
    codeobj_6fa2000b1cb2b5fd9b7b0b7e26413ff9 = MAKE_CODEOBJECT(module_filename_obj, 35, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[39], mod_consts[84], NULL, 2, 0, 0);
    codeobj_1e72882e399d9d0e3a01920cc11193e6 = MAKE_CODEOBJECT(module_filename_obj, 122, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[66], mod_consts[85], NULL, 0, 0, 0);
    codeobj_89201162da2238618a57f26c4390f496 = MAKE_CODEOBJECT(module_filename_obj, 11, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[26], NULL, NULL, 0, 0, 0);
    codeobj_06311f8412ea9b87a04b6273be0549c6 = MAKE_CODEOBJECT(module_filename_obj, 79, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[65], mod_consts[86], NULL, 4, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION___main__$$$function_1_start();


static PyObject *MAKE_FUNCTION___main__$$$function_2_gen_A();


static PyObject *MAKE_FUNCTION___main__$$$function_3_get_best();


static PyObject *MAKE_FUNCTION___main__$$$function_4_user_ask();


static PyObject *MAKE_FUNCTION___main__$$$function_5_main_program();


// The module function definitions.
static PyObject *impl___main__$$$function_1_start(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_89201162da2238618a57f26c4390f496;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_89201162da2238618a57f26c4390f496 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_89201162da2238618a57f26c4390f496)) {
        Py_XDECREF(cache_frame_89201162da2238618a57f26c4390f496);

#if _DEBUG_REFCOUNTS
        if (cache_frame_89201162da2238618a57f26c4390f496 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_89201162da2238618a57f26c4390f496 = MAKE_FUNCTION_FRAME(codeobj_89201162da2238618a57f26c4390f496, module___main__, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_89201162da2238618a57f26c4390f496->m_type_description == NULL);
    frame_89201162da2238618a57f26c4390f496 = cache_frame_89201162da2238618a57f26c4390f496;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_89201162da2238618a57f26c4390f496);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_89201162da2238618a57f26c4390f496) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_call_result_1;
        tmp_called_name_1 = LOOKUP_BUILTIN(mod_consts[0]);
        assert(tmp_called_name_1 != NULL);
        frame_89201162da2238618a57f26c4390f496->m_frame.f_lineno = 12;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, mod_consts[1]);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_call_result_2;
        tmp_called_name_2 = LOOKUP_BUILTIN(mod_consts[0]);
        assert(tmp_called_name_2 != NULL);
        frame_89201162da2238618a57f26c4390f496->m_frame.f_lineno = 13;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, mod_consts[2]);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_name_3;
        PyObject *tmp_call_result_3;
        tmp_called_name_3 = LOOKUP_BUILTIN(mod_consts[3]);
        assert(tmp_called_name_3 != NULL);
        frame_89201162da2238618a57f26c4390f496->m_frame.f_lineno = 14;
        tmp_call_result_3 = CALL_FUNCTION_NO_ARGS(tmp_called_name_3);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_89201162da2238618a57f26c4390f496);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_89201162da2238618a57f26c4390f496);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_89201162da2238618a57f26c4390f496, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_89201162da2238618a57f26c4390f496->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_89201162da2238618a57f26c4390f496, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_89201162da2238618a57f26c4390f496,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_89201162da2238618a57f26c4390f496 == cache_frame_89201162da2238618a57f26c4390f496) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_89201162da2238618a57f26c4390f496);
        cache_frame_89201162da2238618a57f26c4390f496 = NULL;
    }

    assertFrameObject(frame_89201162da2238618a57f26c4390f496);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl___main__$$$function_2_gen_A(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_leng = python_pars[0];
    PyObject *par_r1 = python_pars[1];
    PyObject *par_r2 = python_pars[2];
    PyObject *var_A = NULL;
    PyObject *var_typed_a = NULL;
    PyObject *outline_0_var_i = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_e51435d404d7f9a727a8aba609606b9c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    struct Nuitka_FrameObject *frame_f476b70f792d762f53e8651d0c151947_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_f476b70f792d762f53e8651d0c151947_2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_e51435d404d7f9a727a8aba609606b9c = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_e51435d404d7f9a727a8aba609606b9c)) {
        Py_XDECREF(cache_frame_e51435d404d7f9a727a8aba609606b9c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e51435d404d7f9a727a8aba609606b9c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e51435d404d7f9a727a8aba609606b9c = MAKE_FUNCTION_FRAME(codeobj_e51435d404d7f9a727a8aba609606b9c, module___main__, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_e51435d404d7f9a727a8aba609606b9c->m_type_description == NULL);
    frame_e51435d404d7f9a727a8aba609606b9c = cache_frame_e51435d404d7f9a727a8aba609606b9c;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_e51435d404d7f9a727a8aba609606b9c);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_e51435d404d7f9a727a8aba609606b9c) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        // Tried code:
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_iter_arg_1;
            PyObject *tmp_xrange_low_1;
            CHECK_OBJECT(par_leng);
            tmp_xrange_low_1 = par_leng;
            tmp_iter_arg_1 = BUILTIN_XRANGE1(tmp_xrange_low_1);
            if (tmp_iter_arg_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 23;
                type_description_1 = "ooooo";
                goto try_except_handler_2;
            }
            tmp_assign_source_2 = MAKE_ITERATOR(tmp_iter_arg_1);
            Py_DECREF(tmp_iter_arg_1);
            if (tmp_assign_source_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 23;
                type_description_1 = "ooooo";
                goto try_except_handler_2;
            }
            assert(tmp_listcomp_1__$0 == NULL);
            tmp_listcomp_1__$0 = tmp_assign_source_2;
        }
        {
            PyObject *tmp_assign_source_3;
            tmp_assign_source_3 = PyList_New(0);
            assert(tmp_listcomp_1__contraction == NULL);
            tmp_listcomp_1__contraction = tmp_assign_source_3;
        }
        if (isFrameUnusable(cache_frame_f476b70f792d762f53e8651d0c151947_2)) {
            Py_XDECREF(cache_frame_f476b70f792d762f53e8651d0c151947_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_f476b70f792d762f53e8651d0c151947_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_f476b70f792d762f53e8651d0c151947_2 = MAKE_FUNCTION_FRAME(codeobj_f476b70f792d762f53e8651d0c151947, module___main__, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_f476b70f792d762f53e8651d0c151947_2->m_type_description == NULL);
        frame_f476b70f792d762f53e8651d0c151947_2 = cache_frame_f476b70f792d762f53e8651d0c151947_2;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_f476b70f792d762f53e8651d0c151947_2);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_f476b70f792d762f53e8651d0c151947_2) == 2); // Frame stack

        // Framed code:
        // Tried code:
        loop_start_1:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_4;
            CHECK_OBJECT(tmp_listcomp_1__$0);
            tmp_next_source_1 = tmp_listcomp_1__$0;
            tmp_assign_source_4 = ITERATOR_NEXT(tmp_next_source_1);
            if (tmp_assign_source_4 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_1;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "ooo";
                    exception_lineno = 23;
                    goto try_except_handler_3;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_0;
                tmp_listcomp_1__iter_value_0 = tmp_assign_source_4;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_5;
            CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
            tmp_assign_source_5 = tmp_listcomp_1__iter_value_0;
            {
                PyObject *old = outline_0_var_i;
                outline_0_var_i = tmp_assign_source_5;
                Py_INCREF(outline_0_var_i);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            PyObject *tmp_called_name_1;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_args_element_name_2;
            CHECK_OBJECT(tmp_listcomp_1__contraction);
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[4]);

            if (unlikely(tmp_called_name_1 == NULL)) {
                tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
            }

            if (tmp_called_name_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 23;
                type_description_2 = "ooo";
                goto try_except_handler_3;
            }
            if (par_r1 == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[5]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 23;
                type_description_2 = "ooo";
                goto try_except_handler_3;
            }

            tmp_args_element_name_1 = par_r1;
            if (par_r2 == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[6]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 23;
                type_description_2 = "ooo";
                goto try_except_handler_3;
            }

            tmp_args_element_name_2 = par_r2;
            frame_f476b70f792d762f53e8651d0c151947_2->m_frame.f_lineno = 23;
            {
                PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2};
                tmp_append_value_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_1, call_args);
            }

            if (tmp_append_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 23;
                type_description_2 = "ooo";
                goto try_except_handler_3;
            }
            assert(PyList_Check(tmp_append_list_1));
            tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 23;
                type_description_2 = "ooo";
                goto try_except_handler_3;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;
            type_description_2 = "ooo";
            goto try_except_handler_3;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_assign_source_1 = tmp_listcomp_1__contraction;
        Py_INCREF(tmp_assign_source_1);
        goto try_return_handler_3;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        CHECK_OBJECT(tmp_listcomp_1__$0);
        Py_DECREF(tmp_listcomp_1__$0);
        tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        Py_DECREF(tmp_listcomp_1__contraction);
        tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_0);
        tmp_listcomp_1__iter_value_0 = NULL;
        goto frame_return_exit_1;
        // Exception handler code:
        try_except_handler_3:;
        exception_keeper_type_1 = exception_type;
        exception_keeper_value_1 = exception_value;
        exception_keeper_tb_1 = exception_tb;
        exception_keeper_lineno_1 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_listcomp_1__$0);
        Py_DECREF(tmp_listcomp_1__$0);
        tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        Py_DECREF(tmp_listcomp_1__contraction);
        tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_0);
        tmp_listcomp_1__iter_value_0 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto frame_exception_exit_2;
        // End of try:

#if 0
        RESTORE_FRAME_EXCEPTION(frame_f476b70f792d762f53e8651d0c151947_2);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_return_exit_1:;
#if 0
        RESTORE_FRAME_EXCEPTION(frame_f476b70f792d762f53e8651d0c151947_2);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_2;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_f476b70f792d762f53e8651d0c151947_2);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_f476b70f792d762f53e8651d0c151947_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_f476b70f792d762f53e8651d0c151947_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_f476b70f792d762f53e8651d0c151947_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_f476b70f792d762f53e8651d0c151947_2,
            type_description_2,
            outline_0_var_i,
            par_r1,
            par_r2
        );


        // Release cached frame if used for exception.
        if (frame_f476b70f792d762f53e8651d0c151947_2 == cache_frame_f476b70f792d762f53e8651d0c151947_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_f476b70f792d762f53e8651d0c151947_2);
            cache_frame_f476b70f792d762f53e8651d0c151947_2 = NULL;
        }

        assertFrameObject(frame_f476b70f792d762f53e8651d0c151947_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
        skip_nested_handling_1:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        Py_XDECREF(outline_0_var_i);
        outline_0_var_i = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_2:;
        exception_keeper_type_2 = exception_type;
        exception_keeper_value_2 = exception_value;
        exception_keeper_tb_2 = exception_tb;
        exception_keeper_lineno_2 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(outline_0_var_i);
        outline_0_var_i = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 23;
        goto frame_exception_exit_1;
        outline_result_1:;
        assert(var_A == NULL);
        var_A = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_name_2;
        PyObject *tmp_args_element_name_3;
        tmp_called_name_2 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_called_name_2 == NULL)) {
            tmp_called_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
        }

        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_A);
        tmp_args_element_name_3 = var_A;
        frame_e51435d404d7f9a727a8aba609606b9c->m_frame.f_lineno = 25;
        tmp_assign_source_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_3);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_typed_a == NULL);
        var_typed_a = tmp_assign_source_6;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_e51435d404d7f9a727a8aba609606b9c);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_e51435d404d7f9a727a8aba609606b9c);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e51435d404d7f9a727a8aba609606b9c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e51435d404d7f9a727a8aba609606b9c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e51435d404d7f9a727a8aba609606b9c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e51435d404d7f9a727a8aba609606b9c,
        type_description_1,
        par_leng,
        par_r1,
        par_r2,
        var_A,
        var_typed_a
    );


    // Release cached frame if used for exception.
    if (frame_e51435d404d7f9a727a8aba609606b9c == cache_frame_e51435d404d7f9a727a8aba609606b9c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_e51435d404d7f9a727a8aba609606b9c);
        cache_frame_e51435d404d7f9a727a8aba609606b9c = NULL;
    }

    assertFrameObject(frame_e51435d404d7f9a727a8aba609606b9c);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_2:;
    {
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT(var_A);
        tmp_tuple_element_1 = var_A;
        tmp_return_value = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
        CHECK_OBJECT(var_typed_a);
        tmp_tuple_element_1 = var_typed_a;
        PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_1);
        goto try_return_handler_1;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_A);
    Py_DECREF(var_A);
    var_A = NULL;
    CHECK_OBJECT(var_typed_a);
    Py_DECREF(var_typed_a);
    var_typed_a = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_A);
    var_A = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_leng);
    Py_DECREF(par_leng);
    CHECK_OBJECT(par_r1);
    Py_DECREF(par_r1);
    CHECK_OBJECT(par_r2);
    Py_DECREF(par_r2);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_leng);
    Py_DECREF(par_leng);
    CHECK_OBJECT(par_r1);
    Py_DECREF(par_r1);
    CHECK_OBJECT(par_r2);
    Py_DECREF(par_r2);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl___main__$$$function_3_get_best(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_A = python_pars[0];
    PyObject *par_n = python_pars[1];
    PyObject *var_j = NULL;
    PyObject *var_h = NULL;
    PyObject *var_index1 = NULL;
    PyObject *var_index2 = NULL;
    PyObject *var_result = NULL;
    PyObject *var_last = NULL;
    PyObject *var_best = NULL;
    PyObject *var_i = NULL;
    PyObject *var_r1 = NULL;
    PyObject *var_r2 = NULL;
    PyObject *tmp_comparison_chain_1__comparison_result = NULL;
    PyObject *tmp_comparison_chain_1__operand_2 = NULL;
    PyObject *tmp_comparison_chain_2__comparison_result = NULL;
    PyObject *tmp_comparison_chain_2__operand_2 = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_6fa2000b1cb2b5fd9b7b0b7e26413ff9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    int tmp_res;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_6fa2000b1cb2b5fd9b7b0b7e26413ff9 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[8];
        assert(var_j == NULL);
        Py_INCREF(tmp_assign_source_1);
        var_j = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[9];
        assert(var_h == NULL);
        Py_INCREF(tmp_assign_source_2);
        var_h = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = mod_consts[10];
        assert(var_index1 == NULL);
        Py_INCREF(tmp_assign_source_3);
        var_index1 = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = mod_consts[10];
        assert(var_index2 == NULL);
        Py_INCREF(tmp_assign_source_4);
        var_index2 = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = mod_consts[10];
        assert(var_result == NULL);
        Py_INCREF(tmp_assign_source_5);
        var_result = tmp_assign_source_5;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_6fa2000b1cb2b5fd9b7b0b7e26413ff9)) {
        Py_XDECREF(cache_frame_6fa2000b1cb2b5fd9b7b0b7e26413ff9);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6fa2000b1cb2b5fd9b7b0b7e26413ff9 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6fa2000b1cb2b5fd9b7b0b7e26413ff9 = MAKE_FUNCTION_FRAME(codeobj_6fa2000b1cb2b5fd9b7b0b7e26413ff9, module___main__, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_6fa2000b1cb2b5fd9b7b0b7e26413ff9->m_type_description == NULL);
    frame_6fa2000b1cb2b5fd9b7b0b7e26413ff9 = cache_frame_6fa2000b1cb2b5fd9b7b0b7e26413ff9;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_6fa2000b1cb2b5fd9b7b0b7e26413ff9);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_6fa2000b1cb2b5fd9b7b0b7e26413ff9) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_subscript_name_1;
        CHECK_OBJECT(par_A);
        tmp_expression_name_1 = par_A;
        tmp_subscript_name_1 = mod_consts[10];
        tmp_assign_source_6 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_1, tmp_subscript_name_1, 0);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_last == NULL);
        var_last = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = mod_consts[10];
        assert(var_best == NULL);
        Py_INCREF(tmp_assign_source_7);
        var_best = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_xrange_low_1;
        PyObject *tmp_xrange_high_1;
        PyObject *tmp_len_arg_1;
        tmp_xrange_low_1 = mod_consts[11];
        CHECK_OBJECT(par_A);
        tmp_len_arg_1 = par_A;
        tmp_xrange_high_1 = BUILTIN_LEN(tmp_len_arg_1);
        if (tmp_xrange_high_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_iter_arg_1 = BUILTIN_XRANGE2(tmp_xrange_low_1, tmp_xrange_high_1);
        Py_DECREF(tmp_xrange_high_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_8 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_8;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_9 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_9 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooooooooo";
                exception_lineno = 46;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_9;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_10;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_10 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_i;
            var_i = tmp_assign_source_10;
            Py_INCREF(var_i);
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_subscript_name_2;
        if (par_A == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[12]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 47;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_name_2 = par_A;
        CHECK_OBJECT(var_i);
        tmp_subscript_name_2 = var_i;
        tmp_compexpr_left_1 = LOOKUP_SUBSCRIPT(tmp_expression_name_2, tmp_subscript_name_2);
        if (tmp_compexpr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_2;
        }
        if (var_last == NULL) {
            Py_DECREF(tmp_compexpr_left_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 47;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_2;
        }

        tmp_compexpr_right_1 = var_last;
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        Py_DECREF(tmp_compexpr_left_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_2;
        }
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
        assert(tmp_condition_result_1 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_subscript_name_3;
        if (par_A == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[12]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 48;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_name_3 = par_A;
        CHECK_OBJECT(var_i);
        tmp_subscript_name_3 = var_i;
        tmp_assign_source_11 = LOOKUP_SUBSCRIPT(tmp_expression_name_3, tmp_subscript_name_3);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_last;
            var_last = tmp_assign_source_11;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        if (var_index2 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[14]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 49;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_2;
        }

        tmp_left_name_1 = var_index2;
        tmp_right_name_1 = mod_consts[11];
        tmp_result = BINARY_OPERATION_ADD_OBJECT_LONG_INPLACE(&tmp_left_name_1, tmp_right_name_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_12 = tmp_left_name_1;
        var_index2 = tmp_assign_source_12;

    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_left_name_2;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_2;
        PyObject *tmp_right_name_3;
        if (var_index2 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[14]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 52;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_2;
        }

        tmp_left_name_3 = var_index2;
        if (var_index1 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 52;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_2;
        }

        tmp_right_name_2 = var_index1;
        tmp_left_name_2 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_left_name_3, tmp_right_name_2);
        if (tmp_left_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_2;
        }
        tmp_right_name_3 = mod_consts[11];
        tmp_assign_source_13 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_name_2, tmp_right_name_3);
        Py_DECREF(tmp_left_name_2);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_r1;
            var_r1 = tmp_assign_source_13;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_expression_name_4;
        PyObject *tmp_subscript_name_4;
        if (par_A == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[12]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 53;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_name_4 = par_A;
        if (var_index1 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 53;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_2;
        }

        tmp_subscript_name_4 = var_index1;
        tmp_assign_source_14 = LOOKUP_SUBSCRIPT(tmp_expression_name_4, tmp_subscript_name_4);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_r2;
            var_r2 = tmp_assign_source_14;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_outline_return_value_1;
        int tmp_truth_name_1;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        {
            PyObject *tmp_assign_source_15;
            CHECK_OBJECT(var_r1);
            tmp_assign_source_15 = var_r1;
            {
                PyObject *old = tmp_comparison_chain_1__operand_2;
                tmp_comparison_chain_1__operand_2 = tmp_assign_source_15;
                Py_INCREF(tmp_comparison_chain_1__operand_2);
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_16;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            if (var_j == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[16]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 55;
                type_description_1 = "oooooooooooo";
                goto try_except_handler_3;
            }

            tmp_compexpr_left_2 = var_j;
            CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
            tmp_compexpr_right_2 = tmp_comparison_chain_1__operand_2;
            tmp_assign_source_16 = RICH_COMPARE_LE_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_2, tmp_compexpr_right_2);
            if (tmp_assign_source_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 55;
                type_description_1 = "oooooooooooo";
                goto try_except_handler_3;
            }
            {
                PyObject *old = tmp_comparison_chain_1__comparison_result;
                tmp_comparison_chain_1__comparison_result = tmp_assign_source_16;
                Py_XDECREF(old);
            }

        }
        {
            nuitka_bool tmp_condition_result_3;
            PyObject *tmp_operand_name_1;
            CHECK_OBJECT(tmp_comparison_chain_1__comparison_result);
            tmp_operand_name_1 = tmp_comparison_chain_1__comparison_result;
            tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 55;
                type_description_1 = "oooooooooooo";
                goto try_except_handler_3;
            }
            tmp_condition_result_3 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
                goto branch_yes_3;
            } else {
                goto branch_no_3;
            }
        }
        branch_yes_3:;
        CHECK_OBJECT(tmp_comparison_chain_1__comparison_result);
        tmp_outline_return_value_1 = tmp_comparison_chain_1__comparison_result;
        Py_INCREF(tmp_outline_return_value_1);
        goto try_return_handler_3;
        branch_no_3:;
        {
            PyObject *tmp_compexpr_left_3;
            PyObject *tmp_compexpr_right_3;
            CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
            tmp_compexpr_left_3 = tmp_comparison_chain_1__operand_2;
            if (var_h == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[17]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 55;
                type_description_1 = "oooooooooooo";
                goto try_except_handler_3;
            }

            tmp_compexpr_right_3 = var_h;
            tmp_outline_return_value_1 = RICH_COMPARE_LE_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_3, tmp_compexpr_right_3);
            if (tmp_outline_return_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 55;
                type_description_1 = "oooooooooooo";
                goto try_except_handler_3;
            }
            goto try_return_handler_3;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
        Py_DECREF(tmp_comparison_chain_1__operand_2);
        tmp_comparison_chain_1__operand_2 = NULL;
        CHECK_OBJECT(tmp_comparison_chain_1__comparison_result);
        Py_DECREF(tmp_comparison_chain_1__comparison_result);
        tmp_comparison_chain_1__comparison_result = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_3:;
        exception_keeper_type_1 = exception_type;
        exception_keeper_value_1 = exception_value;
        exception_keeper_tb_1 = exception_tb;
        exception_keeper_lineno_1 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
        Py_DECREF(tmp_comparison_chain_1__operand_2);
        tmp_comparison_chain_1__operand_2 = NULL;
        Py_XDECREF(tmp_comparison_chain_1__comparison_result);
        tmp_comparison_chain_1__comparison_result = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto try_except_handler_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_1:;
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_outline_return_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_outline_return_value_1);

            exception_lineno = 55;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_2;
        }
        tmp_and_left_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_outline_return_value_1);
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_2;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(var_r2);
        tmp_compexpr_left_4 = var_r2;
        if (par_n == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[18]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 55;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_2;
        }

        tmp_compexpr_right_4 = par_n;
        tmp_and_right_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_compexpr_left_4, tmp_compexpr_right_4);
        if (tmp_and_right_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_2 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_2 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
        assert(tmp_condition_result_2 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_left_name_4;
        PyObject *tmp_right_name_4;
        if (var_result == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[19]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 56;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_2;
        }

        tmp_left_name_4 = var_result;
        tmp_right_name_4 = mod_consts[11];
        tmp_result = BINARY_OPERATION_ADD_OBJECT_LONG_INPLACE(&tmp_left_name_4, tmp_right_name_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_17 = tmp_left_name_4;
        var_result = tmp_assign_source_17;

    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_compexpr_left_5;
        PyObject *tmp_compexpr_right_5;
        CHECK_OBJECT(var_r1);
        tmp_compexpr_left_5 = var_r1;
        if (var_best == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[20]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 57;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_2;
        }

        tmp_compexpr_right_5 = var_best;
        tmp_condition_result_4 = RICH_COMPARE_GT_NBOOL_OBJECT_OBJECT(tmp_compexpr_left_5, tmp_compexpr_right_5);
        if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_2;
        }
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
        assert(tmp_condition_result_4 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_18;
        CHECK_OBJECT(var_r1);
        tmp_assign_source_18 = var_r1;
        {
            PyObject *old = var_best;
            var_best = tmp_assign_source_18;
            Py_INCREF(var_best);
            Py_XDECREF(old);
        }

    }
    branch_no_4:;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_left_name_5;
        PyObject *tmp_right_name_5;
        if (var_index2 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[14]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 60;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_2;
        }

        tmp_left_name_5 = var_index2;
        tmp_right_name_5 = mod_consts[11];
        tmp_result = BINARY_OPERATION_ADD_OBJECT_LONG_INPLACE(&tmp_left_name_5, tmp_right_name_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_19 = tmp_left_name_5;
        var_index2 = tmp_assign_source_19;

    }
    {
        PyObject *tmp_assign_source_20;
        CHECK_OBJECT(var_index2);
        tmp_assign_source_20 = var_index2;
        {
            PyObject *old = var_index1;
            var_index1 = tmp_assign_source_20;
            Py_INCREF(var_index1);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_expression_name_5;
        PyObject *tmp_subscript_name_5;
        if (par_A == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[12]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 62;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_name_5 = par_A;
        CHECK_OBJECT(var_i);
        tmp_subscript_name_5 = var_i;
        tmp_assign_source_21 = LOOKUP_SUBSCRIPT(tmp_expression_name_5, tmp_subscript_name_5);
        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_last;
            var_last = tmp_assign_source_21;
            Py_XDECREF(old);
        }

    }
    branch_end_1:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 46;
        type_description_1 = "oooooooooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_compexpr_left_6;
        PyObject *tmp_compexpr_right_6;
        PyObject *tmp_expression_name_6;
        PyObject *tmp_subscript_name_6;
        if (par_A == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[12]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 64;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_6 = par_A;
        tmp_subscript_name_6 = mod_consts[8];
        tmp_compexpr_left_6 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_6, tmp_subscript_name_6, -1);
        if (tmp_compexpr_left_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_n == NULL) {
            Py_DECREF(tmp_compexpr_left_6);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[18]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 64;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_right_6 = par_n;
        tmp_condition_result_5 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_compexpr_left_6, tmp_compexpr_right_6);
        Py_DECREF(tmp_compexpr_left_6);
        if (tmp_condition_result_5 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
        assert(tmp_condition_result_5 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_5:;
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_left_name_6;
        PyObject *tmp_right_name_6;
        if (var_index2 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[14]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 65;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_left_name_6 = var_index2;
        tmp_right_name_6 = mod_consts[11];
        tmp_result = BINARY_OPERATION_ADD_OBJECT_LONG_INPLACE(&tmp_left_name_6, tmp_right_name_6);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_22 = tmp_left_name_6;
        var_index2 = tmp_assign_source_22;

    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_left_name_7;
        PyObject *tmp_left_name_8;
        PyObject *tmp_right_name_7;
        PyObject *tmp_right_name_8;
        CHECK_OBJECT(var_index2);
        tmp_left_name_8 = var_index2;
        if (var_index1 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 66;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_right_name_7 = var_index1;
        tmp_left_name_7 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_left_name_8, tmp_right_name_7);
        if (tmp_left_name_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_8 = mod_consts[11];
        tmp_assign_source_23 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_name_7, tmp_right_name_8);
        Py_DECREF(tmp_left_name_7);
        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_r1;
            var_r1 = tmp_assign_source_23;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_expression_name_7;
        PyObject *tmp_subscript_name_7;
        if (par_A == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[12]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 67;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_7 = par_A;
        if (var_index1 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 67;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_name_7 = var_index1;
        tmp_assign_source_24 = LOOKUP_SUBSCRIPT(tmp_expression_name_7, tmp_subscript_name_7);
        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_r2;
            var_r2 = tmp_assign_source_24;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_6;
        int tmp_and_left_truth_2;
        nuitka_bool tmp_and_left_value_2;
        nuitka_bool tmp_and_right_value_2;
        PyObject *tmp_outline_return_value_2;
        int tmp_truth_name_2;
        PyObject *tmp_compexpr_left_9;
        PyObject *tmp_compexpr_right_9;
        {
            PyObject *tmp_assign_source_25;
            CHECK_OBJECT(var_r1);
            tmp_assign_source_25 = var_r1;
            assert(tmp_comparison_chain_2__operand_2 == NULL);
            Py_INCREF(tmp_assign_source_25);
            tmp_comparison_chain_2__operand_2 = tmp_assign_source_25;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_26;
            PyObject *tmp_compexpr_left_7;
            PyObject *tmp_compexpr_right_7;
            if (var_j == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[16]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 69;
                type_description_1 = "oooooooooooo";
                goto try_except_handler_4;
            }

            tmp_compexpr_left_7 = var_j;
            CHECK_OBJECT(tmp_comparison_chain_2__operand_2);
            tmp_compexpr_right_7 = tmp_comparison_chain_2__operand_2;
            tmp_assign_source_26 = RICH_COMPARE_LE_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_7, tmp_compexpr_right_7);
            if (tmp_assign_source_26 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 69;
                type_description_1 = "oooooooooooo";
                goto try_except_handler_4;
            }
            assert(tmp_comparison_chain_2__comparison_result == NULL);
            tmp_comparison_chain_2__comparison_result = tmp_assign_source_26;
        }
        {
            nuitka_bool tmp_condition_result_7;
            PyObject *tmp_operand_name_2;
            CHECK_OBJECT(tmp_comparison_chain_2__comparison_result);
            tmp_operand_name_2 = tmp_comparison_chain_2__comparison_result;
            tmp_res = CHECK_IF_TRUE(tmp_operand_name_2);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 69;
                type_description_1 = "oooooooooooo";
                goto try_except_handler_4;
            }
            tmp_condition_result_7 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
                goto branch_yes_7;
            } else {
                goto branch_no_7;
            }
        }
        branch_yes_7:;
        CHECK_OBJECT(tmp_comparison_chain_2__comparison_result);
        tmp_outline_return_value_2 = tmp_comparison_chain_2__comparison_result;
        Py_INCREF(tmp_outline_return_value_2);
        goto try_return_handler_4;
        branch_no_7:;
        {
            PyObject *tmp_compexpr_left_8;
            PyObject *tmp_compexpr_right_8;
            CHECK_OBJECT(tmp_comparison_chain_2__operand_2);
            tmp_compexpr_left_8 = tmp_comparison_chain_2__operand_2;
            if (var_h == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[17]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 69;
                type_description_1 = "oooooooooooo";
                goto try_except_handler_4;
            }

            tmp_compexpr_right_8 = var_h;
            tmp_outline_return_value_2 = RICH_COMPARE_LE_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_8, tmp_compexpr_right_8);
            if (tmp_outline_return_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 69;
                type_description_1 = "oooooooooooo";
                goto try_except_handler_4;
            }
            goto try_return_handler_4;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        CHECK_OBJECT(tmp_comparison_chain_2__operand_2);
        Py_DECREF(tmp_comparison_chain_2__operand_2);
        tmp_comparison_chain_2__operand_2 = NULL;
        CHECK_OBJECT(tmp_comparison_chain_2__comparison_result);
        Py_DECREF(tmp_comparison_chain_2__comparison_result);
        tmp_comparison_chain_2__comparison_result = NULL;
        goto outline_result_2;
        // Exception handler code:
        try_except_handler_4:;
        exception_keeper_type_3 = exception_type;
        exception_keeper_value_3 = exception_value;
        exception_keeper_tb_3 = exception_tb;
        exception_keeper_lineno_3 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_comparison_chain_2__operand_2);
        Py_DECREF(tmp_comparison_chain_2__operand_2);
        tmp_comparison_chain_2__operand_2 = NULL;
        Py_XDECREF(tmp_comparison_chain_2__comparison_result);
        tmp_comparison_chain_2__comparison_result = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

        goto frame_exception_exit_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_2:;
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_outline_return_value_2);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_outline_return_value_2);

            exception_lineno = 69;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_2 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_outline_return_value_2);
        tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_2 == 1) {
            goto and_right_2;
        } else {
            goto and_left_2;
        }
        and_right_2:;
        CHECK_OBJECT(var_r2);
        tmp_compexpr_left_9 = var_r2;
        if (par_n == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[18]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 69;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_right_9 = par_n;
        tmp_and_right_value_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_compexpr_left_9, tmp_compexpr_right_9);
        if (tmp_and_right_value_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_6 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        tmp_condition_result_6 = tmp_and_left_value_2;
        and_end_2:;
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
        assert(tmp_condition_result_6 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_6:;
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_left_name_9;
        PyObject *tmp_right_name_9;
        if (var_result == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[19]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 70;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_left_name_9 = var_result;
        tmp_right_name_9 = mod_consts[11];
        tmp_result = BINARY_OPERATION_ADD_OBJECT_LONG_INPLACE(&tmp_left_name_9, tmp_right_name_9);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_27 = tmp_left_name_9;
        var_result = tmp_assign_source_27;

    }
    {
        nuitka_bool tmp_condition_result_8;
        PyObject *tmp_compexpr_left_10;
        PyObject *tmp_compexpr_right_10;
        CHECK_OBJECT(var_r1);
        tmp_compexpr_left_10 = var_r1;
        if (var_best == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[20]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 72;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_right_10 = var_best;
        tmp_condition_result_8 = RICH_COMPARE_GT_NBOOL_OBJECT_OBJECT(tmp_compexpr_left_10, tmp_compexpr_right_10);
        if (tmp_condition_result_8 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
        assert(tmp_condition_result_8 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_8:;
    {
        PyObject *tmp_assign_source_28;
        CHECK_OBJECT(var_r1);
        tmp_assign_source_28 = var_r1;
        {
            PyObject *old = var_best;
            var_best = tmp_assign_source_28;
            Py_INCREF(var_best);
            Py_XDECREF(old);
        }

    }
    branch_no_8:;
    branch_no_6:;
    branch_no_5:;
    if (var_best == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[20]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 75;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_best;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_6fa2000b1cb2b5fd9b7b0b7e26413ff9);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_6fa2000b1cb2b5fd9b7b0b7e26413ff9);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_6fa2000b1cb2b5fd9b7b0b7e26413ff9);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_6fa2000b1cb2b5fd9b7b0b7e26413ff9, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6fa2000b1cb2b5fd9b7b0b7e26413ff9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6fa2000b1cb2b5fd9b7b0b7e26413ff9, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6fa2000b1cb2b5fd9b7b0b7e26413ff9,
        type_description_1,
        par_A,
        par_n,
        var_j,
        var_h,
        var_index1,
        var_index2,
        var_result,
        var_last,
        var_best,
        var_i,
        var_r1,
        var_r2
    );


    // Release cached frame if used for exception.
    if (frame_6fa2000b1cb2b5fd9b7b0b7e26413ff9 == cache_frame_6fa2000b1cb2b5fd9b7b0b7e26413ff9) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_6fa2000b1cb2b5fd9b7b0b7e26413ff9);
        cache_frame_6fa2000b1cb2b5fd9b7b0b7e26413ff9 = NULL;
    }

    assertFrameObject(frame_6fa2000b1cb2b5fd9b7b0b7e26413ff9);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_j);
    var_j = NULL;
    Py_XDECREF(var_h);
    var_h = NULL;
    Py_XDECREF(var_index1);
    var_index1 = NULL;
    Py_XDECREF(var_index2);
    var_index2 = NULL;
    Py_XDECREF(var_result);
    var_result = NULL;
    Py_XDECREF(var_last);
    var_last = NULL;
    Py_XDECREF(var_best);
    var_best = NULL;
    Py_XDECREF(var_i);
    var_i = NULL;
    Py_XDECREF(var_r1);
    var_r1 = NULL;
    Py_XDECREF(var_r2);
    var_r2 = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_j);
    var_j = NULL;
    Py_XDECREF(var_h);
    var_h = NULL;
    Py_XDECREF(var_index1);
    var_index1 = NULL;
    Py_XDECREF(var_index2);
    var_index2 = NULL;
    Py_XDECREF(var_result);
    var_result = NULL;
    Py_XDECREF(var_last);
    var_last = NULL;
    Py_XDECREF(var_best);
    var_best = NULL;
    Py_XDECREF(var_i);
    var_i = NULL;
    Py_XDECREF(var_r1);
    var_r1 = NULL;
    Py_XDECREF(var_r2);
    var_r2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_A);
    Py_DECREF(par_A);
    CHECK_OBJECT(par_n);
    Py_DECREF(par_n);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_A);
    Py_DECREF(par_A);
    CHECK_OBJECT(par_n);
    Py_DECREF(par_n);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl___main__$$$function_4_user_ask(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_n = python_pars[0];
    PyObject *par_j = python_pars[1];
    PyObject *par_h = python_pars[2];
    PyObject *par_A = python_pars[3];
    PyObject *var_index1 = NULL;
    PyObject *var_index2 = NULL;
    PyObject *var_result = NULL;
    PyObject *var_last = NULL;
    PyObject *var_i = NULL;
    PyObject *var_r1 = NULL;
    PyObject *var_r2 = NULL;
    PyObject *tmp_comparison_chain_1__comparison_result = NULL;
    PyObject *tmp_comparison_chain_1__operand_2 = NULL;
    PyObject *tmp_comparison_chain_2__comparison_result = NULL;
    PyObject *tmp_comparison_chain_2__operand_2 = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_06311f8412ea9b87a04b6273be0549c6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    int tmp_res;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_06311f8412ea9b87a04b6273be0549c6 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[10];
        assert(var_index1 == NULL);
        Py_INCREF(tmp_assign_source_1);
        var_index1 = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[10];
        assert(var_index2 == NULL);
        Py_INCREF(tmp_assign_source_2);
        var_index2 = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = mod_consts[10];
        assert(var_result == NULL);
        Py_INCREF(tmp_assign_source_3);
        var_result = tmp_assign_source_3;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_06311f8412ea9b87a04b6273be0549c6)) {
        Py_XDECREF(cache_frame_06311f8412ea9b87a04b6273be0549c6);

#if _DEBUG_REFCOUNTS
        if (cache_frame_06311f8412ea9b87a04b6273be0549c6 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_06311f8412ea9b87a04b6273be0549c6 = MAKE_FUNCTION_FRAME(codeobj_06311f8412ea9b87a04b6273be0549c6, module___main__, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_06311f8412ea9b87a04b6273be0549c6->m_type_description == NULL);
    frame_06311f8412ea9b87a04b6273be0549c6 = cache_frame_06311f8412ea9b87a04b6273be0549c6;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_06311f8412ea9b87a04b6273be0549c6);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_06311f8412ea9b87a04b6273be0549c6) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_subscript_name_1;
        CHECK_OBJECT(par_A);
        tmp_expression_name_1 = par_A;
        tmp_subscript_name_1 = mod_consts[10];
        tmp_assign_source_4 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_1, tmp_subscript_name_1, 0);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_last == NULL);
        var_last = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_xrange_low_1;
        PyObject *tmp_xrange_high_1;
        PyObject *tmp_len_arg_1;
        tmp_xrange_low_1 = mod_consts[11];
        CHECK_OBJECT(par_A);
        tmp_len_arg_1 = par_A;
        tmp_xrange_high_1 = BUILTIN_LEN(tmp_len_arg_1);
        if (tmp_xrange_high_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_iter_arg_1 = BUILTIN_XRANGE2(tmp_xrange_low_1, tmp_xrange_high_1);
        Py_DECREF(tmp_xrange_high_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_5 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_5;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_6 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_6 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooooooooo";
                exception_lineno = 85;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_6;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_7 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_i;
            var_i = tmp_assign_source_7;
            Py_INCREF(var_i);
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_subscript_name_2;
        if (par_A == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[12]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 86;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_name_2 = par_A;
        CHECK_OBJECT(var_i);
        tmp_subscript_name_2 = var_i;
        tmp_compexpr_left_1 = LOOKUP_SUBSCRIPT(tmp_expression_name_2, tmp_subscript_name_2);
        if (tmp_compexpr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        if (var_last == NULL) {
            Py_DECREF(tmp_compexpr_left_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 86;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }

        tmp_compexpr_right_1 = var_last;
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        Py_DECREF(tmp_compexpr_left_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
        assert(tmp_condition_result_1 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_subscript_name_3;
        if (par_A == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[12]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 87;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_name_3 = par_A;
        CHECK_OBJECT(var_i);
        tmp_subscript_name_3 = var_i;
        tmp_assign_source_8 = LOOKUP_SUBSCRIPT(tmp_expression_name_3, tmp_subscript_name_3);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_last;
            var_last = tmp_assign_source_8;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        if (var_index2 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[14]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 88;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }

        tmp_left_name_1 = var_index2;
        tmp_right_name_1 = mod_consts[11];
        tmp_result = BINARY_OPERATION_ADD_OBJECT_LONG_INPLACE(&tmp_left_name_1, tmp_right_name_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_9 = tmp_left_name_1;
        var_index2 = tmp_assign_source_9;

    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_left_name_2;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_2;
        PyObject *tmp_right_name_3;
        if (var_index2 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[14]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 91;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }

        tmp_left_name_3 = var_index2;
        if (var_index1 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 91;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }

        tmp_right_name_2 = var_index1;
        tmp_left_name_2 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_left_name_3, tmp_right_name_2);
        if (tmp_left_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        tmp_right_name_3 = mod_consts[11];
        tmp_assign_source_10 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_name_2, tmp_right_name_3);
        Py_DECREF(tmp_left_name_2);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_r1;
            var_r1 = tmp_assign_source_10;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_expression_name_4;
        PyObject *tmp_subscript_name_4;
        if (par_A == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[12]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 92;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_name_4 = par_A;
        if (var_index1 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 92;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }

        tmp_subscript_name_4 = var_index1;
        tmp_assign_source_11 = LOOKUP_SUBSCRIPT(tmp_expression_name_4, tmp_subscript_name_4);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_r2;
            var_r2 = tmp_assign_source_11;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_outline_return_value_1;
        int tmp_truth_name_1;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        {
            PyObject *tmp_assign_source_12;
            CHECK_OBJECT(var_r1);
            tmp_assign_source_12 = var_r1;
            {
                PyObject *old = tmp_comparison_chain_1__operand_2;
                tmp_comparison_chain_1__operand_2 = tmp_assign_source_12;
                Py_INCREF(tmp_comparison_chain_1__operand_2);
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_13;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            if (par_j == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[16]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 94;
                type_description_1 = "ooooooooooo";
                goto try_except_handler_3;
            }

            tmp_compexpr_left_2 = par_j;
            CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
            tmp_compexpr_right_2 = tmp_comparison_chain_1__operand_2;
            tmp_assign_source_13 = RICH_COMPARE_LE_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_2, tmp_compexpr_right_2);
            if (tmp_assign_source_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 94;
                type_description_1 = "ooooooooooo";
                goto try_except_handler_3;
            }
            {
                PyObject *old = tmp_comparison_chain_1__comparison_result;
                tmp_comparison_chain_1__comparison_result = tmp_assign_source_13;
                Py_XDECREF(old);
            }

        }
        {
            nuitka_bool tmp_condition_result_3;
            PyObject *tmp_operand_name_1;
            CHECK_OBJECT(tmp_comparison_chain_1__comparison_result);
            tmp_operand_name_1 = tmp_comparison_chain_1__comparison_result;
            tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 94;
                type_description_1 = "ooooooooooo";
                goto try_except_handler_3;
            }
            tmp_condition_result_3 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
                goto branch_yes_3;
            } else {
                goto branch_no_3;
            }
        }
        branch_yes_3:;
        CHECK_OBJECT(tmp_comparison_chain_1__comparison_result);
        tmp_outline_return_value_1 = tmp_comparison_chain_1__comparison_result;
        Py_INCREF(tmp_outline_return_value_1);
        goto try_return_handler_3;
        branch_no_3:;
        {
            PyObject *tmp_compexpr_left_3;
            PyObject *tmp_compexpr_right_3;
            CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
            tmp_compexpr_left_3 = tmp_comparison_chain_1__operand_2;
            if (par_h == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[17]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 94;
                type_description_1 = "ooooooooooo";
                goto try_except_handler_3;
            }

            tmp_compexpr_right_3 = par_h;
            tmp_outline_return_value_1 = RICH_COMPARE_LE_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_3, tmp_compexpr_right_3);
            if (tmp_outline_return_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 94;
                type_description_1 = "ooooooooooo";
                goto try_except_handler_3;
            }
            goto try_return_handler_3;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
        Py_DECREF(tmp_comparison_chain_1__operand_2);
        tmp_comparison_chain_1__operand_2 = NULL;
        CHECK_OBJECT(tmp_comparison_chain_1__comparison_result);
        Py_DECREF(tmp_comparison_chain_1__comparison_result);
        tmp_comparison_chain_1__comparison_result = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_3:;
        exception_keeper_type_1 = exception_type;
        exception_keeper_value_1 = exception_value;
        exception_keeper_tb_1 = exception_tb;
        exception_keeper_lineno_1 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
        Py_DECREF(tmp_comparison_chain_1__operand_2);
        tmp_comparison_chain_1__operand_2 = NULL;
        Py_XDECREF(tmp_comparison_chain_1__comparison_result);
        tmp_comparison_chain_1__comparison_result = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto try_except_handler_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_1:;
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_outline_return_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_outline_return_value_1);

            exception_lineno = 94;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        tmp_and_left_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_outline_return_value_1);
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(var_r2);
        tmp_compexpr_left_4 = var_r2;
        if (par_n == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[18]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 94;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }

        tmp_compexpr_right_4 = par_n;
        tmp_and_right_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_compexpr_left_4, tmp_compexpr_right_4);
        if (tmp_and_right_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_2 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_2 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
        assert(tmp_condition_result_2 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_left_name_4;
        PyObject *tmp_right_name_4;
        if (var_result == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[19]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 95;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }

        tmp_left_name_4 = var_result;
        tmp_right_name_4 = mod_consts[11];
        tmp_result = BINARY_OPERATION_ADD_OBJECT_LONG_INPLACE(&tmp_left_name_4, tmp_right_name_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_14 = tmp_left_name_4;
        var_result = tmp_assign_source_14;

    }
    branch_no_2:;
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_left_name_5;
        PyObject *tmp_right_name_5;
        if (var_index2 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[14]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 97;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }

        tmp_left_name_5 = var_index2;
        tmp_right_name_5 = mod_consts[11];
        tmp_result = BINARY_OPERATION_ADD_OBJECT_LONG_INPLACE(&tmp_left_name_5, tmp_right_name_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_15 = tmp_left_name_5;
        var_index2 = tmp_assign_source_15;

    }
    {
        PyObject *tmp_assign_source_16;
        CHECK_OBJECT(var_index2);
        tmp_assign_source_16 = var_index2;
        {
            PyObject *old = var_index1;
            var_index1 = tmp_assign_source_16;
            Py_INCREF(var_index1);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_expression_name_5;
        PyObject *tmp_subscript_name_5;
        if (par_A == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[12]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 99;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_name_5 = par_A;
        CHECK_OBJECT(var_i);
        tmp_subscript_name_5 = var_i;
        tmp_assign_source_17 = LOOKUP_SUBSCRIPT(tmp_expression_name_5, tmp_subscript_name_5);
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_last;
            var_last = tmp_assign_source_17;
            Py_XDECREF(old);
        }

    }
    branch_end_1:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 85;
        type_description_1 = "ooooooooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_compexpr_left_5;
        PyObject *tmp_compexpr_right_5;
        PyObject *tmp_expression_name_6;
        PyObject *tmp_subscript_name_6;
        if (par_A == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[12]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 101;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_6 = par_A;
        tmp_subscript_name_6 = mod_consts[8];
        tmp_compexpr_left_5 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_6, tmp_subscript_name_6, -1);
        if (tmp_compexpr_left_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_n == NULL) {
            Py_DECREF(tmp_compexpr_left_5);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[18]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 101;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_right_5 = par_n;
        tmp_condition_result_4 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_compexpr_left_5, tmp_compexpr_right_5);
        Py_DECREF(tmp_compexpr_left_5);
        if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
        assert(tmp_condition_result_4 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_left_name_6;
        PyObject *tmp_right_name_6;
        if (var_index2 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[14]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 102;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_left_name_6 = var_index2;
        tmp_right_name_6 = mod_consts[11];
        tmp_result = BINARY_OPERATION_ADD_OBJECT_LONG_INPLACE(&tmp_left_name_6, tmp_right_name_6);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_18 = tmp_left_name_6;
        var_index2 = tmp_assign_source_18;

    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_left_name_7;
        PyObject *tmp_left_name_8;
        PyObject *tmp_right_name_7;
        PyObject *tmp_right_name_8;
        CHECK_OBJECT(var_index2);
        tmp_left_name_8 = var_index2;
        if (var_index1 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 103;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_right_name_7 = var_index1;
        tmp_left_name_7 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_left_name_8, tmp_right_name_7);
        if (tmp_left_name_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_8 = mod_consts[11];
        tmp_assign_source_19 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_name_7, tmp_right_name_8);
        Py_DECREF(tmp_left_name_7);
        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_r1;
            var_r1 = tmp_assign_source_19;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_expression_name_7;
        PyObject *tmp_subscript_name_7;
        if (par_A == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[12]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 104;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_7 = par_A;
        if (var_index1 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 104;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_name_7 = var_index1;
        tmp_assign_source_20 = LOOKUP_SUBSCRIPT(tmp_expression_name_7, tmp_subscript_name_7);
        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_r2;
            var_r2 = tmp_assign_source_20;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_5;
        int tmp_and_left_truth_2;
        nuitka_bool tmp_and_left_value_2;
        nuitka_bool tmp_and_right_value_2;
        PyObject *tmp_outline_return_value_2;
        int tmp_truth_name_2;
        PyObject *tmp_compexpr_left_8;
        PyObject *tmp_compexpr_right_8;
        {
            PyObject *tmp_assign_source_21;
            CHECK_OBJECT(var_r1);
            tmp_assign_source_21 = var_r1;
            assert(tmp_comparison_chain_2__operand_2 == NULL);
            Py_INCREF(tmp_assign_source_21);
            tmp_comparison_chain_2__operand_2 = tmp_assign_source_21;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_22;
            PyObject *tmp_compexpr_left_6;
            PyObject *tmp_compexpr_right_6;
            if (par_j == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[16]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 106;
                type_description_1 = "ooooooooooo";
                goto try_except_handler_4;
            }

            tmp_compexpr_left_6 = par_j;
            CHECK_OBJECT(tmp_comparison_chain_2__operand_2);
            tmp_compexpr_right_6 = tmp_comparison_chain_2__operand_2;
            tmp_assign_source_22 = RICH_COMPARE_LE_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_6, tmp_compexpr_right_6);
            if (tmp_assign_source_22 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 106;
                type_description_1 = "ooooooooooo";
                goto try_except_handler_4;
            }
            assert(tmp_comparison_chain_2__comparison_result == NULL);
            tmp_comparison_chain_2__comparison_result = tmp_assign_source_22;
        }
        {
            nuitka_bool tmp_condition_result_6;
            PyObject *tmp_operand_name_2;
            CHECK_OBJECT(tmp_comparison_chain_2__comparison_result);
            tmp_operand_name_2 = tmp_comparison_chain_2__comparison_result;
            tmp_res = CHECK_IF_TRUE(tmp_operand_name_2);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 106;
                type_description_1 = "ooooooooooo";
                goto try_except_handler_4;
            }
            tmp_condition_result_6 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
                goto branch_yes_6;
            } else {
                goto branch_no_6;
            }
        }
        branch_yes_6:;
        CHECK_OBJECT(tmp_comparison_chain_2__comparison_result);
        tmp_outline_return_value_2 = tmp_comparison_chain_2__comparison_result;
        Py_INCREF(tmp_outline_return_value_2);
        goto try_return_handler_4;
        branch_no_6:;
        {
            PyObject *tmp_compexpr_left_7;
            PyObject *tmp_compexpr_right_7;
            CHECK_OBJECT(tmp_comparison_chain_2__operand_2);
            tmp_compexpr_left_7 = tmp_comparison_chain_2__operand_2;
            if (par_h == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[17]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 106;
                type_description_1 = "ooooooooooo";
                goto try_except_handler_4;
            }

            tmp_compexpr_right_7 = par_h;
            tmp_outline_return_value_2 = RICH_COMPARE_LE_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_7, tmp_compexpr_right_7);
            if (tmp_outline_return_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 106;
                type_description_1 = "ooooooooooo";
                goto try_except_handler_4;
            }
            goto try_return_handler_4;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        CHECK_OBJECT(tmp_comparison_chain_2__operand_2);
        Py_DECREF(tmp_comparison_chain_2__operand_2);
        tmp_comparison_chain_2__operand_2 = NULL;
        CHECK_OBJECT(tmp_comparison_chain_2__comparison_result);
        Py_DECREF(tmp_comparison_chain_2__comparison_result);
        tmp_comparison_chain_2__comparison_result = NULL;
        goto outline_result_2;
        // Exception handler code:
        try_except_handler_4:;
        exception_keeper_type_3 = exception_type;
        exception_keeper_value_3 = exception_value;
        exception_keeper_tb_3 = exception_tb;
        exception_keeper_lineno_3 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_comparison_chain_2__operand_2);
        Py_DECREF(tmp_comparison_chain_2__operand_2);
        tmp_comparison_chain_2__operand_2 = NULL;
        Py_XDECREF(tmp_comparison_chain_2__comparison_result);
        tmp_comparison_chain_2__comparison_result = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

        goto frame_exception_exit_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_2:;
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_outline_return_value_2);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_outline_return_value_2);

            exception_lineno = 106;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_2 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_outline_return_value_2);
        tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_2 == 1) {
            goto and_right_2;
        } else {
            goto and_left_2;
        }
        and_right_2:;
        CHECK_OBJECT(var_r2);
        tmp_compexpr_left_8 = var_r2;
        if (par_n == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[18]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 106;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_right_8 = par_n;
        tmp_and_right_value_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_compexpr_left_8, tmp_compexpr_right_8);
        if (tmp_and_right_value_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_5 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        tmp_condition_result_5 = tmp_and_left_value_2;
        and_end_2:;
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
        assert(tmp_condition_result_5 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_5:;
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_left_name_9;
        PyObject *tmp_right_name_9;
        if (var_result == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[19]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 107;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_left_name_9 = var_result;
        tmp_right_name_9 = mod_consts[11];
        tmp_result = BINARY_OPERATION_ADD_OBJECT_LONG_INPLACE(&tmp_left_name_9, tmp_right_name_9);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_23 = tmp_left_name_9;
        var_result = tmp_assign_source_23;

    }
    branch_no_5:;
    branch_no_4:;
    if (var_result == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[19]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 109;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_result;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_06311f8412ea9b87a04b6273be0549c6);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_06311f8412ea9b87a04b6273be0549c6);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_06311f8412ea9b87a04b6273be0549c6);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_06311f8412ea9b87a04b6273be0549c6, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_06311f8412ea9b87a04b6273be0549c6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_06311f8412ea9b87a04b6273be0549c6, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_06311f8412ea9b87a04b6273be0549c6,
        type_description_1,
        par_n,
        par_j,
        par_h,
        par_A,
        var_index1,
        var_index2,
        var_result,
        var_last,
        var_i,
        var_r1,
        var_r2
    );


    // Release cached frame if used for exception.
    if (frame_06311f8412ea9b87a04b6273be0549c6 == cache_frame_06311f8412ea9b87a04b6273be0549c6) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_06311f8412ea9b87a04b6273be0549c6);
        cache_frame_06311f8412ea9b87a04b6273be0549c6 = NULL;
    }

    assertFrameObject(frame_06311f8412ea9b87a04b6273be0549c6);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_index1);
    var_index1 = NULL;
    Py_XDECREF(var_index2);
    var_index2 = NULL;
    Py_XDECREF(var_result);
    var_result = NULL;
    Py_XDECREF(var_last);
    var_last = NULL;
    Py_XDECREF(var_i);
    var_i = NULL;
    Py_XDECREF(var_r1);
    var_r1 = NULL;
    Py_XDECREF(var_r2);
    var_r2 = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_index1);
    var_index1 = NULL;
    Py_XDECREF(var_index2);
    var_index2 = NULL;
    Py_XDECREF(var_result);
    var_result = NULL;
    Py_XDECREF(var_last);
    var_last = NULL;
    Py_XDECREF(var_i);
    var_i = NULL;
    Py_XDECREF(var_r1);
    var_r1 = NULL;
    Py_XDECREF(var_r2);
    var_r2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_n);
    Py_DECREF(par_n);
    CHECK_OBJECT(par_j);
    Py_DECREF(par_j);
    CHECK_OBJECT(par_h);
    Py_DECREF(par_h);
    CHECK_OBJECT(par_A);
    Py_DECREF(par_A);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_n);
    Py_DECREF(par_n);
    CHECK_OBJECT(par_j);
    Py_DECREF(par_j);
    CHECK_OBJECT(par_h);
    Py_DECREF(par_h);
    CHECK_OBJECT(par_A);
    Py_DECREF(par_A);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl___main__$$$function_5_main_program(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *var_range1 = NULL;
    PyObject *var_leng = NULL;
    PyObject *var_A = NULL;
    PyObject *var_typed_a = NULL;
    PyObject *var_s = NULL;
    PyObject *var_i = NULL;
    PyObject *var_res1 = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_1e72882e399d9d0e3a01920cc11193e6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_preserved_type_2;
    PyObject *exception_preserved_value_2;
    PyTracebackObject *exception_preserved_tb_2;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_1e72882e399d9d0e3a01920cc11193e6 = NULL;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_1e72882e399d9d0e3a01920cc11193e6)) {
        Py_XDECREF(cache_frame_1e72882e399d9d0e3a01920cc11193e6);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1e72882e399d9d0e3a01920cc11193e6 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1e72882e399d9d0e3a01920cc11193e6 = MAKE_FUNCTION_FRAME(codeobj_1e72882e399d9d0e3a01920cc11193e6, module___main__, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_1e72882e399d9d0e3a01920cc11193e6->m_type_description == NULL);
    frame_1e72882e399d9d0e3a01920cc11193e6 = cache_frame_1e72882e399d9d0e3a01920cc11193e6;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_1e72882e399d9d0e3a01920cc11193e6);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_1e72882e399d9d0e3a01920cc11193e6) == 2); // Frame stack

    // Framed code:
    loop_start_1:;
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_call_result_1;
        tmp_called_name_1 = LOOKUP_BUILTIN(mod_consts[0]);
        assert(tmp_called_name_1 != NULL);
        frame_1e72882e399d9d0e3a01920cc11193e6->m_frame.f_lineno = 124;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, mod_consts[21]);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_called_name_2;
        tmp_called_name_2 = LOOKUP_BUILTIN(mod_consts[3]);
        assert(tmp_called_name_2 != NULL);
        frame_1e72882e399d9d0e3a01920cc11193e6->m_frame.f_lineno = 125;
        tmp_called_instance_1 = CALL_FUNCTION_NO_ARGS(tmp_called_name_2);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_1e72882e399d9d0e3a01920cc11193e6->m_frame.f_lineno = 125;
        tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_1, mod_consts[22], &PyTuple_GET_ITEM(mod_consts[23], 0));

        Py_DECREF(tmp_called_instance_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_range1;
            var_range1 = tmp_assign_source_1;
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_tmp_condition_result_1_object_1;
        CHECK_OBJECT(var_range1);
        tmp_len_arg_1 = var_range1;
        tmp_compexpr_left_1 = BUILTIN_LEN(tmp_len_arg_1);
        if (tmp_compexpr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = mod_consts[24];
        tmp_tmp_condition_result_1_object_1 = RICH_COMPARE_NE_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        Py_DECREF(tmp_compexpr_left_1);
        assert(!(tmp_tmp_condition_result_1_object_1 == NULL));
        tmp_condition_result_1 = CHECK_IF_TRUE(tmp_tmp_condition_result_1_object_1) == 1;
        Py_DECREF(tmp_tmp_condition_result_1_object_1);
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_name_3;
        PyObject *tmp_call_result_2;
        tmp_called_name_3 = LOOKUP_BUILTIN(mod_consts[0]);
        assert(tmp_called_name_3 != NULL);
        frame_1e72882e399d9d0e3a01920cc11193e6->m_frame.f_lineno = 128;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_3, mod_consts[25]);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_name_4;
        PyObject *tmp_call_result_3;
        tmp_called_name_4 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_called_name_4 == NULL)) {
            tmp_called_name_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
        }

        if (tmp_called_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_1e72882e399d9d0e3a01920cc11193e6->m_frame.f_lineno = 129;
        tmp_call_result_3 = CALL_FUNCTION_NO_ARGS(tmp_called_name_4);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    goto loop_start_1;
    goto branch_end_1;
    branch_no_1:;
    // Tried code:
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_int_arg_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        int tmp_ass_subscript_res_1;
        CHECK_OBJECT(var_range1);
        tmp_expression_name_1 = var_range1;
        tmp_subscript_name_1 = mod_consts[10];
        tmp_int_arg_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_1, tmp_subscript_name_1, 0);
        if (tmp_int_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        tmp_ass_subvalue_1 = PyNumber_Int(tmp_int_arg_1);
        Py_DECREF(tmp_int_arg_1);
        if (tmp_ass_subvalue_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_range1);
        tmp_ass_subscribed_1 = var_range1;
        tmp_ass_subscript_1 = mod_consts[10];
        tmp_ass_subscript_res_1 = SET_SUBSCRIPT_CONST(tmp_ass_subscribed_1, tmp_ass_subscript_1, 0, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subvalue_1);
        if (tmp_ass_subscript_res_1 == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_int_arg_2;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        int tmp_ass_subscript_res_2;
        CHECK_OBJECT(var_range1);
        tmp_expression_name_2 = var_range1;
        tmp_subscript_name_2 = mod_consts[11];
        tmp_int_arg_2 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_2, tmp_subscript_name_2, 1);
        if (tmp_int_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        tmp_ass_subvalue_2 = PyNumber_Int(tmp_int_arg_2);
        Py_DECREF(tmp_int_arg_2);
        if (tmp_ass_subvalue_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_range1);
        tmp_ass_subscribed_2 = var_range1;
        tmp_ass_subscript_2 = mod_consts[11];
        tmp_ass_subscript_res_2 = SET_SUBSCRIPT_CONST(tmp_ass_subscribed_2, tmp_ass_subscript_2, 1, tmp_ass_subvalue_2);
        Py_DECREF(tmp_ass_subvalue_2);
        if (tmp_ass_subscript_res_2 == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception.
    exception_preserved_type_1 = EXC_TYPE(PyThreadState_GET());
    Py_XINCREF(exception_preserved_type_1);
    exception_preserved_value_1 = EXC_VALUE(PyThreadState_GET());
    Py_XINCREF(exception_preserved_value_1);
    exception_preserved_tb_1 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
    Py_XINCREF(exception_preserved_tb_1);

    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_1e72882e399d9d0e3a01920cc11193e6, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_1e72882e399d9d0e3a01920cc11193e6, exception_keeper_lineno_1);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_1, exception_keeper_tb_1);
    PUBLISH_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        PyObject *tmp_called_name_5;
        PyObject *tmp_call_result_4;
        tmp_called_name_5 = LOOKUP_BUILTIN(mod_consts[0]);
        assert(tmp_called_name_5 != NULL);
        frame_1e72882e399d9d0e3a01920cc11193e6->m_frame.f_lineno = 137;
        tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_5, mod_consts[27]);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;
            type_description_1 = "ooooooo";
            goto try_except_handler_3;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        PyObject *tmp_called_name_6;
        PyObject *tmp_call_result_5;
        tmp_called_name_6 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_called_name_6 == NULL)) {
            tmp_called_name_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
        }

        if (tmp_called_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;
            type_description_1 = "ooooooo";
            goto try_except_handler_3;
        }
        frame_1e72882e399d9d0e3a01920cc11193e6->m_frame.f_lineno = 138;
        tmp_call_result_5 = CALL_FUNCTION_NO_ARGS(tmp_called_name_6);
        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;
            type_description_1 = "ooooooo";
            goto try_except_handler_3;
        }
        Py_DECREF(tmp_call_result_5);
    }
    goto try_continue_handler_3;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception.
    SET_CURRENT_EXCEPTION(exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1);
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // try continue handler code:
    try_continue_handler_3:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION(exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1);
    goto loop_start_1;
    // End of try:
    // End of try:
    try_end_1:;
    branch_end_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_subscript_name_3;
        PyObject *tmp_expression_name_4;
        PyObject *tmp_subscript_name_4;
        CHECK_OBJECT(var_range1);
        tmp_expression_name_3 = var_range1;
        tmp_subscript_name_3 = mod_consts[11];
        tmp_compexpr_left_2 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_3, tmp_subscript_name_3, 1);
        if (tmp_compexpr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_range1);
        tmp_expression_name_4 = var_range1;
        tmp_subscript_name_4 = mod_consts[10];
        tmp_compexpr_right_2 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_4, tmp_subscript_name_4, 0);
        if (tmp_compexpr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_compexpr_left_2);

            exception_lineno = 141;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = RICH_COMPARE_LT_NBOOL_OBJECT_OBJECT(tmp_compexpr_left_2, tmp_compexpr_right_2);
        Py_DECREF(tmp_compexpr_left_2);
        Py_DECREF(tmp_compexpr_right_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
        assert(tmp_condition_result_2 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_2:;
    {
        PyObject *tmp_called_name_7;
        PyObject *tmp_call_result_6;
        tmp_called_name_7 = LOOKUP_BUILTIN(mod_consts[0]);
        assert(tmp_called_name_7 != NULL);
        frame_1e72882e399d9d0e3a01920cc11193e6->m_frame.f_lineno = 142;
        tmp_call_result_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_7, mod_consts[28]);
        if (tmp_call_result_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_6);
    }
    {
        PyObject *tmp_called_name_8;
        PyObject *tmp_call_result_7;
        tmp_called_name_8 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_called_name_8 == NULL)) {
            tmp_called_name_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
        }

        if (tmp_called_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_1e72882e399d9d0e3a01920cc11193e6->m_frame.f_lineno = 143;
        tmp_call_result_7 = CALL_FUNCTION_NO_ARGS(tmp_called_name_8);
        if (tmp_call_result_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_7);
    }
    goto loop_start_1;
    branch_no_2:;
    {
        PyObject *tmp_called_name_9;
        PyObject *tmp_call_result_8;
        tmp_called_name_9 = LOOKUP_BUILTIN(mod_consts[0]);
        assert(tmp_called_name_9 != NULL);
        frame_1e72882e399d9d0e3a01920cc11193e6->m_frame.f_lineno = 146;
        tmp_call_result_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_9, mod_consts[29]);
        if (tmp_call_result_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_8);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_int_arg_3;
        PyObject *tmp_called_name_10;
        tmp_called_name_10 = LOOKUP_BUILTIN(mod_consts[3]);
        assert(tmp_called_name_10 != NULL);
        frame_1e72882e399d9d0e3a01920cc11193e6->m_frame.f_lineno = 149;
        tmp_int_arg_3 = CALL_FUNCTION_NO_ARGS(tmp_called_name_10);
        if (tmp_int_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;
            type_description_1 = "ooooooo";
            goto try_except_handler_4;
        }
        tmp_assign_source_2 = PyNumber_Int(tmp_int_arg_3);
        Py_DECREF(tmp_int_arg_3);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;
            type_description_1 = "ooooooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = var_leng;
            var_leng = tmp_assign_source_2;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        PyObject *tmp_tmp_condition_result_3_object_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(var_leng);
        tmp_compexpr_left_3 = var_leng;
        tmp_compexpr_right_3 = mod_consts[11];
        tmp_tmp_condition_result_3_object_1 = RICH_COMPARE_LT_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_3, tmp_compexpr_right_3);
        if (tmp_tmp_condition_result_3_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;
            type_description_1 = "ooooooo";
            goto try_except_handler_4;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_tmp_condition_result_3_object_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_condition_result_3_object_1);

            exception_lineno = 150;
            type_description_1 = "ooooooo";
            goto try_except_handler_4;
        }
        tmp_condition_result_3 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_tmp_condition_result_3_object_1);
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_called_name_11;
        PyObject *tmp_call_result_9;
        tmp_called_name_11 = LOOKUP_BUILTIN(mod_consts[0]);
        assert(tmp_called_name_11 != NULL);
        frame_1e72882e399d9d0e3a01920cc11193e6->m_frame.f_lineno = 151;
        tmp_call_result_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_11, mod_consts[30]);
        if (tmp_call_result_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;
            type_description_1 = "ooooooo";
            goto try_except_handler_4;
        }
        Py_DECREF(tmp_call_result_9);
    }
    {
        PyObject *tmp_called_name_12;
        PyObject *tmp_call_result_10;
        tmp_called_name_12 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_called_name_12 == NULL)) {
            tmp_called_name_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
        }

        if (tmp_called_name_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;
            type_description_1 = "ooooooo";
            goto try_except_handler_4;
        }
        frame_1e72882e399d9d0e3a01920cc11193e6->m_frame.f_lineno = 152;
        tmp_call_result_10 = CALL_FUNCTION_NO_ARGS(tmp_called_name_12);
        if (tmp_call_result_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;
            type_description_1 = "ooooooo";
            goto try_except_handler_4;
        }
        Py_DECREF(tmp_call_result_10);
    }
    goto loop_start_1;
    branch_no_3:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception.
    exception_preserved_type_2 = EXC_TYPE(PyThreadState_GET());
    Py_XINCREF(exception_preserved_type_2);
    exception_preserved_value_2 = EXC_VALUE(PyThreadState_GET());
    Py_XINCREF(exception_preserved_value_2);
    exception_preserved_tb_2 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
    Py_XINCREF(exception_preserved_tb_2);

    if (exception_keeper_tb_3 == NULL) {
        exception_keeper_tb_3 = MAKE_TRACEBACK(frame_1e72882e399d9d0e3a01920cc11193e6, exception_keeper_lineno_3);
    } else if (exception_keeper_lineno_3 != 0) {
        exception_keeper_tb_3 = ADD_TRACEBACK(exception_keeper_tb_3, frame_1e72882e399d9d0e3a01920cc11193e6, exception_keeper_lineno_3);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_3, exception_keeper_tb_3);
    PUBLISH_EXCEPTION(&exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3);
    // Tried code:
    {
        PyObject *tmp_called_name_13;
        PyObject *tmp_call_result_11;
        tmp_called_name_13 = LOOKUP_BUILTIN(mod_consts[0]);
        assert(tmp_called_name_13 != NULL);
        frame_1e72882e399d9d0e3a01920cc11193e6->m_frame.f_lineno = 155;
        tmp_call_result_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_13, mod_consts[31]);
        if (tmp_call_result_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;
            type_description_1 = "ooooooo";
            goto try_except_handler_5;
        }
        Py_DECREF(tmp_call_result_11);
    }
    {
        PyObject *tmp_called_name_14;
        PyObject *tmp_call_result_12;
        tmp_called_name_14 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_called_name_14 == NULL)) {
            tmp_called_name_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
        }

        if (tmp_called_name_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "ooooooo";
            goto try_except_handler_5;
        }
        frame_1e72882e399d9d0e3a01920cc11193e6->m_frame.f_lineno = 156;
        tmp_call_result_12 = CALL_FUNCTION_NO_ARGS(tmp_called_name_14);
        if (tmp_call_result_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "ooooooo";
            goto try_except_handler_5;
        }
        Py_DECREF(tmp_call_result_12);
    }
    goto try_continue_handler_5;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception.
    SET_CURRENT_EXCEPTION(exception_preserved_type_2, exception_preserved_value_2, exception_preserved_tb_2);
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // try continue handler code:
    try_continue_handler_5:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION(exception_preserved_type_2, exception_preserved_value_2, exception_preserved_tb_2);
    goto loop_start_1;
    // End of try:
    // End of try:
    try_end_2:;
    {
        PyObject *tmp_called_name_15;
        PyObject *tmp_call_result_13;
        tmp_called_name_15 = LOOKUP_BUILTIN(mod_consts[0]);
        assert(tmp_called_name_15 != NULL);
        frame_1e72882e399d9d0e3a01920cc11193e6->m_frame.f_lineno = 161;
        tmp_call_result_13 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_15, mod_consts[32]);
        if (tmp_call_result_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_13);
    }
    {
        PyObject *tmp_called_name_16;
        PyObject *tmp_call_result_14;
        tmp_called_name_16 = LOOKUP_BUILTIN(mod_consts[0]);
        assert(tmp_called_name_16 != NULL);
        frame_1e72882e399d9d0e3a01920cc11193e6->m_frame.f_lineno = 163;
        tmp_call_result_14 = CALL_FUNCTION_NO_ARGS(tmp_called_name_16);
        if (tmp_call_result_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_14);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_name_17;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_expression_name_5;
        PyObject *tmp_subscript_name_5;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_expression_name_6;
        PyObject *tmp_subscript_name_6;
        tmp_called_name_17 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_name_17 == NULL)) {
            tmp_called_name_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_name_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;
            type_description_1 = "ooooooo";
            goto try_except_handler_6;
        }
        CHECK_OBJECT(var_leng);
        tmp_args_element_name_1 = var_leng;
        CHECK_OBJECT(var_range1);
        tmp_expression_name_5 = var_range1;
        tmp_subscript_name_5 = mod_consts[10];
        tmp_args_element_name_2 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_5, tmp_subscript_name_5, 0);
        if (tmp_args_element_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;
            type_description_1 = "ooooooo";
            goto try_except_handler_6;
        }
        CHECK_OBJECT(var_range1);
        tmp_expression_name_6 = var_range1;
        tmp_subscript_name_6 = mod_consts[11];
        tmp_args_element_name_3 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_6, tmp_subscript_name_6, 1);
        if (tmp_args_element_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_name_2);

            exception_lineno = 166;
            type_description_1 = "ooooooo";
            goto try_except_handler_6;
        }
        frame_1e72882e399d9d0e3a01920cc11193e6->m_frame.f_lineno = 166;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3};
            tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_17, call_args);
        }

        Py_DECREF(tmp_args_element_name_2);
        Py_DECREF(tmp_args_element_name_3);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;
            type_description_1 = "ooooooo";
            goto try_except_handler_6;
        }
        tmp_assign_source_3 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;
            type_description_1 = "ooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__source_iter;
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_3;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_4 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
        if (tmp_assign_source_4 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooo";
            exception_lineno = 166;
            goto try_except_handler_7;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_1;
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_4;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_5 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
        if (tmp_assign_source_5 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooo";
            exception_lineno = 166;
            goto try_except_handler_7;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_2;
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_5;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_1); assert(HAS_ITERNEXT(tmp_iterator_name_1));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_1)->tp_iternext)(tmp_iterator_name_1);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                    type_description_1 = "ooooooo";
                    exception_lineno = 166;
                    goto try_except_handler_7;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[34];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooooo";
            exception_lineno = 166;
            goto try_except_handler_7;
        }
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto try_except_handler_6;
    // End of try:
    try_end_3:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_6 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = var_A;
            var_A = tmp_assign_source_6;
            Py_INCREF(var_A);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_7 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = var_typed_a;
            var_typed_a = tmp_assign_source_7;
            Py_INCREF(var_typed_a);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_called_name_18;
        PyObject *tmp_call_result_15;
        tmp_called_name_18 = LOOKUP_BUILTIN(mod_consts[0]);
        assert(tmp_called_name_18 != NULL);
        frame_1e72882e399d9d0e3a01920cc11193e6->m_frame.f_lineno = 167;
        tmp_call_result_15 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_18, mod_consts[35]);
        if (tmp_call_result_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_15);
    }
    {
        PyObject *tmp_called_name_19;
        PyObject *tmp_call_result_16;
        tmp_called_name_19 = LOOKUP_BUILTIN(mod_consts[0]);
        assert(tmp_called_name_19 != NULL);
        frame_1e72882e399d9d0e3a01920cc11193e6->m_frame.f_lineno = 172;
        tmp_call_result_16 = CALL_FUNCTION_NO_ARGS(tmp_called_name_19);
        if (tmp_call_result_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_16);
    }
    {
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = mod_consts[36];
        {
            PyObject *old = var_s;
            var_s = tmp_assign_source_8;
            Py_INCREF(var_s);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_17;
        PyObject *tmp_args_element_name_4;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[37]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[37]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_s);
        tmp_args_element_name_4 = var_s;
        frame_1e72882e399d9d0e3a01920cc11193e6->m_frame.f_lineno = 175;
        tmp_call_result_17 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[38], tmp_args_element_name_4);
        if (tmp_call_result_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_17);
    }
    {
        PyObject *tmp_called_name_20;
        PyObject *tmp_call_result_18;
        tmp_called_name_20 = LOOKUP_BUILTIN(mod_consts[0]);
        assert(tmp_called_name_20 != NULL);
        frame_1e72882e399d9d0e3a01920cc11193e6->m_frame.f_lineno = 188;
        tmp_call_result_18 = CALL_FUNCTION_NO_ARGS(tmp_called_name_20);
        if (tmp_call_result_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_18);
    }
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = mod_consts[36];
        {
            PyObject *old = var_s;
            assert(old != NULL);
            var_s = tmp_assign_source_9;
            Py_INCREF(var_s);
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_19;
        PyObject *tmp_args_element_name_5;
        tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[37]);

        if (unlikely(tmp_called_instance_3 == NULL)) {
            tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[37]);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_s);
        tmp_args_element_name_5 = var_s;
        frame_1e72882e399d9d0e3a01920cc11193e6->m_frame.f_lineno = 190;
        tmp_call_result_19 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_3, mod_consts[38], tmp_args_element_name_5);
        if (tmp_call_result_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_19);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_xrange_low_1;
        PyObject *tmp_expression_name_7;
        PyObject *tmp_subscript_name_7;
        PyObject *tmp_xrange_high_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_expression_name_8;
        PyObject *tmp_subscript_name_8;
        PyObject *tmp_right_name_1;
        CHECK_OBJECT(var_range1);
        tmp_expression_name_7 = var_range1;
        tmp_subscript_name_7 = mod_consts[10];
        tmp_xrange_low_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_7, tmp_subscript_name_7, 0);
        if (tmp_xrange_low_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_range1);
        tmp_expression_name_8 = var_range1;
        tmp_subscript_name_8 = mod_consts[11];
        tmp_left_name_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_8, tmp_subscript_name_8, 1);
        if (tmp_left_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_xrange_low_1);

            exception_lineno = 192;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_1 = mod_consts[11];
        tmp_xrange_high_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_name_1, tmp_right_name_1);
        Py_DECREF(tmp_left_name_1);
        if (tmp_xrange_high_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_xrange_low_1);

            exception_lineno = 192;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_iter_arg_2 = BUILTIN_XRANGE2(tmp_xrange_low_1, tmp_xrange_high_1);
        Py_DECREF(tmp_xrange_low_1);
        Py_DECREF(tmp_xrange_high_1);
        if (tmp_iter_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_10 = MAKE_ITERATOR(tmp_iter_arg_2);
        Py_DECREF(tmp_iter_arg_2);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = tmp_for_loop_1__for_iterator;
            tmp_for_loop_1__for_iterator = tmp_assign_source_10;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    loop_start_2:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_11;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_11 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_11 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooooo";
                exception_lineno = 192;
                goto try_except_handler_8;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_11;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_12;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_12 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_i;
            var_i = tmp_assign_source_12;
            Py_INCREF(var_i);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_called_name_21;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_args_element_name_7;
        tmp_called_name_21 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[39]);

        if (unlikely(tmp_called_name_21 == NULL)) {
            tmp_called_name_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[39]);
        }

        if (tmp_called_name_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 194;
            type_description_1 = "ooooooo";
            goto try_except_handler_8;
        }
        if (var_typed_a == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[40]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 194;
            type_description_1 = "ooooooo";
            goto try_except_handler_8;
        }

        tmp_args_element_name_6 = var_typed_a;
        CHECK_OBJECT(var_i);
        tmp_args_element_name_7 = var_i;
        frame_1e72882e399d9d0e3a01920cc11193e6->m_frame.f_lineno = 194;
        {
            PyObject *call_args[] = {tmp_args_element_name_6, tmp_args_element_name_7};
            tmp_assign_source_13 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_21, call_args);
        }

        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 194;
            type_description_1 = "ooooooo";
            goto try_except_handler_8;
        }
        {
            PyObject *old = var_res1;
            var_res1 = tmp_assign_source_13;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_name_22;
        PyObject *tmp_call_result_20;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_args_element_name_10;
        PyObject *tmp_args_element_name_11;
        tmp_called_name_22 = LOOKUP_BUILTIN(mod_consts[0]);
        assert(tmp_called_name_22 != NULL);
        tmp_args_element_name_8 = mod_consts[41];
        CHECK_OBJECT(var_i);
        tmp_args_element_name_9 = var_i;
        tmp_args_element_name_10 = mod_consts[42];
        CHECK_OBJECT(var_res1);
        tmp_args_element_name_11 = var_res1;
        frame_1e72882e399d9d0e3a01920cc11193e6->m_frame.f_lineno = 196;
        {
            PyObject *call_args[] = {tmp_args_element_name_8, tmp_args_element_name_9, tmp_args_element_name_10, tmp_args_element_name_11};
            tmp_call_result_20 = CALL_FUNCTION_WITH_ARGS4(tmp_called_name_22, call_args);
        }

        if (tmp_call_result_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;
            type_description_1 = "ooooooo";
            goto try_except_handler_8;
        }
        Py_DECREF(tmp_call_result_20);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_left_name_2;
        PyObject *tmp_left_name_3;
        PyObject *tmp_left_name_4;
        PyObject *tmp_left_name_5;
        PyObject *tmp_right_name_2;
        PyObject *tmp_unicode_arg_1;
        PyObject *tmp_right_name_3;
        PyObject *tmp_right_name_4;
        PyObject *tmp_unicode_arg_2;
        PyObject *tmp_right_name_5;
        tmp_left_name_5 = mod_consts[43];
        CHECK_OBJECT(var_i);
        tmp_unicode_arg_1 = var_i;
        tmp_right_name_2 = PyObject_Unicode(tmp_unicode_arg_1);
        if (tmp_right_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;
            type_description_1 = "ooooooo";
            goto try_except_handler_8;
        }
        tmp_left_name_4 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_left_name_5, tmp_right_name_2);
        Py_DECREF(tmp_right_name_2);
        if (tmp_left_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;
            type_description_1 = "ooooooo";
            goto try_except_handler_8;
        }
        tmp_right_name_3 = mod_consts[44];
        tmp_left_name_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_left_name_4, tmp_right_name_3);
        Py_DECREF(tmp_left_name_4);
        if (tmp_left_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;
            type_description_1 = "ooooooo";
            goto try_except_handler_8;
        }
        CHECK_OBJECT(var_res1);
        tmp_unicode_arg_2 = var_res1;
        tmp_right_name_4 = PyObject_Unicode(tmp_unicode_arg_2);
        if (tmp_right_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_3);

            exception_lineno = 198;
            type_description_1 = "ooooooo";
            goto try_except_handler_8;
        }
        tmp_left_name_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_3, tmp_right_name_4);
        Py_DECREF(tmp_left_name_3);
        Py_DECREF(tmp_right_name_4);
        if (tmp_left_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;
            type_description_1 = "ooooooo";
            goto try_except_handler_8;
        }
        tmp_right_name_5 = mod_consts[36];
        tmp_assign_source_14 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_left_name_2, tmp_right_name_5);
        Py_DECREF(tmp_left_name_2);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;
            type_description_1 = "ooooooo";
            goto try_except_handler_8;
        }
        {
            PyObject *old = var_s;
            var_s = tmp_assign_source_14;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_instance_4;
        PyObject *tmp_call_result_21;
        PyObject *tmp_args_element_name_12;
        tmp_called_instance_4 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[37]);

        if (unlikely(tmp_called_instance_4 == NULL)) {
            tmp_called_instance_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[37]);
        }

        if (tmp_called_instance_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;
            type_description_1 = "ooooooo";
            goto try_except_handler_8;
        }
        CHECK_OBJECT(var_s);
        tmp_args_element_name_12 = var_s;
        frame_1e72882e399d9d0e3a01920cc11193e6->m_frame.f_lineno = 199;
        tmp_call_result_21 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_4, mod_consts[38], tmp_args_element_name_12);
        if (tmp_call_result_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;
            type_description_1 = "ooooooo";
            goto try_except_handler_8;
        }
        Py_DECREF(tmp_call_result_21);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 192;
        type_description_1 = "ooooooo";
        goto try_except_handler_8;
    }
    goto loop_start_2;
    loop_end_1:;
    goto try_end_5;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    {
        PyObject *tmp_assign_source_15;
        tmp_assign_source_15 = mod_consts[36];
        {
            PyObject *old = var_s;
            var_s = tmp_assign_source_15;
            Py_INCREF(var_s);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_instance_5;
        PyObject *tmp_call_result_22;
        PyObject *tmp_args_element_name_13;
        tmp_called_instance_5 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[37]);

        if (unlikely(tmp_called_instance_5 == NULL)) {
            tmp_called_instance_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[37]);
        }

        if (tmp_called_instance_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_s);
        tmp_args_element_name_13 = var_s;
        frame_1e72882e399d9d0e3a01920cc11193e6->m_frame.f_lineno = 204;
        tmp_call_result_22 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_5, mod_consts[38], tmp_args_element_name_13);
        if (tmp_call_result_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_22);
    }
    {
        PyObject *tmp_called_name_23;
        PyObject *tmp_call_result_23;
        tmp_called_name_23 = LOOKUP_BUILTIN(mod_consts[0]);
        assert(tmp_called_name_23 != NULL);
        frame_1e72882e399d9d0e3a01920cc11193e6->m_frame.f_lineno = 205;
        tmp_call_result_23 = CALL_FUNCTION_NO_ARGS(tmp_called_name_23);
        if (tmp_call_result_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_23);
    }
    {
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT(var_A);
        tmp_tuple_element_1 = var_A;
        tmp_return_value = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
        if (var_typed_a == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[40]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 207;
            type_description_1 = "ooooooo";
            goto tuple_build_exception_1;
        }

        tmp_tuple_element_1 = var_typed_a;
        PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_1);
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_return_value);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        goto frame_return_exit_1;
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 123;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_1e72882e399d9d0e3a01920cc11193e6);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_1e72882e399d9d0e3a01920cc11193e6);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_1e72882e399d9d0e3a01920cc11193e6);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1e72882e399d9d0e3a01920cc11193e6, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1e72882e399d9d0e3a01920cc11193e6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1e72882e399d9d0e3a01920cc11193e6, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1e72882e399d9d0e3a01920cc11193e6,
        type_description_1,
        var_range1,
        var_leng,
        var_A,
        var_typed_a,
        var_s,
        var_i,
        var_res1
    );


    // Release cached frame if used for exception.
    if (frame_1e72882e399d9d0e3a01920cc11193e6 == cache_frame_1e72882e399d9d0e3a01920cc11193e6) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_1e72882e399d9d0e3a01920cc11193e6);
        cache_frame_1e72882e399d9d0e3a01920cc11193e6 = NULL;
    }

    assertFrameObject(frame_1e72882e399d9d0e3a01920cc11193e6);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_range1);
    Py_DECREF(var_range1);
    var_range1 = NULL;
    CHECK_OBJECT(var_leng);
    Py_DECREF(var_leng);
    var_leng = NULL;
    CHECK_OBJECT(var_A);
    Py_DECREF(var_A);
    var_A = NULL;
    Py_XDECREF(var_typed_a);
    var_typed_a = NULL;
    CHECK_OBJECT(var_s);
    Py_DECREF(var_s);
    var_s = NULL;
    Py_XDECREF(var_i);
    var_i = NULL;
    Py_XDECREF(var_res1);
    var_res1 = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_range1);
    var_range1 = NULL;
    Py_XDECREF(var_leng);
    var_leng = NULL;
    Py_XDECREF(var_A);
    var_A = NULL;
    Py_XDECREF(var_typed_a);
    var_typed_a = NULL;
    Py_XDECREF(var_s);
    var_s = NULL;
    Py_XDECREF(var_i);
    var_i = NULL;
    Py_XDECREF(var_res1);
    var_res1 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION___main__$$$function_1_start() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl___main__$$$function_1_start,
        mod_consts[26],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_89201162da2238618a57f26c4390f496,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module___main__,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION___main__$$$function_2_gen_A() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl___main__$$$function_2_gen_A,
        mod_consts[33],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_e51435d404d7f9a727a8aba609606b9c,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module___main__,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION___main__$$$function_3_get_best() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl___main__$$$function_3_get_best,
        mod_consts[39],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_6fa2000b1cb2b5fd9b7b0b7e26413ff9,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module___main__,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION___main__$$$function_4_user_ask() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl___main__$$$function_4_user_ask,
        mod_consts[65],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_06311f8412ea9b87a04b6273be0549c6,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module___main__,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION___main__$$$function_5_main_program() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl___main__$$$function_5_main_program,
        mod_consts[66],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_1e72882e399d9d0e3a01920cc11193e6,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module___main__,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}


extern void _initCompiledCellType();
extern void _initCompiledGeneratorType();
extern void _initCompiledFunctionType();
extern void _initCompiledMethodType();
extern void _initCompiledFrameType();

extern PyTypeObject Nuitka_Loader_Type;

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
// Provide a way to create find a function via its C code and create it back
// in another process, useful for multiprocessing extensions like dill

function_impl_code functable___main__[] = {
    impl___main__$$$function_1_start,
    impl___main__$$$function_2_gen_A,
    impl___main__$$$function_3_get_best,
    impl___main__$$$function_4_user_ask,
    impl___main__$$$function_5_main_program,
    NULL
};

static char const *_reduce_compiled_function_argnames[] = {
    "func",
    NULL
};

static PyObject *_reduce_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    PyObject *func;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "O:reduce_compiled_function", (char **)_reduce_compiled_function_argnames, &func, NULL)) {
        return NULL;
    }

    if (Nuitka_Function_Check(func) == false) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "not a compiled function");
        return NULL;
    }

    struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)func;

    function_impl_code *current = functable___main__;
    int offset = 0;

    while (*current != NULL) {
        if (*current == function->m_c_code) {
            break;
        }

        current += 1;
        offset += 1;
    }

    if (*current == NULL) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "Cannot find compiled function in module.");
        return NULL;
    }

    PyObject *code_object_desc = PyTuple_New(6);
    PyTuple_SET_ITEM0(code_object_desc, 0, function->m_code_object->co_filename);
    PyTuple_SET_ITEM0(code_object_desc, 1, function->m_code_object->co_name);
    PyTuple_SET_ITEM(code_object_desc, 2, PyLong_FromLong(function->m_code_object->co_firstlineno));
    PyTuple_SET_ITEM0(code_object_desc, 3, function->m_code_object->co_varnames);
    PyTuple_SET_ITEM(code_object_desc, 4, PyLong_FromLong(function->m_code_object->co_argcount));
    PyTuple_SET_ITEM(code_object_desc, 5, PyLong_FromLong(function->m_code_object->co_flags));

    CHECK_OBJECT_DEEP(code_object_desc);

    PyObject *result = PyTuple_New(4);
    PyTuple_SET_ITEM(result, 0, PyLong_FromLong(offset));
    PyTuple_SET_ITEM(result, 1, code_object_desc);
    PyTuple_SET_ITEM0(result, 2, function->m_defaults);
    PyTuple_SET_ITEM0(result, 3, function->m_doc != NULL ? function->m_doc : Py_None);

    CHECK_OBJECT_DEEP(result);

    return result;
}

static PyMethodDef _method_def_reduce_compiled_function = {"reduce_compiled_function", (PyCFunction)_reduce_compiled_function,
                                                           METH_VARARGS | METH_KEYWORDS, NULL};

static char const *_create_compiled_function_argnames[] = {
    "func",
    "code_object_desc",
    "defaults",
    "doc",
    NULL
};


static PyObject *_create_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    CHECK_OBJECT_DEEP(args);

    PyObject *func;
    PyObject *code_object_desc;
    PyObject *defaults;
    PyObject *doc;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "OOOO:create_compiled_function", (char **)_create_compiled_function_argnames, &func, &code_object_desc, &defaults, &doc, NULL)) {
        return NULL;
    }

    int offset = PyLong_AsLong(func);

    if (offset == -1 && ERROR_OCCURRED()) {
        return NULL;
    }

    if (offset > sizeof(functable___main__) || offset < 0) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "Wrong offset for compiled function.");
        return NULL;
    }

    PyObject *filename = PyTuple_GET_ITEM(code_object_desc, 0);
    PyObject *function_name = PyTuple_GET_ITEM(code_object_desc, 1);
    PyObject *line = PyTuple_GET_ITEM(code_object_desc, 2);
    int line_int = PyLong_AsLong(line);
    assert(!ERROR_OCCURRED());

    PyObject *argnames = PyTuple_GET_ITEM(code_object_desc, 3);
    PyObject *arg_count = PyTuple_GET_ITEM(code_object_desc, 4);
    int arg_count_int = PyLong_AsLong(arg_count);
    assert(!ERROR_OCCURRED());
    PyObject *flags = PyTuple_GET_ITEM(code_object_desc, 5);
    int flags_int = PyLong_AsLong(flags);
    assert(!ERROR_OCCURRED());

    PyCodeObject *code_object = MAKE_CODEOBJECT(
        filename,
        line_int,
        flags_int,
        function_name,
        argnames,
        arg_count_int,
        0, // TODO: Missing kw_only_count
        0 // TODO: Missing pos_only_count
    );

    // TODO: More stuff needed for Python3, best to re-order arguments of MAKE_CODEOBJECT.
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        functable___main__[offset],
        code_object->co_name,
#if PYTHON_VERSION >= 300
        NULL, // TODO: Not transferring qualname yet
#endif
        code_object,
        defaults,
#if PYTHON_VERSION >= 300
        NULL, // kwdefaults are done on the outside currently
        NULL, // TODO: Not transferring annotations
#endif
        module___main__,
        doc,
        NULL,
        0
    );

    return (PyObject *)result;
}

static PyMethodDef _method_def_create_compiled_function = {
    "create_compiled_function",
    (PyCFunction)_create_compiled_function,
    METH_VARARGS | METH_KEYWORDS, NULL
};


#endif

// Actual name might be different when loaded as a package.
NUITKA_MAY_BE_UNUSED static char const *module_full_name = "__main__";

// Internal entry point for module code.
PyObject *modulecode___main__(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *module_entry) {
    module___main__ = module;

#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if (_init_done) {
#ifdef _NUITKA_TRACE
        PRINT_STRING("__main__: Skipping module init, already done.\n");
#endif

        return module___main__;
    } else {
        _init_done = true;
    }
#endif

#ifdef _NUITKA_MODULE
    // In case of a stand alone extension module, need to call initialization
    // the init here because that's the first and only time we are going to get
    // called here.

    // May have to activate constants blob.
#if defined(_NUITKA_CONSTANTS_FROM_RESOURCE)
    loadConstantsResource();
#endif

    // Initialize the constant values used.
    _initBuiltinModule();
    createGlobalConstants();

    /* Initialize the compiled types of Nuitka. */
    _initCompiledCellType();
    _initCompiledGeneratorType();
    _initCompiledFunctionType();
    _initCompiledMethodType();
    _initCompiledFrameType();

#if PYTHON_VERSION < 300
    _initSlotCompare();
#endif
#if PYTHON_VERSION >= 270
    _initSlotIternext();
#endif

    patchBuiltinModule();
    patchTypeComparison();

    // Enable meta path based loader if not already done.
#ifdef _NUITKA_TRACE
    PRINT_STRING("__main__: Calling setupMetaPathBasedLoader().\n");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("__main__: Calling createModuleConstants().\n");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("__main__: Calling createModuleCodeObjects().\n");
#endif
    createModuleCodeObjects();

    // PRINT_STRING("in init__main__\n");

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.

    moduledict___main__ = MODULE_DICT(module___main__);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        PyObject *function_tables = PyObject_GetAttrString((PyObject *)builtin_module, "compiled_function_tables");
        if (function_tables == NULL) {
            DROP_ERROR_OCCURRED();
            function_tables = PyDict_New();
        }
        PyObject_SetAttrString((PyObject *)builtin_module, "compiled_function_tables", function_tables);
        PyObject *funcs = PyTuple_New(2);
        PyTuple_SET_ITEM(funcs, 0, PyCFunction_New(&_method_def_reduce_compiled_function, NULL));
        PyTuple_SET_ITEM(funcs, 1, PyCFunction_New(&_method_def_create_compiled_function, NULL));
        PyDict_SetItemString(function_tables, module_full_name, funcs);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict___main__,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict___main__,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict___main__,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict___main__,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict___main__,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module___main__);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !1
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict___main__, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0(moduledict___main__, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 1
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict___main__, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module___main__);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        CHECK_OBJECT(spec_value);

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__element_3 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    PyObject *tmp_tuple_unpack_3__element_1 = NULL;
    PyObject *tmp_tuple_unpack_3__element_2 = NULL;
    PyObject *tmp_tuple_unpack_3__element_3 = NULL;
    PyObject *tmp_tuple_unpack_3__source_iter = NULL;
    struct Nuitka_FrameObject *frame_a2f3da3f0c947a8de7a3fa9788acc6d7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;

    // Module code.
    // Frame without reuse.
    frame_a2f3da3f0c947a8de7a3fa9788acc6d7 = MAKE_MODULE_FRAME(codeobj_a2f3da3f0c947a8de7a3fa9788acc6d7, module___main__);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_a2f3da3f0c947a8de7a3fa9788acc6d7);
    assert(Py_REFCNT(frame_a2f3da3f0c947a8de7a3fa9788acc6d7) == 2);

    // Framed code:
    {
        PyObject *tmp_name_name_1;
        PyObject *tmp_level_name_1;
        PyObject *tmp_imported_value_1;
        tmp_name_name_1 = mod_consts[45];
        tmp_level_name_1 = mod_consts[10];
        frame_a2f3da3f0c947a8de7a3fa9788acc6d7->m_frame.f_lineno = 1;
        tmp_imported_value_1 = IMPORT_MODULE_KW(tmp_name_name_1, NULL, NULL, NULL, tmp_level_name_1);
        if (tmp_imported_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_imported_value_1);
    }
    {
        PyObject *tmp_name_name_2;
        PyObject *tmp_level_name_2;
        PyObject *tmp_imported_value_2;
        tmp_name_name_2 = mod_consts[46];
        tmp_level_name_2 = mod_consts[10];
        frame_a2f3da3f0c947a8de7a3fa9788acc6d7->m_frame.f_lineno = 1;
        tmp_imported_value_2 = IMPORT_MODULE_KW(tmp_name_name_2, NULL, NULL, NULL, tmp_level_name_2);
        if (tmp_imported_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_imported_value_2);
    }
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict___main__, (Nuitka_StringObject *)mod_consts[47], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[48];
        UPDATE_STRING_DICT0(moduledict___main__, (Nuitka_StringObject *)mod_consts[49], tmp_assign_source_2);
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = Py_None;
        UPDATE_STRING_DICT0(moduledict___main__, (Nuitka_StringObject *)mod_consts[50], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = PyDict_New();
        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[51], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = mod_consts[52];
        tmp_globals_name_1 = (PyObject *)moduledict___main__;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = mod_consts[53];
        tmp_level_name_3 = mod_consts[10];
        frame_a2f3da3f0c947a8de7a3fa9788acc6d7->m_frame.f_lineno = 1;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_name_3, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_3);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict___main__,
                mod_consts[4],
                mod_consts[10]
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[4]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[4], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_4;
        tmp_name_name_4 = mod_consts[54];
        tmp_globals_name_2 = (PyObject *)moduledict___main__;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = mod_consts[55];
        tmp_level_name_4 = mod_consts[10];
        frame_a2f3da3f0c947a8de7a3fa9788acc6d7->m_frame.f_lineno = 2;
        tmp_assign_source_6 = IMPORT_MODULE5(tmp_name_name_4, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_4);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
        tmp_import_from_1__module = tmp_assign_source_6;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict___main__,
                mod_consts[56],
                mod_consts[10]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[56]);
        }

        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[56], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict___main__,
                mod_consts[57],
                mod_consts[10]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME(tmp_import_name_from_3, mod_consts[57]);
        }

        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[57], tmp_assign_source_8);
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT(tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_name_name_5;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_5;
        tmp_name_name_5 = mod_consts[58];
        tmp_globals_name_3 = (PyObject *)moduledict___main__;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = mod_consts[59];
        tmp_level_name_5 = mod_consts[10];
        frame_a2f3da3f0c947a8de7a3fa9788acc6d7->m_frame.f_lineno = 3;
        tmp_import_name_from_4 = IMPORT_MODULE5(tmp_name_name_5, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_5);
        if (tmp_import_name_from_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict___main__,
                mod_consts[7],
                mod_consts[10]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME(tmp_import_name_from_4, mod_consts[7]);
        }

        Py_DECREF(tmp_import_name_from_4);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[7], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_open_filename_1;
        PyObject *tmp_open_mode_1;
        PyObject *tmp_open_encoding_1;
        tmp_open_filename_1 = mod_consts[60];
        tmp_open_mode_1 = mod_consts[61];
        tmp_open_encoding_1 = mod_consts[62];
        tmp_assign_source_10 = BUILTIN_OPEN(tmp_open_filename_1, tmp_open_mode_1, NULL, tmp_open_encoding_1, NULL, NULL, NULL, NULL);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[37], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;


        tmp_assign_source_11 = MAKE_FUNCTION___main__$$$function_1_start();

        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[26], tmp_assign_source_11);
    }
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_call_result_1;
        tmp_called_name_1 = LOOKUP_BUILTIN(mod_consts[0]);
        assert(tmp_called_name_1 != NULL);
        frame_a2f3da3f0c947a8de7a3fa9788acc6d7->m_frame.f_lineno = 17;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, mod_consts[63]);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_call_result_2;
        tmp_called_name_2 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_called_name_2 == NULL)) {
            tmp_called_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
        }

        assert(!(tmp_called_name_2 == NULL));
        frame_a2f3da3f0c947a8de7a3fa9788acc6d7->m_frame.f_lineno = 18;
        tmp_call_result_2 = CALL_FUNCTION_NO_ARGS(tmp_called_name_2);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_called_name_3;
        PyObject *tmp_called_name_4;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_args_element_name_1;
        tmp_called_name_4 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[56]);

        if (unlikely(tmp_called_name_4 == NULL)) {
            tmp_called_name_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
        }

        if (tmp_called_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        tmp_kw_name_1 = PyDict_Copy(mod_consts[64]);
        frame_a2f3da3f0c947a8de7a3fa9788acc6d7->m_frame.f_lineno = 21;
        tmp_called_name_3 = CALL_FUNCTION_WITH_KEYARGS(tmp_called_name_4, tmp_kw_name_1);
        Py_DECREF(tmp_kw_name_1);
        if (tmp_called_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }


        tmp_args_element_name_1 = MAKE_FUNCTION___main__$$$function_2_gen_A();

        frame_a2f3da3f0c947a8de7a3fa9788acc6d7->m_frame.f_lineno = 21;
        tmp_assign_source_12 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_3, tmp_args_element_name_1);
        Py_DECREF(tmp_called_name_3);
        Py_DECREF(tmp_args_element_name_1);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[33], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_called_name_5;
        PyObject *tmp_called_name_6;
        PyObject *tmp_kw_name_2;
        PyObject *tmp_args_element_name_2;
        tmp_called_name_6 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[56]);

        if (unlikely(tmp_called_name_6 == NULL)) {
            tmp_called_name_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
        }

        if (tmp_called_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto frame_exception_exit_1;
        }
        tmp_kw_name_2 = PyDict_Copy(mod_consts[64]);
        frame_a2f3da3f0c947a8de7a3fa9788acc6d7->m_frame.f_lineno = 34;
        tmp_called_name_5 = CALL_FUNCTION_WITH_KEYARGS(tmp_called_name_6, tmp_kw_name_2);
        Py_DECREF(tmp_kw_name_2);
        if (tmp_called_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto frame_exception_exit_1;
        }


        tmp_args_element_name_2 = MAKE_FUNCTION___main__$$$function_3_get_best();

        frame_a2f3da3f0c947a8de7a3fa9788acc6d7->m_frame.f_lineno = 34;
        tmp_assign_source_13 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_5, tmp_args_element_name_2);
        Py_DECREF(tmp_called_name_5);
        Py_DECREF(tmp_args_element_name_2);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[39], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_called_name_7;
        PyObject *tmp_called_name_8;
        PyObject *tmp_kw_name_3;
        PyObject *tmp_args_element_name_3;
        tmp_called_name_8 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[56]);

        if (unlikely(tmp_called_name_8 == NULL)) {
            tmp_called_name_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
        }

        if (tmp_called_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;

            goto frame_exception_exit_1;
        }
        tmp_kw_name_3 = PyDict_Copy(mod_consts[64]);
        frame_a2f3da3f0c947a8de7a3fa9788acc6d7->m_frame.f_lineno = 78;
        tmp_called_name_7 = CALL_FUNCTION_WITH_KEYARGS(tmp_called_name_8, tmp_kw_name_3);
        Py_DECREF(tmp_kw_name_3);
        if (tmp_called_name_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;

            goto frame_exception_exit_1;
        }


        tmp_args_element_name_3 = MAKE_FUNCTION___main__$$$function_4_user_ask();

        frame_a2f3da3f0c947a8de7a3fa9788acc6d7->m_frame.f_lineno = 78;
        tmp_assign_source_14 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_7, tmp_args_element_name_3);
        Py_DECREF(tmp_called_name_7);
        Py_DECREF(tmp_args_element_name_3);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[65], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;


        tmp_assign_source_15 = MAKE_FUNCTION___main__$$$function_5_main_program();

        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[66], tmp_assign_source_15);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_name_9;
        tmp_called_name_9 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[66]);

        if (unlikely(tmp_called_name_9 == NULL)) {
            tmp_called_name_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[66]);
        }

        assert(!(tmp_called_name_9 == NULL));
        frame_a2f3da3f0c947a8de7a3fa9788acc6d7->m_frame.f_lineno = 211;
        tmp_iter_arg_1 = CALL_FUNCTION_NO_ARGS(tmp_called_name_9);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;

            goto try_except_handler_2;
        }
        tmp_assign_source_16 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;

            goto try_except_handler_2;
        }
        assert(tmp_tuple_unpack_1__source_iter == NULL);
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_16;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_17 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
        if (tmp_assign_source_17 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }



            exception_lineno = 211;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_1 == NULL);
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_17;
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_18 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
        if (tmp_assign_source_18 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }



            exception_lineno = 211;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_18;
    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_1); assert(HAS_ITERNEXT(tmp_iterator_name_1));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_1)->tp_iternext)(tmp_iterator_name_1);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 211;
                    goto try_except_handler_3;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[34];
            Py_INCREF(exception_value);
            exception_tb = NULL;


            exception_lineno = 211;
            goto try_except_handler_3;
        }
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_2;
    // End of try:
    try_end_2:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_19;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_19 = tmp_tuple_unpack_1__element_1;
        UPDATE_STRING_DICT0(moduledict___main__, (Nuitka_StringObject *)mod_consts[12], tmp_assign_source_19);
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_20;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_20 = tmp_tuple_unpack_1__element_2;
        UPDATE_STRING_DICT0(moduledict___main__, (Nuitka_StringObject *)mod_consts[40], tmp_assign_source_20);
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_21;
        tmp_assign_source_21 = mod_consts[36];
        UPDATE_STRING_DICT0(moduledict___main__, (Nuitka_StringObject *)mod_consts[67], tmp_assign_source_21);
    }
    {
        PyObject *tmp_called_name_10;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_name_4;
        tmp_expression_name_1 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[37]);

        if (unlikely(tmp_expression_name_1 == NULL)) {
            tmp_expression_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[37]);
        }

        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 216;

            goto frame_exception_exit_1;
        }
        tmp_called_name_10 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[38]);
        if (tmp_called_name_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 216;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_4 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[67]);

        if (unlikely(tmp_args_element_name_4 == NULL)) {
            tmp_args_element_name_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[67]);
        }

        if (tmp_args_element_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_10);

            exception_lineno = 216;

            goto frame_exception_exit_1;
        }
        frame_a2f3da3f0c947a8de7a3fa9788acc6d7->m_frame.f_lineno = 216;
        tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_10, tmp_args_element_name_4);
        Py_DECREF(tmp_called_name_10);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 216;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_called_name_11;
        PyObject *tmp_call_result_4;
        tmp_called_name_11 = LOOKUP_BUILTIN(mod_consts[0]);
        assert(tmp_called_name_11 != NULL);
        frame_a2f3da3f0c947a8de7a3fa9788acc6d7->m_frame.f_lineno = 218;
        tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_11, mod_consts[68]);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        PyObject *tmp_called_name_12;
        PyObject *tmp_call_result_5;
        tmp_called_name_12 = LOOKUP_BUILTIN(mod_consts[0]);
        assert(tmp_called_name_12 != NULL);
        frame_a2f3da3f0c947a8de7a3fa9788acc6d7->m_frame.f_lineno = 219;
        tmp_call_result_5 = CALL_FUNCTION_NO_ARGS(tmp_called_name_12);
        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }
    {
        PyObject *tmp_assign_source_22;
        tmp_assign_source_22 = mod_consts[11];
        UPDATE_STRING_DICT0(moduledict___main__, (Nuitka_StringObject *)mod_consts[69], tmp_assign_source_22);
    }
    loop_start_1:;
    {
        bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        tmp_compexpr_left_1 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[69]);

        if (unlikely(tmp_compexpr_left_1 == NULL)) {
            tmp_compexpr_left_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[69]);
        }

        if (tmp_compexpr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;

            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_compexpr_left_1 == tmp_compexpr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    goto loop_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_called_name_13;
        tmp_called_name_13 = LOOKUP_BUILTIN(mod_consts[3]);
        assert(tmp_called_name_13 != NULL);
        frame_a2f3da3f0c947a8de7a3fa9788acc6d7->m_frame.f_lineno = 224;
        tmp_assign_source_23 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_13, mod_consts[70]);
        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 224;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[69], tmp_assign_source_23);
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_tmp_condition_result_2_object_1;
        int tmp_truth_name_1;
        tmp_compexpr_left_2 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[69]);

        if (unlikely(tmp_compexpr_left_2 == NULL)) {
            tmp_compexpr_left_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[69]);
        }

        assert(!(tmp_compexpr_left_2 == NULL));
        tmp_compexpr_right_2 = mod_consts[71];
        tmp_tmp_condition_result_2_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_2, tmp_compexpr_right_2);
        if (tmp_tmp_condition_result_2_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 227;

            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_tmp_condition_result_2_object_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_condition_result_2_object_1);

            exception_lineno = 227;

            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_tmp_condition_result_2_object_1);
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    goto loop_end_1;
    branch_no_2:;
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_called_instance_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[69]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[69]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;

            goto try_except_handler_5;
        }
        frame_a2f3da3f0c947a8de7a3fa9788acc6d7->m_frame.f_lineno = 231;
        tmp_iter_arg_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[22]);
        if (tmp_iter_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;

            goto try_except_handler_5;
        }
        tmp_assign_source_24 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
        Py_DECREF(tmp_iter_arg_2);
        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;

            goto try_except_handler_5;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__source_iter;
            tmp_tuple_unpack_2__source_iter = tmp_assign_source_24;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_25 = UNPACK_NEXT(tmp_unpack_3, 0, 3);
        if (tmp_assign_source_25 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }



            exception_lineno = 231;
            goto try_except_handler_6;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__element_1;
            tmp_tuple_unpack_2__element_1 = tmp_assign_source_25;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_26 = UNPACK_NEXT(tmp_unpack_4, 1, 3);
        if (tmp_assign_source_26 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }



            exception_lineno = 231;
            goto try_except_handler_6;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__element_2;
            tmp_tuple_unpack_2__element_2 = tmp_assign_source_26;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_unpack_5;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_5 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_27 = UNPACK_NEXT(tmp_unpack_5, 2, 3);
        if (tmp_assign_source_27 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }



            exception_lineno = 231;
            goto try_except_handler_6;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__element_3;
            tmp_tuple_unpack_2__element_3 = tmp_assign_source_27;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_2;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_iterator_name_2 = tmp_tuple_unpack_2__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_2); assert(HAS_ITERNEXT(tmp_iterator_name_2));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_2)->tp_iternext)(tmp_iterator_name_2);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 231;
                    goto try_except_handler_6;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[72];
            Py_INCREF(exception_value);
            exception_tb = NULL;


            exception_lineno = 231;
            goto try_except_handler_6;
        }
    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto try_except_handler_5;
    // End of try:
    try_end_4:;
    goto try_end_5;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;
    Py_XDECREF(tmp_tuple_unpack_2__element_3);
    tmp_tuple_unpack_2__element_3 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto try_except_handler_4;
    // End of try:
    try_end_5:;
    CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    {
        PyObject *tmp_assign_source_28;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
        tmp_assign_source_28 = tmp_tuple_unpack_2__element_1;
        UPDATE_STRING_DICT0(moduledict___main__, (Nuitka_StringObject *)mod_consts[18], tmp_assign_source_28);
    }
    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;

    {
        PyObject *tmp_assign_source_29;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
        tmp_assign_source_29 = tmp_tuple_unpack_2__element_2;
        UPDATE_STRING_DICT0(moduledict___main__, (Nuitka_StringObject *)mod_consts[16], tmp_assign_source_29);
    }
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;

    {
        PyObject *tmp_assign_source_30;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_3);
        tmp_assign_source_30 = tmp_tuple_unpack_2__element_3;
        UPDATE_STRING_DICT0(moduledict___main__, (Nuitka_StringObject *)mod_consts[17], tmp_assign_source_30);
    }
    Py_XDECREF(tmp_tuple_unpack_2__element_3);
    tmp_tuple_unpack_2__element_3 = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_iter_arg_3;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_int_arg_1;
        tmp_int_arg_1 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_int_arg_1 == NULL)) {
            tmp_int_arg_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_int_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 232;

            goto try_except_handler_7;
        }
        tmp_tuple_element_1 = PyNumber_Int(tmp_int_arg_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 232;

            goto try_except_handler_7;
        }
        tmp_iter_arg_3 = PyTuple_New(3);
        {
            PyObject *tmp_int_arg_2;
            PyObject *tmp_int_arg_3;
            PyTuple_SET_ITEM(tmp_iter_arg_3, 0, tmp_tuple_element_1);
            tmp_int_arg_2 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[16]);

            if (unlikely(tmp_int_arg_2 == NULL)) {
                tmp_int_arg_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
            }

            if (tmp_int_arg_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 232;

                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = PyNumber_Int(tmp_int_arg_2);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 232;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_iter_arg_3, 1, tmp_tuple_element_1);
            tmp_int_arg_3 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_int_arg_3 == NULL)) {
                tmp_int_arg_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
            }

            if (tmp_int_arg_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 232;

                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = PyNumber_Int(tmp_int_arg_3);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 232;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_iter_arg_3, 2, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_iter_arg_3);
        goto try_except_handler_7;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_assign_source_31 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_3);
        Py_DECREF(tmp_iter_arg_3);
        assert(!(tmp_assign_source_31 == NULL));
        {
            PyObject *old = tmp_tuple_unpack_3__source_iter;
            tmp_tuple_unpack_3__source_iter = tmp_assign_source_31;
            Py_XDECREF(old);
        }

    }
    goto try_end_6;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_3__element_1);
    tmp_tuple_unpack_3__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_3__element_2);
    tmp_tuple_unpack_3__element_2 = NULL;
    Py_XDECREF(tmp_tuple_unpack_3__element_3);
    tmp_tuple_unpack_3__element_3 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto try_except_handler_4;
    // End of try:
    try_end_6:;
    goto try_end_7;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception.
    exception_preserved_type_1 = EXC_TYPE(PyThreadState_GET());
    Py_XINCREF(exception_preserved_type_1);
    exception_preserved_value_1 = EXC_VALUE(PyThreadState_GET());
    Py_XINCREF(exception_preserved_value_1);
    exception_preserved_tb_1 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
    Py_XINCREF(exception_preserved_tb_1);

    if (exception_keeper_tb_7 == NULL) {
        exception_keeper_tb_7 = MAKE_TRACEBACK(frame_a2f3da3f0c947a8de7a3fa9788acc6d7, exception_keeper_lineno_7);
    } else if (exception_keeper_lineno_7 != 0) {
        exception_keeper_tb_7 = ADD_TRACEBACK(exception_keeper_tb_7, frame_a2f3da3f0c947a8de7a3fa9788acc6d7, exception_keeper_lineno_7);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_7, &exception_keeper_value_7, &exception_keeper_tb_7);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_7, exception_keeper_tb_7);
    PUBLISH_EXCEPTION(&exception_keeper_type_7, &exception_keeper_value_7, &exception_keeper_tb_7);
    // Tried code:
    {
        PyObject *tmp_called_name_14;
        PyObject *tmp_call_result_6;
        tmp_called_name_14 = LOOKUP_BUILTIN(mod_consts[0]);
        assert(tmp_called_name_14 != NULL);
        frame_a2f3da3f0c947a8de7a3fa9788acc6d7->m_frame.f_lineno = 234;
        tmp_call_result_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_14, mod_consts[73]);
        if (tmp_call_result_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;

            goto try_except_handler_8;
        }
        Py_DECREF(tmp_call_result_6);
    }
    goto try_continue_handler_8;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception.
    SET_CURRENT_EXCEPTION(exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1);
    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto frame_exception_exit_1;
    // try continue handler code:
    try_continue_handler_8:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION(exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1);
    goto loop_start_1;
    // End of try:
    // End of try:
    try_end_7:;
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_unpack_6;
        CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
        tmp_unpack_6 = tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_32 = UNPACK_NEXT_INFALLIBLE(tmp_unpack_6);
        assert(!(tmp_assign_source_32 == NULL));
        {
            PyObject *old = tmp_tuple_unpack_3__element_1;
            tmp_tuple_unpack_3__element_1 = tmp_assign_source_32;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_unpack_7;
        CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
        tmp_unpack_7 = tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_33 = UNPACK_NEXT_INFALLIBLE(tmp_unpack_7);
        assert(!(tmp_assign_source_33 == NULL));
        {
            PyObject *old = tmp_tuple_unpack_3__element_2;
            tmp_tuple_unpack_3__element_2 = tmp_assign_source_33;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_unpack_8;
        CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
        tmp_unpack_8 = tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_34 = UNPACK_NEXT_INFALLIBLE(tmp_unpack_8);
        assert(!(tmp_assign_source_34 == NULL));
        {
            PyObject *old = tmp_tuple_unpack_3__element_3;
            tmp_tuple_unpack_3__element_3 = tmp_assign_source_34;
            Py_XDECREF(old);
        }

    }
    CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
    Py_DECREF(tmp_tuple_unpack_3__source_iter);
    tmp_tuple_unpack_3__source_iter = NULL;
    {
        PyObject *tmp_assign_source_35;
        CHECK_OBJECT(tmp_tuple_unpack_3__element_1);
        tmp_assign_source_35 = tmp_tuple_unpack_3__element_1;
        UPDATE_STRING_DICT0(moduledict___main__, (Nuitka_StringObject *)mod_consts[18], tmp_assign_source_35);
    }
    Py_XDECREF(tmp_tuple_unpack_3__element_1);
    tmp_tuple_unpack_3__element_1 = NULL;

    {
        PyObject *tmp_assign_source_36;
        CHECK_OBJECT(tmp_tuple_unpack_3__element_2);
        tmp_assign_source_36 = tmp_tuple_unpack_3__element_2;
        UPDATE_STRING_DICT0(moduledict___main__, (Nuitka_StringObject *)mod_consts[16], tmp_assign_source_36);
    }
    Py_XDECREF(tmp_tuple_unpack_3__element_2);
    tmp_tuple_unpack_3__element_2 = NULL;

    {
        PyObject *tmp_assign_source_37;
        CHECK_OBJECT(tmp_tuple_unpack_3__element_3);
        tmp_assign_source_37 = tmp_tuple_unpack_3__element_3;
        UPDATE_STRING_DICT0(moduledict___main__, (Nuitka_StringObject *)mod_consts[17], tmp_assign_source_37);
    }
    Py_XDECREF(tmp_tuple_unpack_3__element_3);
    tmp_tuple_unpack_3__element_3 = NULL;

    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_called_name_15;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_args_element_name_8;
        tmp_called_name_15 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[65]);

        if (unlikely(tmp_called_name_15 == NULL)) {
            tmp_called_name_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[65]);
        }

        if (tmp_called_name_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_5 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_args_element_name_5 == NULL)) {
            tmp_args_element_name_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_args_element_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_6 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_args_element_name_6 == NULL)) {
            tmp_args_element_name_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_args_element_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_7 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_args_element_name_7 == NULL)) {
            tmp_args_element_name_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        if (tmp_args_element_name_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_8 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_args_element_name_8 == NULL)) {
            tmp_args_element_name_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[40]);
        }

        if (tmp_args_element_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;

            goto frame_exception_exit_1;
        }
        frame_a2f3da3f0c947a8de7a3fa9788acc6d7->m_frame.f_lineno = 238;
        {
            PyObject *call_args[] = {tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_7, tmp_args_element_name_8};
            tmp_assign_source_38 = CALL_FUNCTION_WITH_ARGS4(tmp_called_name_15, call_args);
        }

        if (tmp_assign_source_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[19], tmp_assign_source_38);
    }
    {
        PyObject *tmp_called_name_16;
        PyObject *tmp_call_result_7;
        tmp_called_name_16 = LOOKUP_BUILTIN(mod_consts[0]);
        assert(tmp_called_name_16 != NULL);
        frame_a2f3da3f0c947a8de7a3fa9788acc6d7->m_frame.f_lineno = 240;
        tmp_call_result_7 = CALL_FUNCTION_NO_ARGS(tmp_called_name_16);
        if (tmp_call_result_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_7);
    }
    {
        PyObject *tmp_called_name_17;
        PyObject *tmp_call_result_8;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_2;
        tmp_called_name_17 = LOOKUP_BUILTIN(mod_consts[0]);
        assert(tmp_called_name_17 != NULL);
        tmp_tuple_element_2 = mod_consts[74];
        tmp_string_concat_values_1 = PyTuple_New(8);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_format_spec_1;
            PyObject *tmp_format_value_2;
            PyObject *tmp_format_spec_2;
            PyObject *tmp_format_value_3;
            PyObject *tmp_format_spec_3;
            PyObject *tmp_format_value_4;
            PyObject *tmp_format_spec_4;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_2);
            tmp_format_value_1 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[19]);

            if (unlikely(tmp_format_value_1 == NULL)) {
                tmp_format_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
            }

            assert(!(tmp_format_value_1 == NULL));
            tmp_format_spec_1 = mod_consts[75];
            tmp_tuple_element_2 = BUILTIN_FORMAT(tmp_format_value_1, tmp_format_spec_1);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 241;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_2);
            tmp_tuple_element_2 = mod_consts[76];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_2);
            tmp_format_value_2 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[18]);

            if (unlikely(tmp_format_value_2 == NULL)) {
                tmp_format_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
            }

            if (tmp_format_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 241;

                goto tuple_build_exception_2;
            }
            tmp_format_spec_2 = mod_consts[75];
            tmp_tuple_element_2 = BUILTIN_FORMAT(tmp_format_value_2, tmp_format_spec_2);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 241;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 3, tmp_tuple_element_2);
            tmp_tuple_element_2 = mod_consts[77];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 4, tmp_tuple_element_2);
            tmp_format_value_3 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[16]);

            if (unlikely(tmp_format_value_3 == NULL)) {
                tmp_format_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
            }

            if (tmp_format_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 241;

                goto tuple_build_exception_2;
            }
            tmp_format_spec_3 = mod_consts[75];
            tmp_tuple_element_2 = BUILTIN_FORMAT(tmp_format_value_3, tmp_format_spec_3);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 241;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 5, tmp_tuple_element_2);
            tmp_tuple_element_2 = mod_consts[78];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 6, tmp_tuple_element_2);
            tmp_format_value_4 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_format_value_4 == NULL)) {
                tmp_format_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
            }

            if (tmp_format_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 241;

                goto tuple_build_exception_2;
            }
            tmp_format_spec_4 = mod_consts[75];
            tmp_tuple_element_2 = BUILTIN_FORMAT(tmp_format_value_4, tmp_format_spec_4);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 241;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 7, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_args_element_name_9 = PyUnicode_Join(mod_consts[75], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_args_element_name_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;

            goto frame_exception_exit_1;
        }
        frame_a2f3da3f0c947a8de7a3fa9788acc6d7->m_frame.f_lineno = 241;
        tmp_call_result_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_17, tmp_args_element_name_9);
        Py_DECREF(tmp_args_element_name_9);
        if (tmp_call_result_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_8);
    }
    {
        PyObject *tmp_called_name_18;
        PyObject *tmp_call_result_9;
        tmp_called_name_18 = LOOKUP_BUILTIN(mod_consts[0]);
        assert(tmp_called_name_18 != NULL);
        frame_a2f3da3f0c947a8de7a3fa9788acc6d7->m_frame.f_lineno = 242;
        tmp_call_result_9 = CALL_FUNCTION_NO_ARGS(tmp_called_name_18);
        if (tmp_call_result_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_9);
    }
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_left_name_1;
        PyObject *tmp_string_concat_values_2;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_right_name_1;
        tmp_tuple_element_3 = mod_consts[74];
        tmp_string_concat_values_2 = PyTuple_New(8);
        {
            PyObject *tmp_format_value_5;
            PyObject *tmp_format_spec_5;
            PyObject *tmp_format_value_6;
            PyObject *tmp_format_spec_6;
            PyObject *tmp_format_value_7;
            PyObject *tmp_format_spec_7;
            PyObject *tmp_format_value_8;
            PyObject *tmp_format_spec_8;
            PyTuple_SET_ITEM0(tmp_string_concat_values_2, 0, tmp_tuple_element_3);
            tmp_format_value_5 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[19]);

            if (unlikely(tmp_format_value_5 == NULL)) {
                tmp_format_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
            }

            if (tmp_format_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 244;

                goto tuple_build_exception_3;
            }
            tmp_format_spec_5 = mod_consts[75];
            tmp_tuple_element_3 = BUILTIN_FORMAT(tmp_format_value_5, tmp_format_spec_5);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 244;

                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_2, 1, tmp_tuple_element_3);
            tmp_tuple_element_3 = mod_consts[76];
            PyTuple_SET_ITEM0(tmp_string_concat_values_2, 2, tmp_tuple_element_3);
            tmp_format_value_6 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[18]);

            if (unlikely(tmp_format_value_6 == NULL)) {
                tmp_format_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
            }

            if (tmp_format_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 244;

                goto tuple_build_exception_3;
            }
            tmp_format_spec_6 = mod_consts[75];
            tmp_tuple_element_3 = BUILTIN_FORMAT(tmp_format_value_6, tmp_format_spec_6);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 244;

                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_2, 3, tmp_tuple_element_3);
            tmp_tuple_element_3 = mod_consts[77];
            PyTuple_SET_ITEM0(tmp_string_concat_values_2, 4, tmp_tuple_element_3);
            tmp_format_value_7 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[16]);

            if (unlikely(tmp_format_value_7 == NULL)) {
                tmp_format_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
            }

            if (tmp_format_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 244;

                goto tuple_build_exception_3;
            }
            tmp_format_spec_7 = mod_consts[75];
            tmp_tuple_element_3 = BUILTIN_FORMAT(tmp_format_value_7, tmp_format_spec_7);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 244;

                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_2, 5, tmp_tuple_element_3);
            tmp_tuple_element_3 = mod_consts[78];
            PyTuple_SET_ITEM0(tmp_string_concat_values_2, 6, tmp_tuple_element_3);
            tmp_format_value_8 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_format_value_8 == NULL)) {
                tmp_format_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
            }

            if (tmp_format_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 244;

                goto tuple_build_exception_3;
            }
            tmp_format_spec_8 = mod_consts[75];
            tmp_tuple_element_3 = BUILTIN_FORMAT(tmp_format_value_8, tmp_format_spec_8);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 244;

                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_2, 7, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_3:;
        Py_DECREF(tmp_string_concat_values_2);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;
        tmp_left_name_1 = PyUnicode_Join(mod_consts[75], tmp_string_concat_values_2);
        Py_DECREF(tmp_string_concat_values_2);
        if (tmp_left_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;

            goto frame_exception_exit_1;
        }
        tmp_right_name_1 = mod_consts[36];
        tmp_assign_source_39 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_left_name_1, tmp_right_name_1);
        Py_DECREF(tmp_left_name_1);
        assert(!(tmp_assign_source_39 == NULL));
        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[67], tmp_assign_source_39);
    }
    {
        PyObject *tmp_called_name_19;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_call_result_10;
        PyObject *tmp_args_element_name_10;
        tmp_expression_name_2 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[37]);

        if (unlikely(tmp_expression_name_2 == NULL)) {
            tmp_expression_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[37]);
        }

        if (tmp_expression_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;

            goto frame_exception_exit_1;
        }
        tmp_called_name_19 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[38]);
        if (tmp_called_name_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_10 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[67]);

        if (unlikely(tmp_args_element_name_10 == NULL)) {
            tmp_args_element_name_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[67]);
        }

        if (tmp_args_element_name_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_19);

            exception_lineno = 245;

            goto frame_exception_exit_1;
        }
        frame_a2f3da3f0c947a8de7a3fa9788acc6d7->m_frame.f_lineno = 245;
        tmp_call_result_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_19, tmp_args_element_name_10);
        Py_DECREF(tmp_called_name_19);
        if (tmp_call_result_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_10);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 223;

        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_11;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[37]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[37]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 247;

            goto frame_exception_exit_1;
        }
        frame_a2f3da3f0c947a8de7a3fa9788acc6d7->m_frame.f_lineno = 247;
        tmp_call_result_11 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[79]);
        if (tmp_call_result_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 247;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_11);
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_a2f3da3f0c947a8de7a3fa9788acc6d7);
#endif
    popFrameStack();

    assertFrameObject(frame_a2f3da3f0c947a8de7a3fa9788acc6d7);

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_a2f3da3f0c947a8de7a3fa9788acc6d7);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_a2f3da3f0c947a8de7a3fa9788acc6d7, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a2f3da3f0c947a8de7a3fa9788acc6d7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a2f3da3f0c947a8de7a3fa9788acc6d7, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;

    return module___main__;
    module_exception_exit:
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}

