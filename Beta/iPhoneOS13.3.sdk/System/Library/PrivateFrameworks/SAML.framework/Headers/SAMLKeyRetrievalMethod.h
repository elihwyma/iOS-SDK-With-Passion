/*
 Image: /System/Library/PrivateFrameworks/SAML.framework/SAML
 */

#import <SAML/SAMLBaseElement.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface SAMLKeyRetrievalMethod : SAMLBaseElement

@property (nonatomic, readonly) NSString *uri;
@property (nonatomic, readonly) NSString *type;
@property (nonatomic, readonly) NSArray *transforms;

+ (id)createElement:(id *)arg1;

@end
