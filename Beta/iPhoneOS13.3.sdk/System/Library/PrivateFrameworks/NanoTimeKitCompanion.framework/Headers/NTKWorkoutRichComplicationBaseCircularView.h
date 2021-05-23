/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <UIKit/UIView.h>

#import <NanoTimeKitCompanion/Swift-Protocol.h>

@class CLKComplicationTemplate, NSString, NTKColoringImageView, UIColor;

@protocol CLKMonochromeFilterProvider;

@interface NTKWorkoutRichComplicationBaseCircularView : UIView <Swift>

{
    UIView *_backgroundView;
    UIColor *_immutableBackgroundColor;
    NTKColoringImageView *_staticImageView;
    long long _state;
    _Bool _paused;
    id <CLKMonochromeFilterProvider> _filterProvider;
    CLKComplicationTemplate *_complicationTemplate;
}

@property (nonatomic) _Bool paused;
@property (retain, nonatomic) CLKComplicationTemplate *complicationTemplate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <CLKMonochromeFilterProvider> filterProvider;

- (void)dealloc;
- (void)layoutSubviews;
- (void)_updateUI;
- (void)_applyChanges;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (void)updateMonochromeColor;
- (id)initWithNoActiveWorkoutImageName:(id)arg1 animatedImagesName:(id)arg2;

@end
