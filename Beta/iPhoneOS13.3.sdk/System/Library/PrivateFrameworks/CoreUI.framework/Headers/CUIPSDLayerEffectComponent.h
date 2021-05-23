/*
 Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface CUIPSDLayerEffectComponent : NSObject

{
    _Bool _visible;
    NSString *_name;
}

@property (retain) NSString *name;
@property _Bool visible;

- (void)dealloc;
- (_Bool)updateLayerEffectPreset:(id)arg1 error:(id *)arg2;
- (id)initWithEffectFromPreset:(id)arg1 atIndex:(unsigned int)arg2;
- (id)_colorFromShapeEffectValue:(CDUnion_577fdfa6)arg1;
- (unsigned int)effectType;

@end
