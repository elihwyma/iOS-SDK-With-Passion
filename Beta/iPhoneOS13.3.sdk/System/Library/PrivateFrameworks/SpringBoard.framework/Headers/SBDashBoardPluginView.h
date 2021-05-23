/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <CoverSheet/CSCoverSheetViewBase.h>

@interface SBDashBoardPluginView : CSCoverSheetViewBase

{
    struct CGRect _presentationRegion;
}

@property (nonatomic) struct CGRect presentationRegion;

- (id)presentationRegions;

@end
