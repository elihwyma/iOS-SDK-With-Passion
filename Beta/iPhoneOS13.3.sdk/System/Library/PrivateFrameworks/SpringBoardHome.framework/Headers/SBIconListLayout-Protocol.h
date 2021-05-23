/*
 Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

#import <SpringBoardHome/Swift-Protocol.h>

@class SBHClockIconVisualConfiguration, SBHFloatyFolderVisualConfiguration, SBHFolderIconVisualConfiguration, SBHIconAccessoryVisualConfiguration, SBHSidebarVisualConfiguration;

@protocol SBIconListLayout <Swift>

@property (nonatomic, readonly) unsigned long long maximumIconCount;
@property (nonatomic, readonly) struct SBIconImageInfo iconImageInfo;
@property (copy, nonatomic, readonly) SBHIconAccessoryVisualConfiguration *iconAccessoryVisualConfiguration;
@property (copy, nonatomic, readonly) SBHFolderIconVisualConfiguration *folderIconVisualConfiguration;
@property (copy, nonatomic, readonly) SBHClockIconVisualConfiguration *clockIconVisualConfiguration;
@property (copy, nonatomic, readonly) SBHFloatyFolderVisualConfiguration *floatyFolderVisualConfiguration;
@property (copy, nonatomic, readonly) SBHSidebarVisualConfiguration *sidebarVisualConfiguration;
@property (nonatomic, readonly) _Bool usesAlternateLayout;

- (unsigned short)numberOfColumnsForOrientation: /* Error: Ran out of types for this method. */;
- (unsigned short)numberOfRowsForOrientation: /* Error: Ran out of types for this method. */;
- (unsigned short)layoutInsetsForOrientation: /* Error: Ran out of types for this method. */;
- (unsigned short)iconCoordinateForIndex:forOrientation:inList: /* Error: Ran out of types for this method. */;

@end
