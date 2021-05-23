/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Foundation/NSObject.h>

@class INCodableAttribute, INImage;

@interface INIntentKeyParameter : NSObject

{
    INCodableAttribute *_codableAttribute;
    id _value;
    INImage *_image;
}

@property (nonatomic, readonly) INCodableAttribute *codableAttribute;
@property (nonatomic, readonly) id value;
@property (nonatomic, readonly) INImage *image;

- (id)initWithCodableAttribute:(id)arg1 value:(id)arg2 image:(id)arg3;

@end
