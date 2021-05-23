/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSData;

@interface SAGetSessionCertificateResponse : SABaseClientBoundCommand

@property (copy, nonatomic) NSData *certificate;

+ (id)getSessionCertificateResponse;
+ (id)getSessionCertificateResponseWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
