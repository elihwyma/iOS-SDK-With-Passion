/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <SafariServices/_SFWebProcessPlugInPageController.h>

@class NSString, WKWebProcessPlugInScriptWorld, _SFFormMetadataController, _WKRemoteObjectInterface;

__attribute__((visibility("hidden")))
@interface _SFWebProcessPlugInAutoFillPageController : _SFWebProcessPlugInPageController

{
    _WKRemoteObjectInterface *_activityControllerInterface;
    _WKRemoteObjectInterface *_autoFillerInterface;
    WKWebProcessPlugInScriptWorld *_isolatedWorld;
    _SFFormMetadataController *_formMetadataController;
}

@property (retain, nonatomic) _SFFormMetadataController *formMetadataController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)webProcessPlugInBrowserContextController:(id)arg1 didStartProvisionalLoadForFrame:(id)arg2;
- (void)webProcessPlugInBrowserContextController:(id)arg1 didCommitLoadForFrame:(id)arg2;
- (void)webProcessPlugInBrowserContextController:(id)arg1 didSameDocumentNavigation:(long long)arg2 forFrame:(id)arg3;
- (void)webProcessPlugInBrowserContextController:(id)arg1 didRemoveFrameFromHierarchy:(id)arg2;
- (id)initWithPlugIn:(id)arg1 contextController:(id)arg2;
- (void)willDestroyBrowserContextController:(id)arg1;
- (void)removeAutomaticPasswordVisualTreatmentInFrame:(id)arg1 passwordControlUniqueIDs:(id)arg2;
- (void)focusFormForStreamlinedLogin:(long long)arg1 inFrame:(id)arg2;
- (void)autoFillFormAsynchronouslyInFrame:(id)arg1 withValues:(id)arg2 setAutoFilled:(_Bool)arg3 selectFieldAfterFilling:(id)arg4;
- (void)autoFillFormAsynchronouslyInFrame:(id)arg1 withValues:(id)arg2 setAutoFilled:(_Bool)arg3 focusFieldAfterFilling:(_Bool)arg4 fieldToFocus:(id)arg5;
- (void)autoFillFormAsynchronouslyInFrame:(id)arg1 withValues:(id)arg2 setAutoFilled:(_Bool)arg3 focusFieldAfterFilling:(_Bool)arg4 fieldToFocus:(id)arg5 submitForm:(_Bool)arg6;
- (void)autoFillFormSynchronouslyInFrame:(id)arg1 withValues:(id)arg2;
- (void)autoFillForm:(long long)arg1 inFrame:(id)arg2 withGeneratedPassword:(id)arg3;
- (void)annotateForm:(long long)arg1 inFrame:(id)arg2 withValues:(id)arg3;
- (void)fillTextField:(id)arg1 inFrame:(id)arg2 withGeneratedPassword:(id)arg3;
- (void)setFormControls:(id)arg1 areAutoFilled:(_Bool)arg2 andClearField:(id)arg3 inFrame:(id)arg4;
- (void)autoFillOneTimeCodeFieldsInFrame:(id)arg1 withValue:(id)arg2;
- (void)collectURLsForPrefillingAtURL:(id)arg1;
- (void)collectFormMetadataForPrefillingAtURL:(id)arg1;
- (void)collectMetadataForTextField:(id)arg1 inFrame:(id)arg2 atURL:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)clearAutoFillMetadata;
- (void)substitutePasswordElementsWithAutomaticPasswordElementsInFrame:(id)arg1 formID:(long long)arg2 focusedPasswordControlUniqueID:(id)arg3 passwordControlUniqueIDs:(id)arg4 automaticPassword:(id)arg5 blurAfterSubstitution:(_Bool)arg6 completionHandler:(CDUnknownBlockType)arg7;
- (void)removeAutomaticPasswordElementsInFrame:(id)arg1 focusedPasswordControlUniqueID:(id)arg2 passwordControlUniqueIDs:(id)arg3;
- (void)automaticPasswordSheetDimissedInFrame:(id)arg1 focusedPasswordControlUniqueID:(id)arg2;
- (void)runJavaScriptForActivity:(id)arg1 withScript:(id)arg2 object:(id)arg3 invokeMethod:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;

@end
