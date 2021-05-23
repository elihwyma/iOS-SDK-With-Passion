/*
 Image: /System/Library/PrivateFrameworks/SAML.framework/SAML
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface XMLWrapperSchema : NSObject

{
    struct _xmlSchema *_schemaPtr;
}

- (void)dealloc;
- (id)initWithSchemaData:(id)arg1;
- (_Bool)validateDocument:(struct _xmlDoc *)arg1 error:(id *)arg2;

@end
