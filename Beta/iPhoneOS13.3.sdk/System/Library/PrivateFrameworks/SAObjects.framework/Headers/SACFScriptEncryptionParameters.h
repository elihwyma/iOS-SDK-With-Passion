/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseAceObject.h>

@class NSData, NSString;

@interface SACFScriptEncryptionParameters : SABaseAceObject

@property (copy, nonatomic) NSData *encryptionKey;
@property (copy, nonatomic) NSData *hmac;
@property (copy, nonatomic) NSData *hmacKey;
@property (copy, nonatomic) NSData *initializationVector;
@property (copy, nonatomic) NSString *type;

+ (id)scriptEncryptionParameters;
+ (id)scriptEncryptionParametersWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
