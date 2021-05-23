/*
 Image: /System/Library/PrivateFrameworks/SafariFoundation.framework/SafariFoundation
 */

#import <Foundation/NSObject.h>

#import <SafariFoundation/Swift-Protocol.h>

@class NSDate, NSString;

@protocol SFSafariPasswordCredential;

@interface SFSafariCredential : NSObject <Swift>

{
    NSString *_user;
    NSString *_password;
    NSString *_site;
    NSDate *_creationDate;
    id <SFSafariPasswordCredential> _externalCredential;
}

@property (nonatomic, readonly) id <SFSafariPasswordCredential> externalCredential;
@property (nonatomic, readonly) NSString *user;
@property (nonatomic, readonly) NSString *password;
@property (nonatomic, readonly) NSString *site;
@property (nonatomic, readonly) NSDate *creationDate;
@property (nonatomic, readonly, getter=isExternal) _Bool external;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUser:(id)arg1 password:(id)arg2 site:(id)arg3 creationDate:(id)arg4;
- (id)initWithExternalCredential:(id)arg1;

@end
