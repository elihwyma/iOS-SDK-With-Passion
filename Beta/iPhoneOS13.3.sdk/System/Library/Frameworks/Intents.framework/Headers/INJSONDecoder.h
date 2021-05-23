/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Foundation/NSObject.h>

@interface INJSONDecoder : NSObject

- (void)decodeObject:(id)arg1 withCodableDescription:(id)arg2 from:(id)arg3;
- (id)decodeWithCodableAttribute:(id)arg1 from:(id)arg2;
- (id)decodeObjectOfClass:(Class)arg1 from:(id)arg2;
- (id)decodeObjectsOfClass:(Class)arg1 from:(id)arg2;
- (id)_decodeObjectOfClass:(Class)arg1 withCodableDescription:(id)arg2 from:(id)arg3;
- (id)_decodeWithCodableAttribute:(id)arg1 from:(id)arg2;

@end
