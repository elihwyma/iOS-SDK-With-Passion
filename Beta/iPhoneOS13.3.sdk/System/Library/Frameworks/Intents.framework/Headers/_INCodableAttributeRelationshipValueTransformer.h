/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Foundation/NSValueTransformer.h>

@class INCodableAttribute;

__attribute__((visibility("hidden")))
@interface _INCodableAttributeRelationshipValueTransformer : NSValueTransformer

{
    INCodableAttribute *_codableAttribute;
}

@property (weak, nonatomic, readonly) INCodableAttribute *codableAttribute;

- (id)transformedValue:(id)arg1;
- (id)initWithCodableAttribute:(id)arg1;

@end
