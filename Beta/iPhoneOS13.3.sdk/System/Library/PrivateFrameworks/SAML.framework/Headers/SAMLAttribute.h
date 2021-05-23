/*
 Image: /System/Library/PrivateFrameworks/SAML.framework/SAML
 */

#import <SAML/SAMLBaseElement.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface SAMLAttribute : SAMLBaseElement

@property (retain, nonatomic) NSString *name;
@property (nonatomic, readonly) NSString *nameFormat;
@property (nonatomic, readonly) NSString *friendlyName;
@property (nonatomic, readonly) NSArray *values;

+ (id)createElement:(id *)arg1;

- (void)addAttributeValue:(id)arg1;

@end
