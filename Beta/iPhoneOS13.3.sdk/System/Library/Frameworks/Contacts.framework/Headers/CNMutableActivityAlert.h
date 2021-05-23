/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Contacts/CNActivityAlert.h>

@class NSDictionary, NSString;

@interface CNMutableActivityAlert : CNActivityAlert

@property (copy, nonatomic) NSString *sound;
@property (copy, nonatomic) NSString *vibration;
@property (nonatomic) _Bool ignoreMute;
@property (copy, nonatomic) NSDictionary *userInfo;

- (id)freeze;

@end
