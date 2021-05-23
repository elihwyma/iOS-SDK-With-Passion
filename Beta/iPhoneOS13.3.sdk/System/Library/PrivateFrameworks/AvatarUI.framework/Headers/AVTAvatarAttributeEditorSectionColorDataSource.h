/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <Foundation/NSObject.h>

@class AVTAvatarAttributeEditorColorSection;

@protocol AVTAvatarAttributeEditorSectionColorDataSourceDelegate;

@interface AVTAvatarAttributeEditorSectionColorDataSource : NSObject

{
    AVTAvatarAttributeEditorColorSection *_colorSection;
    id <AVTAvatarAttributeEditorSectionColorDataSourceDelegate> _delegate;
    long long _selectedPrimaryColorIndex;
    long long _selectedExtendedColorIndex;
    long long _displayMode;
}

@property (nonatomic) long long selectedPrimaryColorIndex;
@property (nonatomic) long long selectedExtendedColorIndex;
@property (nonatomic) long long displayMode;
@property (nonatomic, readonly) long long selectedItemIndex;
@property (retain, nonatomic) AVTAvatarAttributeEditorColorSection *colorSection;
@property (nonatomic, readonly) _Bool isShowingSlider;
@property (nonatomic, readonly) _Bool isShowingExtended;
@property (nonatomic) id <AVTAvatarAttributeEditorSectionColorDataSourceDelegate> delegate;

+ (id)selectedItemFromItems:(id)arg1;
+ (long long)indexOfItem:(id)arg1 inItems:(id)arg2;

- (id)init;
- (long long)numberOfItemsInSection:(long long)arg1;
- (void)resetToDefaultDisplayMode;
- (void)updateSelectedIndexesSelectingItem:(id)arg1 fromUserInteraction:(_Bool)arg2;
- (id)indexPathOfExtendedIcon;
- (void)toggleSliderMode;
- (void)toggleExtendedMode;
- (id)sectionItemAtIndex:(long long)arg1;
- (void)selectSectionItemAtIndexPath:(id)arg1;

@end
