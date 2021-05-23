/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Foundation/NSObject.h>

#import <Contacts/Swift-Protocol.h>

@class CNChangeHistoryAnchor, CNContact, NSArray, NSNumber, NSString;

@interface CNChangeHistoryContactChange : NSObject <Swift>

{
    NSString *_contactIdentifier;
    long long _changeType;
    CNContact *_contact;
    NSArray *_linkedContactIdentifiers;
    CNChangeHistoryAnchor *_changeAnchor;
    NSNumber *_changeID;
    NSString *_externalID;
    NSNumber *_imagesChanged;
}

@property (nonatomic) long long changeType;
@property (retain, nonatomic) CNContact *contact;
@property (copy, nonatomic) NSArray *linkedContactIdentifiers;
@property (retain, nonatomic) CNChangeHistoryAnchor *changeAnchor;
@property (retain, nonatomic) NSNumber *changeID;
@property (retain, nonatomic) NSString *externalID;
@property (retain, nonatomic) NSNumber *imagesChanged;
@property (nonatomic, readonly) NSString *contactIdentifier;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 changeType:(long long)arg2 changeAnchor:(id)arg3 changeID:(id)arg4 externalID:(id)arg5 imagesChanged:(id)arg6;
- (id)initWithIdentifier:(id)arg1 changeType:(long long)arg2 changeAnchor:(id)arg3 changeID:(id)arg4;

@end
