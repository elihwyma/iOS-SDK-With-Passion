/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUAppleMusicItem.h>

@class ACAccount;

@interface HUAppleMusicAccountItem : HUAppleMusicItem

{
    ACAccount *_account;
}

@property (nonatomic, readonly) ACAccount *account;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)initWithMediaProfileContainer:(id)arg1 account:(id)arg2;

@end
