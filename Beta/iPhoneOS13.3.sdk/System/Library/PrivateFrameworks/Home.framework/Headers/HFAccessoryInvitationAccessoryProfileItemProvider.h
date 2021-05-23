/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/HFAccessoryProfileItemProvider.h>

@class HMUser;

@interface HFAccessoryInvitationAccessoryProfileItemProvider : HFAccessoryProfileItemProvider

{
    HMUser *_user;
}

@property (nonatomic, readonly) HMUser *user;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithHome:(id)arg1;
- (id)invalidationReasons;
- (id)initWithHome:(id)arg1 user:(id)arg2;

@end
