/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKEditOptionPickerView.h>

@class NSMutableDictionary, NSMutableSet, NSString, NTKComplication, NTKComplicationDisplayWrapperView, UIImage;

@protocol NTKComplicationPickerViewDataSource;

@interface NTKComplicationPickerView : NTKEditOptionPickerView

{
    NSMutableSet *_loadedComplications;
    NSMutableDictionary *_displaysByComplication;
    NSMutableDictionary *_controllersByComplication;
    NSMutableDictionary *_layoutRulesByComplication;
    _Bool _needsReload;
    _Bool _curvedInterior;
    long long _style;
    id <NTKComplicationPickerViewDataSource> _dataSource;
    double _curvedRadius;
    double _curvedAngle;
    NSString *_complicationSlot;
    struct CGPoint _curvedCenter;
}

@property (nonatomic) long long style;
@property (weak, nonatomic) id <NTKComplicationPickerViewDataSource> dataSource;
@property (nonatomic, readonly) double curvedRadius;
@property (nonatomic, readonly) double curvedAngle;
@property (nonatomic, readonly) _Bool curvedInterior;
@property (nonatomic, readonly) struct CGPoint curvedCenter;
@property (retain, nonatomic) UIImage *maskImage;
@property (nonatomic, readonly) NSString *complicationSlot;
@property (nonatomic, readonly) NTKComplication *selectedComplication;
@property (nonatomic, readonly) NTKComplicationDisplayWrapperView *selectedComplicationDisplay;

- (void)dealloc;
- (void)layoutSubviews;
- (void)reloadIfNeeded;
- (void)setNeedsReload;
- (id)_newContainerView;
- (id)complicationAtIndex:(unsigned long long)arg1;
- (id)initWithAllowedComplications:(id)arg1 selectedComplication:(id)arg2 complicationSlot:(id)arg3;
- (void)setCurvedRadius:(double)arg1 curvedAngle:(double)arg2 curvedCenter:(struct CGPoint)arg3 curvedInterior:(_Bool)arg4;
- (void)stealSelectedComplicationDisplay:(id *)arg1 controller:(id *)arg2;
- (id)_displayByLoadingComplication:(id)arg1;
- (void)_detachComplicationDisplays;
- (void)_loadComplication:(id)arg1;
- (void)_reloadLayoutForComplication:(id)arg1;
- (Class)_sideViewClass;
- (void)_willDisplaySideView:(id)arg1;
- (void)_configureSideView:(id)arg1 forOption:(id)arg2;

@end
