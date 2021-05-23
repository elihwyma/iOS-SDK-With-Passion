/*
 Image: /System/Library/PrivateFrameworks/PhotoBoothEffects.framework/PhotoBoothEffects
 */

#import <NSObject.h>

@class CIFilter;

@interface PBFilter : NSObject

{
    CIFilter *_ciFilter;
    CIFilter *_wrapMirrorFilter;
}

+ (id)filterWithName:(id)arg1;
+ (_Bool)needsDisplayForKey:(id)arg1;
+ (id)defaultValueForKey:(id)arg1;

- (id)init;
- (void)dealloc;
- (id)description;
- (id)name;
- (id)localizedName;
- (void)setDefaults;
- (id)inputKeys;
- (id)ciFilterName;
- (_Bool)needsWrapMirror;
- (void)applyParametersToCIFilter:(_Bool)arg1 extent:(struct CGRect)arg2;
- (id)createOutputImage:(id)arg1 mirrored:(_Bool)arg2 size:(struct CGSize)arg3;
- (void)resetInputImage;
- (id)ciFilter;
- (_Bool)allowAbsoluteGestures;
- (id)_presentationName;
- (void)renderWithContext:(id)arg1 inputSize:(struct CGSize)arg2 outputRect:(struct CGRect)arg3 mirrored:(_Bool)arg4;
- (struct CGPoint)pointValueForKeyIfSupported:(id)arg1;
- (float)floatValueForKeyIfSupported:(id)arg1;
- (void)setPointValue:(struct CGPoint)arg1 forKeyIfSupported:(id)arg2;
- (void)setFloatValue:(float)arg1 forKeyIfSupported:(id)arg2;
- (void)handleTapGesture:(struct CGPoint)arg1 viewSize:(struct CGSize)arg2 mirror:(_Bool)arg3;
- (void)handleGestureAtLocations:(struct CGPoint *)arg1 count:(int)arg2 translation:(struct CGPoint)arg3 viewSize:(struct CGSize)arg4 stateBegan:(_Bool)arg5 mirror:(_Bool)arg6;
- (void)handlePanGesture:(struct CGPoint)arg1 viewSize:(struct CGSize)arg2 stateBegan:(_Bool)arg3 mirror:(_Bool)arg4;
- (void)handlePinchGesture:(float)arg1 stateBegan:(_Bool)arg2;
- (void)handleRotateGesture:(float)arg1 stateBegan:(_Bool)arg2 mirror:(_Bool)arg3;

@end
