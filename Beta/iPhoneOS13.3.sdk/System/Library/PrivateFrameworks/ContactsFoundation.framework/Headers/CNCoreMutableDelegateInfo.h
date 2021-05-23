/*
 Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

#import <ContactsFoundation/CNCoreDelegateInfo.h>

@class NSNumber, NSPersonNameComponents, NSString;

@interface CNCoreMutableDelegateInfo : CNCoreDelegateInfo

@property (copy, nonatomic) NSNumber *dsid;
@property (copy, nonatomic) NSString *altDSID;
@property (copy, nonatomic) NSString *principalPath;
@property (copy, nonatomic) NSString *appleID;
@property (copy, nonatomic) NSPersonNameComponents *nameComponents;
@property (nonatomic) _Bool isMe;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end
