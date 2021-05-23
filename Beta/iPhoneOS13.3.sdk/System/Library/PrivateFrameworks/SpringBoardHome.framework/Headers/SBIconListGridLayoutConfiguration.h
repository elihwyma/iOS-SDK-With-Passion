/*
 Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString, SBHClockIconVisualConfiguration, SBHFloatyFolderVisualConfiguration, SBHFolderIconVisualConfiguration, SBHIconAccessoryVisualConfiguration, SBHSidebarVisualConfiguration;

@interface SBIconListGridLayoutConfiguration : NSObject

{
    NSMutableDictionary *_iconLabelVisualConfigurations;
    unsigned long long _numberOfPortraitColumns;
    unsigned long long _numberOfPortraitRows;
    unsigned long long _numberOfLandscapeColumns;
    unsigned long long _numberOfLandscapeRows;
    SBHIconAccessoryVisualConfiguration *_iconAccessoryVisualConfiguration;
    SBHFolderIconVisualConfiguration *_folderIconVisualConfiguration;
    SBHClockIconVisualConfiguration *_clockIconVisualConfiguration;
    SBHFloatyFolderVisualConfiguration *_floatyFolderVisualConfiguration;
    SBHSidebarVisualConfiguration *_sidebarVisualConfiguration;
    struct UIEdgeInsets _portraitLayoutInsets;
    struct UIEdgeInsets _landscapeLayoutInsets;
    struct SBIconImageInfo _iconImageInfo;
}

@property (nonatomic) unsigned long long numberOfPortraitColumns;
@property (nonatomic) unsigned long long numberOfPortraitRows;
@property (nonatomic) unsigned long long numberOfLandscapeColumns;
@property (nonatomic) unsigned long long numberOfLandscapeRows;
@property (nonatomic) struct UIEdgeInsets portraitLayoutInsets;
@property (nonatomic) struct UIEdgeInsets landscapeLayoutInsets;
@property (nonatomic) struct SBIconImageInfo iconImageInfo;
@property (copy, nonatomic) SBHIconAccessoryVisualConfiguration *iconAccessoryVisualConfiguration;
@property (copy, nonatomic) SBHFolderIconVisualConfiguration *folderIconVisualConfiguration;
@property (copy, nonatomic) SBHClockIconVisualConfiguration *clockIconVisualConfiguration;
@property (copy, nonatomic) SBHFloatyFolderVisualConfiguration *floatyFolderVisualConfiguration;
@property (copy, nonatomic) SBHSidebarVisualConfiguration *sidebarVisualConfiguration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (void)setIconLabelVisualConfiguration:(id)arg1 forContentSizeCategory:(id)arg2;
- (id)iconLabelVisualConfigurationForContentSizeCategory:(id)arg1;

@end
