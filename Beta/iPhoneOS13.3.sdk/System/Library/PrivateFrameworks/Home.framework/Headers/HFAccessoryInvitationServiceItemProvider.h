/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/HFServiceItemProvider.h>

@class HMUser;

@interface HFAccessoryInvitationServiceItemProvider : HFServiceItemProvider

{
    HMUser *_user;
}

@property (nonatomic, readonly) HMUser *user;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (CDUnknownBlockType)filter;
- (id)invalidationReasons;
- (id)initWithHome:(id)arg1 serviceTypes:(id)arg2;
- (id)initWithHome:(id)arg1 user:(id)arg2;

@end
