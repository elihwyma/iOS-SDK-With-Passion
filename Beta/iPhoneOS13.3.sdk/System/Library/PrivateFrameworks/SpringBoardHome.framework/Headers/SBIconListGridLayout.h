/*
 Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString, SBHClockIconVisualConfiguration, SBHFloatyFolderVisualConfiguration, SBHFolderIconVisualConfiguration, SBHIconAccessoryVisualConfiguration, SBHSidebarVisualConfiguration, SBIconListGridLayoutConfiguration, UIFont;

@interface SBIconListGridLayout : NSObject

{
    NSMutableDictionary *_labelFonts;
    UIFont *_accessoryFont;
    UIFont *_accessoryBoldFont;
    SBIconListGridLayoutConfiguration *_layoutConfiguration;
}

@property (copy, nonatomic, readonly) SBIconListGridLayoutConfiguration *layoutConfiguration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) unsigned long long maximumIconCount;
@property (nonatomic, readonly) struct SBIconImageInfo iconImageInfo;
@property (copy, nonatomic, readonly) SBHIconAccessoryVisualConfiguration *iconAccessoryVisualConfiguration;
@property (copy, nonatomic, readonly) SBHFolderIconVisualConfiguration *folderIconVisualConfiguration;
@property (copy, nonatomic, readonly) SBHClockIconVisualConfiguration *clockIconVisualConfiguration;
@property (copy, nonatomic, readonly) SBHFloatyFolderVisualConfiguration *floatyFolderVisualConfiguration;
@property (copy, nonatomic, readonly) SBHSidebarVisualConfiguration *sidebarVisualConfiguration;
@property (nonatomic, readonly) _Bool usesAlternateLayout;

- (id)init;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)initWithLayoutConfiguration:(id)arg1;
- (id)labelVisualConfigurationForContentSizeCategory:(id)arg1 options:(unsigned long long)arg2;
- (id)labelFontForContentSizeCategory:(id)arg1 options:(unsigned long long)arg2;
- (unsigned long long)numberOfColumnsForOrientation:(long long)arg1;
- (unsigned long long)numberOfRowsForOrientation:(long long)arg1;
- (struct UIEdgeInsets)layoutInsetsForOrientation:(long long)arg1;
- (void)noteIcons:(id)arg1 didDropAtCoordinate:(struct SBIconCoordinate)arg2 inList:(id)arg3;
- (struct SBIconCoordinate)iconCoordinateForIndex:(unsigned long long)arg1 forOrientation:(long long)arg2 inList:(id)arg3;
- (id)accessoryFontForContentSizeCategory:(id)arg1 options:(unsigned long long)arg2;
- (id)accessoryBoldFont;
- (id)accessoryFont;

@end
