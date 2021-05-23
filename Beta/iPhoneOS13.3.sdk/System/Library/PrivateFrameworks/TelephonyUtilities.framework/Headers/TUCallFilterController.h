/*
 Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue, TUCallFilterControllerActions;

@interface TUCallFilterController : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    id <TUCallFilterControllerActions> _actionsDelegate;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (weak, nonatomic, readonly) id <TUCallFilterControllerActions> actionsDelegate;
@property (nonatomic, readonly) _Bool silenceUnknownCallersEnabled;

- (id)initWithActionsDelegate:(id)arg1 serialQueue:(id)arg2;
- (_Bool)isUnknownAddress:(id)arg1 normalizedAddress:(id)arg2 forBundleIdentifier:(id)arg3;
- (_Bool)shouldRestrictDialRequest:(id)arg1 performSynchronously:(_Bool)arg2;
- (id)bundleIdentifierForDialRequest:(id)arg1;
- (_Bool)containsRestrictedHandle:(id)arg1 forBundleIdentifier:(id)arg2 performSynchronously:(_Bool)arg3;
- (id)policyForAddresses:(id)arg1 forBundleIdentifier:(id)arg2;
- (_Bool)shouldRestrictJoinConversationRequest:(id)arg1 performSynchronously:(_Bool)arg2;
- (_Bool)shouldRestrictAddresses:(id)arg1 forBundleIdentifier:(id)arg2 performSynchronously:(_Bool)arg3;
- (_Bool)willRestrictAddresses:(id)arg1 forBundleIdentifier:(id)arg2;
- (_Bool)isUnknownHandle:(id)arg1;
- (_Bool)shouldRestrictDialRequest:(id)arg1;
- (unsigned long long)callFilterStatusForDialRequest:(id)arg1;
- (_Bool)containsRestrictedHandle:(id)arg1 forBundleIdentifier:(id)arg2;
- (_Bool)shouldRestrictJoinConversationRequest:(id)arg1;
- (_Bool)shouldRestrictAddresses:(id)arg1 forBundleIdentifier:(id)arg2;

@end
