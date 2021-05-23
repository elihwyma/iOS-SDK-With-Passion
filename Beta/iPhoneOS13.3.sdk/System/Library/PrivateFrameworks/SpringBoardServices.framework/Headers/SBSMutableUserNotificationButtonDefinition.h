/*
 Image: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

#import <SpringBoardServices/SBSUserNotificationButtonDefinition.h>

@class NSString;

@interface SBSMutableUserNotificationButtonDefinition : SBSUserNotificationButtonDefinition

@property (copy, nonatomic) NSString *title;
@property (nonatomic) int presentationStyle;
@property (nonatomic) _Bool isPreferredButton;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end
