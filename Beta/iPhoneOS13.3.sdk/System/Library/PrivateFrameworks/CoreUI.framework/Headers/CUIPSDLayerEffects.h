/*
 Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface CUIPSDLayerEffects : NSObject

{
    _Bool _visible;
    double _effectScale;
    NSMutableDictionary *_effectList;
}

@property _Bool visible;
@property double effectScale;
@property (retain) NSMutableDictionary *effectList;

- (id)init;
- (void)dealloc;
- (id)dropShadow;
- (void)addLayerEffectComponent:(id)arg1;
- (id)colorOverlay;

@end
