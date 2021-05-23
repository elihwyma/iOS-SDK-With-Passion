/*
 Image: /System/Library/PrivateFrameworks/SAML.framework/SAML
 */

#import <SAML/XMLWrapperElement.h>

__attribute__((visibility("hidden")))
@interface SAMLBaseElement : XMLWrapperElement

+ (id)createElement:(id *)arg1;

- (id)initWithNode:(struct _xmlNode *)arg1 doc:(struct _xmlDoc *)arg2 query:(id)arg3 error:(id *)arg4;
- (void)setElementProperties;

@end
