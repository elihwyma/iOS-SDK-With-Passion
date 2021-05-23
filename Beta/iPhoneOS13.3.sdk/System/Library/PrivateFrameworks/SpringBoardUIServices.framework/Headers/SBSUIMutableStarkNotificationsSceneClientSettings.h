/*
 Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

#import <UIKit/UIMutableApplicationSceneClientSettings.h>

@class NSString;

@interface SBSUIMutableStarkNotificationsSceneClientSettings : UIMutableApplicationSceneClientSettings

@property (nonatomic, getter=isDisplayingNotification) _Bool displayingNotification;
@property (nonatomic) _Bool shouldBorrowScreen;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;

@end
