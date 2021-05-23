/*
 Image: /System/Library/PrivateFrameworks/CoreMaterial.framework/CoreMaterial
 */

#import <Foundation/NSMutableDictionary.h>

@interface NSMutableDictionary (MTMaterialDescriptionInternal)

- (void)setBlurRadius:(double)arg1 ignoringIdentity:(_Bool)arg2 includingOptimizations:(_Bool)arg3 withAdditionalInfoPromise:(CDUnknownBlockType)arg4;
- (void)setAverageColorEnabled:(_Bool)arg1 includingOptimizations:(_Bool)arg2 withAdditionalInfoPromise:(CDUnknownBlockType)arg3;
- (void)setLuminanceAmount:(double)arg1 values:(id)arg2 ignoringIdentity:(_Bool)arg3 includingOptimizations:(_Bool)arg4 withAdditionalInfoPromise:(CDUnknownBlockType)arg5;
- (void)setSaturation:(double)arg1 ignoringIdentity:(_Bool)arg2 includingOptimizations:(_Bool)arg3 withAdditionalInfoPromise:(CDUnknownBlockType)arg4;
- (void)setBrightness:(double)arg1 ignoringIdentity:(_Bool)arg2 includingOptimizations:(_Bool)arg3 withAdditionalInfoPromise:(CDUnknownBlockType)arg4;
- (void)setColorMatrix:(struct CAColorMatrix)arg1 ignoringIdentity:(_Bool)arg2 includingOptimizations:(_Bool)arg3 withAdditionalInfoPromise:(CDUnknownBlockType)arg4;
- (void)setTintColor:(id)arg1 includingOptimizations:(_Bool)arg2 withAdditionalInfoPromise:(CDUnknownBlockType)arg3;
- (void)setZoom:(double)arg1 ignoringIdentity:(_Bool)arg2 includingOptimizations:(_Bool)arg3 withAdditionalInfoPromise:(CDUnknownBlockType)arg4;
- (void)sortFiltersWithOrder:(id)arg1;
- (void)setValue:(id)arg1 forProperty:(id)arg2 ofFilter:(id)arg3;
- (void)_processAdditionalInfo:(id)arg1 forFilter:(id)arg2;

@end
