/*
 Image: /System/Library/PrivateFrameworks/vCard.framework/vCard
 */

#import <vCard/CNVCardNameComponents.h>

@class NSString;

@interface CNVCardMutableNameComponents : CNVCardNameComponents

@property (copy) NSString *formattedName;
@property (copy) NSString *firstName;
@property (copy) NSString *lastName;
@property (copy) NSString *middleName;
@property (copy) NSString *title;
@property (copy) NSString *suffix;
@property (copy) NSString *companyName;
@property _Bool isCompany;

@end
