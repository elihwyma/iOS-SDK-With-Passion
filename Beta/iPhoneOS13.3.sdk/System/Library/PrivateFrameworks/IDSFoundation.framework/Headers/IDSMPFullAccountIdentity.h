/*
 Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

#import <IDSFoundation/IDSMPIdentity.h>

@class NSData;

@interface IDSMPFullAccountIdentity : IDSMPIdentity

@property (nonatomic, readonly) NSData *publicName;

+ (id)identityWithData:(id)arg1 error:(id *)arg2;
+ (id)fullAccountIdentityWithError:(id *)arg1;

- (id)dataRepresentationWithError:(id *)arg1;
- (id)publicAccountIdentityWithError:(id *)arg1;
- (id)rolledAccountIdenityWithError:(id *)arg1;
- (id)signData:(id)arg1 withError:(id *)arg2;

@end
