/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class DMFCommunicationPolicyMonitor, NSDictionary;

@interface SBCommunicationPolicyManager : NSObject

{
    NSDictionary *_policiesByBundleIdentifier;
    DMFCommunicationPolicyMonitor *_communicationPolicyMonitor;
}

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (_Bool)shouldScreenTimeSuppressNotificationsForBundleIdentifier:(id)arg1;
- (void)_setPoliciesByBundleIdentifier:(id)arg1;
- (unsigned long long)_communicationPolicyForBundleIdentifier:(id)arg1;

@end
