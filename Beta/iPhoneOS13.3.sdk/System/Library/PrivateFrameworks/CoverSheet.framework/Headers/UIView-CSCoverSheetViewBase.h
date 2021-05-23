/*
 Image: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
 */

#import <UIKit/UIView.h>

@interface UIView (CSCoverSheetViewBase)

@property (nonatomic) long long coverSheetRegionRole;
@property (nonatomic, getter=coverSheetRegionIsReservedForHorizontalScrolling) _Bool coverSheetRegionReservedForHorizontalScrolling;

- (_Bool)isCoverSheetView;

@end
