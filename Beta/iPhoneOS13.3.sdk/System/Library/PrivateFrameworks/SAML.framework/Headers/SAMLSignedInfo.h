/*
 Image: /System/Library/PrivateFrameworks/SAML.framework/SAML
 */

#import <SAML/SAMLBaseElement.h>

@class NSArray, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface SAMLSignedInfo : SAMLBaseElement

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *canonicalizationMethod;
@property (nonatomic, readonly) NSNumber *signatureMethodLength;
@property (nonatomic, readonly) NSString *signatureMethod;
@property (nonatomic, readonly) NSArray *references;

+ (id)createElement:(id *)arg1;

- (struct _xmlNode *)xmlNode:(id *)arg1;

@end
