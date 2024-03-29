/*
 Image: /System/Library/Frameworks/CoreServices.framework/CoreServices
 */

#import <CoreServices/_LSDClient.h>

__attribute__((visibility("hidden")))
@interface _LSDOpenClient : _LSDClient

- (void)openApplicationWithIdentifier:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)openURL:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)openUserActivityWithUniqueIdentifier:(id)arg1 activityData:(id)arg2 activityType:(id)arg3 bundleIdentifier:(id)arg4 options:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)performOpenOperationWithURL:(id)arg1 applicationIdentifier:(id)arg2 documentIdentifier:(id)arg3 isContentManaged:(_Bool)arg4 sourceAuditToken:(const CDStruct_4c969caf *)arg5 userInfo:(id)arg6 options:(id)arg7 delegate:(id)arg8 completionHandler:(CDUnknownBlockType)arg9;
- (void)failedToOpenApplication:(id)arg1 withURL:(id)arg2;
- (void)canOpenURL:(id)arg1 publicSchemes:(_Bool)arg2 privateSchemes:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)resolveAppLinksForURL:(id)arg1 limit:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)openAppLink:(id)arg1 state:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)getURLOverrideForURL:(id)arg1 newsOnly:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)getiCloudHostNamesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)willHandleInvocation:(id)arg1 isReply:(_Bool)arg2;

@end
