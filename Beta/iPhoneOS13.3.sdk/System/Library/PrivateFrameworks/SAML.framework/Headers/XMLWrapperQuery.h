/*
 Image: /System/Library/PrivateFrameworks/SAML.framework/SAML
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface XMLWrapperQuery : NSObject

+ (void)initialize;

- (void)registerNamespace:(id)arg1;
- (id)executeXpathQuery:(struct _xmlDoc *)arg1 query:(id)arg2 ctxNode:(struct _xmlNode *)arg3 error:(id *)arg4;
- (_Bool)registerXpathNamespacesForCtx:(struct _xmlXPathContext *)arg1 error:(id *)arg2;
- (id)elementForNode:(struct _xmlNode *)arg1;
- (id)searchNodeWithXpathQuery:(struct _xmlNode *)arg1 query:(id)arg2 error:(id *)arg3;

@end
