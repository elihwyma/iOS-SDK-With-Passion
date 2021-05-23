/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <Foundation/NSObject.h>

@interface IKDOMSchema : NSObject

{
    struct _xmlSchema *_schemaPtr;
}

- (void)dealloc;
- (id)initWithSchemaData:(id)arg1;
- (_Bool)validateDocument:(id)arg1 error:(id *)arg2;

@end
