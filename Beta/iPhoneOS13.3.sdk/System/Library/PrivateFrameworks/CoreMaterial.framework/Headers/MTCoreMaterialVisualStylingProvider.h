/*
 Image: /System/Library/PrivateFrameworks/CoreMaterial.framework/CoreMaterial
 */

#import <Foundation/NSObject.h>

@class NSPointerArray, NSString;

@protocol MTVisualStyleSetProviding;

@interface MTCoreMaterialVisualStylingProvider : NSObject

{
    id <MTVisualStyleSetProviding> _visualStyleSet;
    NSPointerArray *_observers;
}

@property (copy, nonatomic, readonly) NSString *visualStyleSetName;
@property (retain, nonatomic, getter=_visualStyleSet, setter=_setVisualStyleSet:) id <MTVisualStyleSetProviding> visualStyleSet;
@property (retain, nonatomic, getter=_observers) NSPointerArray *observers;

+ (id)coreMaterialVisualStylingProviderForRecipe:(id)arg1 andCategory:(id)arg2;
+ (id)coreMaterialVisualStylingProviderForStyleSetNamed:(id)arg1 inBundle:(id)arg2;
+ (_Bool)canGenerateVisualStyleSetFromRecipe:(id)arg1;

- (id)description;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (id)visualStylingForStyle:(id)arg1;
- (void)_notifyObserversWithBlock:(CDUnknownBlockType)arg1;
- (void)updateVisualStyleSetFromRecipe:(id)arg1 andCategory:(id)arg2;
- (void)updateVisualStyleSetGeneratedFromRecipe:(id)arg1;

@end
