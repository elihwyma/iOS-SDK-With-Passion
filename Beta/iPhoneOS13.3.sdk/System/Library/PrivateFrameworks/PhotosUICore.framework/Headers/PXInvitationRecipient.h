/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class MFComposeRecipient, NSArray, NSMutableArray, NSString;

@interface PXInvitationRecipient : NSObject

{
    MFComposeRecipient *_mfRecipient;
    NSString *_firstName;
    NSString *_lastName;
    NSMutableArray *_allEmails;
    NSMutableArray *_allPhones;
    NSString *_selectedPhoneString;
    NSString *_selectedEmailString;
    NSString *_invalidAddressString;
}

@property (copy, nonatomic, readonly) NSString *firstName;
@property (copy, nonatomic, readonly) NSString *lastName;
@property (retain, nonatomic, readonly) NSArray *allEmails;
@property (retain, nonatomic, readonly) NSArray *allPhones;
@property (copy, nonatomic, readonly) NSString *selectedPhoneString;
@property (copy, nonatomic, readonly) NSString *selectedEmailString;
@property (copy, nonatomic, readonly) NSString *invalidAddressString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)validEmailAddressFromComposeRecipient:(id)arg1;
+ (id)validPhoneNumberFromString:(id)arg1;

- (id)displayName;
- (id)initWithRecipient:(id)arg1;

@end
