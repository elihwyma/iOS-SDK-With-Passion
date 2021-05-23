/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <CloudDocsDaemon/BRCPersistedState.h>

__attribute__((visibility("hidden")))
@interface BRCStagePersistedState : BRCPersistedState

{
    long long _latestGCStartTime;
}

+ (_Bool)supportsSecureCoding;
+ (id)loadFromClientStateInSession:(id)arg1 options:(id)arg2;

- (id)init;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLatestGCStartTime:(long long)arg1;
- (long long)timeSinceLatestGCStartTime;

@end
