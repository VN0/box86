#if !(defined(GO) && defined(GOM) && defined(GO2) && defined(DATA))
#error Meh....
#endif

//GO(XtAddActions, 
//GO(XtAddCallback, 
//GO(_XtAddCallback, 
//GO(_XtAddCallbackOnce, 
//GO(XtAddCallbacks, 
//GO(XtAddConverter, 
//GO(_XtAddDefaultConverters, 
GOM(XtAddEventHandler, vFEpuipp)
//GO(_XtAddEventSeqToStateTree, 
//GO(XtAddExposureToRegion, 
//GO(XtAddGrab, 
//GO(XtAddInput, 
//GO(XtAddRawEventHandler, 
//GO(_XtAddShellToHookObj, 
//GO(XtAddSignal, 
//GO(XtAddTimeOut, 
//GO(_XtAddTMConverters, 
//GO(XtAddWorkProc, 
//GO(XtAllocateGC, 
//GO(_XtAllocError, 
//GO(_XtAllocTMContext, 
//GO(_XtAllocWWTable, 
//GO(XtAppAddActionHook, 
//GO(XtAppAddActions, 
//GO(XtAppAddBlockHook, 
//GO(XtAppAddConverter, 
//GO(XtAppAddInput, 
//GO(XtAppAddSignal, 
//GO(XtAppAddTimeOut, 
//GO(XtAppAddWorkProc, 
GO(XtAppCreateShell, pFpppppu)
//GO(_XtAppCreateShell, 
//GO(XtAppError, 
//GO(XtAppErrorMsg, 
//GO(XtAppGetErrorDatabase, 
//GO(XtAppGetErrorDatabaseText, 
//GO(XtAppGetExitFlag, 
//GO(XtAppGetSelectionTimeout, 
//GO(_XtAppInit, 
//GO(XtAppInitialize, 
//GO(XtAppLock, 
//GO(XtAppMainLoop, 
//GO(XtAppNextEvent, 
//GO(XtAppPeekEvent, 
GO(XtAppPending, pFp)
GO(XtAppProcessEvent, vFpu)
//GO(XtAppReleaseCacheRefs, 
//GO(XtAppSetErrorHandler, 
//GO(XtAppSetErrorMsgHandler, 
//GO(XtAppSetExitFlag, 
GO(XtAppSetFallbackResources, vFpp)
//GO(XtAppSetSelectionTimeout, 
//GO(XtAppSetTypeConverter, 
//GO(XtAppSetWarningHandler, 
//GO(XtAppSetWarningMsgHandler, 
//GO(XtAppUnlock, 
//GO(XtAppWarning, 
//GO(XtAppWarningMsg, 
//GO(XtAugmentTranslations, 
//GO(_XtBindActions, 
//GO(XtBuildEventMask, 
//GO(_XtBuildKeysymTables, 
//GO(_XtCacheFlushTag, 
//GO(XtCallAcceptFocus, 
//GO(XtCallActionProc, 
//GO(XtCallbackExclusive, 
//GO(XtCallbackNone, 
//GO(XtCallbackNonexclusive, 
//GO(XtCallbackPopdown, 
//GO(XtCallbackReleaseCacheRef, 
//GO(XtCallbackReleaseCacheRefList, 
//GO(XtCallCallbackList, 
//GO(XtCallCallbacks, 
//GO(_XtCallConditionalCallbackList, 
//GO(XtCallConverter, 
//GO(XtCalloc, 
//GO(__XtCalloc, 
//GO(XtCancelSelectionRequest, 
//GO(XtChangeManagedSet, 
//GO(_XtCheckServerGrabsOnWidget, 
//GO(_XtCheckSubclassFlag, 
//GO(XtClass, 
//GO(_XtClearAncestorCache, 
//GO(XtCloseDisplay, 
//GO(_XtCloseDisplays, 
//GO(_XtCompileCallbackList, 
//GO(_XtCompileResourceList, 
//GO(_XtComputeLateBindings, 
//GO(XtConfigureWidget, 
//GO(_XtConstraintResDependencies, 
//GO(XtConvert, 
//GO(_XtConvert, 
//GO(XtConvertAndStore, 
//GO(XtConvertCase, 
//GO(_XtConvertInitialize, 
//GO(_XtConvertTypeToMask, 
//GO(_XtCopyFromArg, 
//GO(_XtCopyFromParent, 
//GO(_XtCopyToArg, 
//GO(_XtCountVaList, 
GO(XtCreateApplicationContext, pFv)
//GO(XtCreateApplicationShell, 
//GO(_XtCreateHookObj, 
//GO(_XtCreateIndirectionTable, 
//GO(XtCreateManagedWidget, 
//GO(XtCreatePopupShell, 
//GO(_XtCreatePopupShell, 
//GO(XtCreateSelectionRequest, 
//GO(XtCreateWidget, 
//GO(_XtCreateWidget, 
//GO(XtCreateWindow, 
//GO(_XtCreateXlations, 
//GO(XtCvtColorToPixel, 
//GO(XtCvtIntToBool, 
//GO(XtCvtIntToBoolean, 
//GO(XtCvtIntToColor, 
//GO(XtCvtIntToFloat, 
//GO(XtCvtIntToFont, 
//GO(XtCvtIntToPixel, 
//GO(XtCvtIntToPixmap, 
//GO(XtCvtIntToShort, 
//GO(XtCvtIntToUnsignedChar, 
//GO(_XtCvtMergeTranslations, 
//GO(XtCvtStringToAcceleratorTable, 
//GO(XtCvtStringToAtom, 
//GO(XtCvtStringToBool, 
//GO(XtCvtStringToBoolean, 
//GO(XtCvtStringToCommandArgArray, 
//GO(XtCvtStringToCursor, 
//GO(XtCvtStringToDimension, 
//GO(XtCvtStringToDirectoryString, 
//GO(XtCvtStringToDisplay, 
//GO(XtCvtStringToFile, 
//GO(XtCvtStringToFloat, 
//GO(XtCvtStringToFont, 
//GO(XtCvtStringToFontSet, 
//GO(XtCvtStringToFontStruct, 
//GO(XtCvtStringToGravity, 
//GO(XtCvtStringToInitialState, 
//GO(XtCvtStringToInt, 
//GO(XtCvtStringToPixel, 
//GO(XtCvtStringToRestartStyle, 
//GO(XtCvtStringToShort, 
//GO(XtCvtStringToTranslationTable, 
//GO(XtCvtStringToUnsignedChar, 
//GO(XtCvtStringToVisual, 
//GO(XtDatabase, 
//GO(_XtDefaultAppContext, 
//GO(_XtDefaultError, 
//GO(_XtDefaultErrorMsg, 
//GO(_XtDefaultWarning, 
//GO(_XtDefaultWarningMsg, 
//GO(_XtDependencies, 
//GO(_XtDestroyAppContexts, 
GO(XtDestroyApplicationContext, vFp)
//GO(XtDestroyGC, 
//GO(_XtDestroyServerGrabs, 
//GO(_XtDestroyTMData, 
GO(XtDestroyWidget, vFp)
//GO(XtDirectConvert, 
//GO(XtDisownSelection, 
//GO(XtDispatchEvent, 
//GO(XtDispatchEventToWidget, 
GO(XtDisplay, pFp)
//GO(_XtDisplayAccelerators, 
//GO(XtDisplayInitialize, 
//GO(_XtDisplayInitialize, 
//GO(_XtDisplayInstalledAccelerators, 
//GO(XtDisplayOfObject, 
//GO(XtDisplayStringConversionWarning, 
GO(XtDisplayToApplicationContext, pFp)
//GO(_XtDisplayTranslations, 
//GO(_XtDoFreeBindings, 
//GO(_XtDoPhase2Destroy, 
//GO(XtError, 
//GO(XtErrorMsg, 
//GO(_XtEventInitialize, 
//GO(_XtExtensionSelect, 
//GO(_XtFillAncestorList, 
//GO(XtFindFile, 
//GO(_XtFindRemapWidget, 
//GO(XtFree, 
//GO(_XtFreeActions, 
//GO(_XtFreeArgList, 
//GO(_XtFreeConverterTable, 
//GO(_XtFreeEventTable, 
//GO(_XtFreePerWidgetInput, 
//GO(_XtFreeTranslations, 
//GO(_XtFreeWWTable, 
//GO(_XtGClistFree, 
//GO(XtGetActionKeysym, 
//GO(XtGetActionList, 
//GO(XtGetApplicationNameAndClass, 
//GO(XtGetApplicationResources, 
//GO(_XtGetApplicationResources, 
//GO(_XtGetCallbackList, 
//GO(XtGetClassExtension, 
//GO(XtGetConstraintResourceList, 
//GO(XtGetDisplays, 
//GO(XtGetErrorDatabase, 
//GO(XtGetErrorDatabaseText, 
//GO(XtGetGC, 
//GO(XtGetKeyboardFocusWidget, 
//GO(XtGetKeysymTable, 
//GO(_XtGetModifierIndex, 
//GO(XtGetMultiClickTime, 
//GO(_XtGetPerDisplay, 
//GO(_XtGetPerDisplayInput, 
//GO(_XtGetPerWidgetInput, 
//GO(_XtGetProcessContext, 
//GO(_XtGetQuarkIndex, 
//GO(XtGetResourceList, 
//GO(_XtGetResources, 
//GO(XtGetSelectionParameters, 
//GO(XtGetSelectionRequest, 
//GO(XtGetSelectionTimeout, 
//GO(XtGetSelectionValue, 
//GO(XtGetSelectionValueIncremental, 
//GO(XtGetSelectionValues, 
//GO(XtGetSelectionValuesIncremental, 
//GO(XtGetSubresources, 
//GO(_XtGetSubresources, 
//GO(XtGetSubvalues, 
//GO(_XtGetTranslationValue, 
//GO(_XtGetTypeIndex, 
//GO(_XtGetUserName, 
//GO(XtGetValues, 
//GO(XtGrabButton, 
//GO(_XtGrabInitialize, 
//GO(XtGrabKey, 
//GO(XtGrabKeyboard, 
//GO(XtGrabPointer, 
//GO(_XtHandleFocus, 
//GO(XtHasCallbacks, 
//GO(_XtHeapAlloc, 
//GO(_XtHeapFree, 
//GO(_XtHeapInit, 
//GO(XtHooksOfDisplay, 
//GO(_XtInherit, 
//GO(XtInitialize, 
//GO(_XtInitializeActionData, 
//GO(XtInitializeWidgetClass, 
//GO(XtInsertEventHandler, 
//GO(XtInsertEventTypeHandler, 
//GO(XtInsertRawEventHandler, 
//GO(XtInstallAccelerators, 
//GO(XtInstallAllAccelerators, 
//GO(_XtInstallTranslations, 
//GO(XtIsApplicationShell, 
//GO(XtIsComposite, 
//GO(XtIsConstraint, 
//GO(_XtIsHookObject, 
//GO(XtIsManaged, 
//GO(XtIsObject, 
//GO(XtIsOverrideShell, 
GO(XtIsRealized, iFp)
//GO(XtIsRectObj, 
//GO(XtIsSensitive, 
//GO(XtIsSessionShell, 
//GO(XtIsShell, 
//GO(XtIsSubclass, 
//GO(_XtIsSubclassOf, 
//GO(XtIsTopLevelShell, 
//GO(XtIsTransientShell, 
//GO(XtIsVendorShell, 
//GO(XtIsWidget, 
//GO(XtIsWMShell, 
//GO(XtKeysymToKeycodeList, 
//GO(XtLastEventProcessed, 
//GO(XtLastTimestampProcessed, 
//GO(XtMainLoop, 
//GO(XtMakeGeometryRequest, 
//GO(_XtMakeGeometryRequest, 
//GO(XtMakeResizeRequest, 
//GO(XtMalloc, 
//GO(__XtMalloc, 
GO(XtManageChild, vFp)
//GO(XtManageChildren, 
//GO(XtMapWidget, 
//GO(_XtMatchAtom, 
//GO(_XtMatchUsingDontCareMods, 
//GO(_XtMatchUsingStandardMods, 
//GO(XtMenuPopupAction, 
//GO(XtMergeArgLists, 
//GO(_XtMergeTranslations, 
//GO(XtMoveWidget, 
//GO(XtName, 
//GO(XtNameToWidget, 
//GO(XtNewString, 
//GO(XtNextEvent, 
//GO(XtNoticeSignal, 
//GO(_XtOnGrabList, 
//GO(XtOpenApplication, 
GO(XtOpenDisplay, pFpppppupp)
//GO(XtOverrideTranslations, 
//GO(XtOwnSelection, 
//GO(XtOwnSelectionIncremental, 
//GO(XtParent, 
//GO(XtParseAcceleratorTable, 
//GO(XtParseTranslationTable, 
//GO(_XtParseTreeToStateTree, 
//GO(_XtPeekCallback, 
//GO(XtPeekEvent, 
//GO(XtPending, 
//GO(XtPopdown, 
//GO(XtPopup, 
//GO(_XtPopup, 
//GO(_XtPopupInitialize, 
//GO(XtPopupSpringLoaded, 
//GO(_XtPreparseCommandLine, 
//GO(_XtPrintActions, 
//GO(_XtPrintEventSeq, 
//GO(_XtPrintState, 
//GO(_XtPrintXlations, 
//GO(XtProcessEvent, 
//GO(_XtProcessKeyboardEvent, 
//GO(XtProcessLock, 
//GO(_XtProcessPointerEvent, 
//GO(XtProcessUnlock, 
//GO(XtQueryGeometry, 
GO(XtRealizeWidget, vFp)
//GO(XtRealloc, 
//GO(_XtRefreshMapping, 
//GO(XtRegisterCaseConverter, 
GO(XtRegisterDrawable, vFppp)
//GO(XtRegisterExtensionSelector, 
//GO(XtRegisterGrabAction, 
//GO(_XtRegisterGrabs, 
//GO(_XtRegisterPassiveGrabs, 
//GO(_XtRegularMatch, 
//GO(XtReleaseGC, 
//GO(XtReleasePropertyAtom, 
//GO(XtRemoveActionHook, 
//GO(XtRemoveAllCallbacks, 
//GO(_XtRemoveAllCallbacks, 
//GO(_XtRemoveAllInputs, 
//GO(XtRemoveBlockHook, 
//GO(XtRemoveCallback, 
//GO(_XtRemoveCallback, 
//GO(XtRemoveCallbacks, 
GO(XtRemoveEventHandler, vFpup)     // need to wrap to free event handler?
//GO(XtRemoveEventTypeHandler, 
//GO(XtRemoveGrab, 
//GO(XtRemoveInput, 
//GO(XtRemoveRawEventHandler, 
//GO(XtRemoveSignal, 
//GO(_XtRemoveStateTreeByIndex, 
//GO(XtRemoveTimeOut, 
//GO(_XtRemoveTranslations, 
//GO(XtRemoveWorkProc, 
//GO(XtReservePropertyAtom, 
//GO(XtResizeWidget, 
//GO(XtResizeWindow, 
//GO(XtResolvePathname, 
//GO(_XtResourceConfigurationEH, 
//GO(_XtResourceDependencies, 
//GO(_XtResourceListInitialize, 
//GO(XtScreen, 
//GO(XtScreenDatabase, 
//GO(XtScreenOfObject, 
//GO(_XtSendFocusEvent, 
//GO(XtSendSelectionRequest, 
//GO(XtSessionGetToken, 
//GO(XtSessionReturnToken, 
//GO(_XtSetDefaultConverterTable, 
//GO(_XtSetDefaultErrorHandlers, 
//GO(_XtSetDefaultSelectionTimeout, 
//GO(XtSetErrorHandler, 
//GO(XtSetErrorMsgHandler, 
//GO(XtSetEventDispatcher, 
//GO(XtSetKeyboardFocus, 
//GO(XtSetKeyTranslator, 
//GO(XtSetLanguageProc, 
//GO(XtSetMappedWhenManaged, 
//GO(XtSetMultiClickTime, 
//GO(XtSetSelectionParameters, 
//GO(XtSetSelectionTimeout, 
//GO(XtSetSensitive, 
//GO(XtSetSubvalues, 
//GO(XtSetTypeConverter, 
GO(XtSetValues, vFppu)
//GO(XtSetWarningHandler, 
//GO(XtSetWarningMsgHandler, 
//GO(XtSetWMColormapWindows, 
//GO(_XtShellGetCoordinates, 
//GO(_XtSortPerDisplayList, 
//GO(XtStringConversionWarning, 
//GO(XtSuperclass, 
//GO(_XtTableAddConverter, 
GO(XtToolkitInitialize, vFv)
//GO(XtToolkitThreadInitialize, 
//GO(XtTranslateCoords, 
//GO(_XtTranslateEvent, 
//GO(_XtTranslateInitialize, 
//GO(XtTranslateKey, 
//GO(XtTranslateKeycode, 
//GO(_XtTraverseStateTree, 
//GO(_XtUnbindActions, 
//GO(_XtUngrabBadGrabs, 
//GO(XtUngrabButton, 
//GO(XtUngrabKey, 
//GO(XtUngrabKeyboard, 
//GO(XtUngrabPointer, 
//GO(XtUninstallTranslations, 
//GO(XtUnmanageChild, 
//GO(XtUnmanageChildren, 
//GO(XtUnmapWidget, 
//GO(_XtUnmergeTranslations, 
GO(XtUnrealizeWidget, vFp)
GO(XtUnregisterDrawable, vFpp)
//GO(XtVaAppCreateShell, 
//GO(XtVaAppInitialize, 
//GO(_XtVaAppInitialize, 
//GO(XtVaCreateArgsList, 
//GO(XtVaCreateManagedWidget, 
//GO(XtVaCreatePopupShell, 
//GO(_XtVaCreateTypedArgList, 
GO(XtVaCreateWidget, pFppppppppppppppp) // need to wrap and use XtCreateWidget, with a ArgList?
//GO(XtVaGetApplicationResources, 
//GO(XtVaGetSubresources, 
//GO(XtVaGetSubvalues, 
//GO(XtVaGetValues, 
//GO(XtVaOpenApplication, 
//GO(_XtVaOpenApplication, 
//GO(XtVaSetSubvalues, 
//GO(XtVaSetValues, 
//GO(_XtVaToArgList, 
//GO(_XtVaToTypedArgList, 
//GO(_XtWaitForSomething, 
//GO(XtWarning, 
//GO(XtWarningMsg, 
//GO(XtWidgetToApplicationContext, 
GO(XtWindow, pFp)
//GO(_XtWindowedAncestor, 
//GO(XtWindowOfObject, 
GO(XtWindowToWidget, pFpp)
