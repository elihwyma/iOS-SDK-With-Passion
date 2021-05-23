/*
 Image: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

#import <SpringBoardServices/SBSUserNotificationTextFieldDefinition.h>

@class NSString;

@interface SBSMutableUserNotificationTextFieldDefinition : SBSUserNotificationTextFieldDefinition

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *value;
@property (nonatomic, getter=isSecure) _Bool secure;
@property (nonatomic) unsigned long long maxLength;
@property (nonatomic) long long keyboardType;
@property (nonatomic) long long autocapitalizationType;
@property (nonatomic) long long autocorrectionType;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end
