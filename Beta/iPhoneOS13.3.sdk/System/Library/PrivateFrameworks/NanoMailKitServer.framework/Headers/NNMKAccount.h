/*
 Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface NNMKAccount : NSObject

{
    _Bool _shouldArchive;
    NSString *_accountId;
    NSString *_localId;
    NSString *_parentAccountIdentifier;
    NSString *_displayName;
    unsigned long long _sourceType;
    NSArray *_emailAddresses;
    NSString *_username;
    NSString *_defaultEmailAddress;
    unsigned long long _standaloneState;
    NSArray *_mailboxes;
}

@property (retain, nonatomic) NSString *accountId;
@property (retain, nonatomic) NSString *localId;
@property (retain, nonatomic) NSString *parentAccountIdentifier;
@property (retain, nonatomic) NSString *displayName;
@property (nonatomic) _Bool shouldArchive;
@property (nonatomic) unsigned long long sourceType;
@property (retain, nonatomic) NSArray *emailAddresses;
@property (retain, nonatomic) NSString *username;
@property (copy, nonatomic) NSString *defaultEmailAddress;
@property (nonatomic) unsigned long long standaloneState;
@property (retain, nonatomic) NSArray *mailboxes;

+ (_Bool)supportsSecureCoding;
+ (id)generateAccountIdForAccount:(id)arg1;
+ (id)inboxesFromAccounts:(id)arg1;
+ (id)generateIdentifierFromEmailsAddresses:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)maySupportStandaloneMode;
- (_Bool)isiCloud;

@end
