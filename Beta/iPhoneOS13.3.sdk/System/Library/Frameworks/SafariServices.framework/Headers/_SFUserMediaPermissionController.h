/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <WebUI/WBSUserMediaPermissionController.h>

@interface _SFUserMediaPermissionController : WBSUserMediaPermissionController

- (void)savePendingChanges;
- (void)coalescedAsynchronousWriter:(id)arg1 didFinishWritingData:(id)arg2;
- (void)requestUserMediaAuthorizationForDevices:(unsigned long long)arg1 url:(id)arg2 mainFrameURL:(id)arg3 decisionHandler:(CDUnknownBlockType)arg4 dialogPresenter:(id)arg5;

@end
