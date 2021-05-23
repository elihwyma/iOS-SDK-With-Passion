/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

#import <PhotosUICore/Swift-Protocol.h>

@class CNContact, NSSet, NSString, PXRecipientTransport;

@interface PXRecipient : NSObject <Swift>

{
    NSString *_firstName;
    NSString *_lastName;
    NSSet *_allEmails;
    NSSet *_allPhones;
    NSSet *_unformattedAllPhones;
    NSString *_phoneNumberString;
    NSString *_emailAddressString;
    PXRecipientTransport *_suggestedTransport;
    NSString *_localizedName;
    CNContact *_contact;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *emailAddressString;
@property (nonatomic, readonly) NSString *phoneNumberString;
@property (nonatomic, readonly) NSString *localizedName;
@property (nonatomic, readonly) NSString *firstName;
@property (retain, nonatomic) PXRecipientTransport *suggestedTransport;
@property (copy, nonatomic, readonly) NSString *firstName;
@property (copy, nonatomic, readonly) NSString *lastName;
@property (nonatomic, readonly) NSSet *allEmails;
@property (nonatomic, readonly) NSSet *allPhones;
@property (nonatomic, readonly) NSSet *unformattedAllPhones;
@property (copy, nonatomic, readonly) NSString *phoneNumberString;
@property (copy, nonatomic, readonly) NSString *emailAddressString;
@property (copy, nonatomic, readonly) NSString *localizedName;
@property (nonatomic, readonly) CNContact *contact;

+ (id)new;
+ (id)_contactForAddress:(id)arg1 recipientKind:(long long)arg2;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithAddress:(id)arg1 nameComponents:(id)arg2 recipientKind:(long long)arg3;
- (id)initWithContact:(id)arg1 address:(id)arg2 nameComponents:(id)arg3 recipientKind:(long long)arg4;

@end
