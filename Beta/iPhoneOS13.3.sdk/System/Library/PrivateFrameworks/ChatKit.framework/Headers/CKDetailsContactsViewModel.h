/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <Foundation/NSObject.h>

@class CNContact, NSString;

@interface CKDetailsContactsViewModel : NSObject

{
    _Bool _showsLocation;
    _Bool _showsMessageButton;
    _Bool _showsFaceTimeVideoButton;
    _Bool _showsPhoneButton;
    _Bool _isPendingRecipient;
    _Bool _verified;
    NSString *_preferredHandle;
    NSString *_entityName;
    NSString *_locationString;
    CNContact *_contact;
}

@property (copy, nonatomic) NSString *preferredHandle;
@property (copy, nonatomic) NSString *entityName;
@property (copy, nonatomic) NSString *locationString;
@property (nonatomic) _Bool showsLocation;
@property (nonatomic) _Bool showsMessageButton;
@property (nonatomic) _Bool showsFaceTimeVideoButton;
@property (nonatomic) _Bool showsPhoneButton;
@property (retain, nonatomic) CNContact *contact;
@property (nonatomic) _Bool isPendingRecipient;
@property (nonatomic) _Bool verified;

+ (id)descriptorForContactRequiredKeys;

- (id)initWithPreferredHandle:(id)arg1 entityName:(id)arg2 locationString:(id)arg3 showsLocation:(_Bool)arg4 showsMessageButton:(_Bool)arg5 showsFaceTimeVideoButton:(_Bool)arg6 showsPhoneButton:(_Bool)arg7 contact:(id)arg8 isPendingRecipient:(_Bool)arg9 verified:(_Bool)arg10;

@end
