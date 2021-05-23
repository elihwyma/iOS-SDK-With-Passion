/*
 Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
 */

#import <UserNotificationsUIKit/Swift-Protocol.h>

@class NSArray, NSString;

@protocol NCAuxiliaryOptionsSupporting <Swift>

@property (copy, nonatomic) NSString *optionsSummaryText;
@property (nonatomic) unsigned long long numberOfOptionButtons;
@property (nonatomic, readonly) NSArray *optionButtons;
@property (nonatomic) _Bool auxiliaryOptionsVisible;

@end
