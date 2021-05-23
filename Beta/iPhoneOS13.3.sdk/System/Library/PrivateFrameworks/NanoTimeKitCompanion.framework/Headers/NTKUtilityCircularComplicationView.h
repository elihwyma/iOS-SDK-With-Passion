/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKUtilityComplicationView.h>

@class NSString, NTKContainerView;

@interface NTKUtilityCircularComplicationView : NTKUtilityComplicationView

{
    NTKContainerView *_contentView;
}

@property (nonatomic, readonly) NTKContainerView *contentView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)setEditing:(_Bool)arg1;
- (void)layoutContainerView:(id)arg1;
- (void)_layoutContentView;
- (long long)layoutOverride;
- (void)setEditingRotationAngle:(double)arg1;
- (void)_updateEditingRotationAngle;

@end
