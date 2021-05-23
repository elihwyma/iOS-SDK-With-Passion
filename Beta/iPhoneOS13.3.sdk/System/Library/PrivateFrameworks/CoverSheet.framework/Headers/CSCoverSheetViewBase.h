/*
 Image: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
 */

#import <SpringBoardFoundation/SBFTouchPassThroughView.h>

#import <CoverSheet/Swift-Protocol.h>

@class NSArray, NSString;

@protocol UICoordinateSpace;

@interface CSCoverSheetViewBase : SBFTouchPassThroughView <Swift>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic, readonly) id <UICoordinateSpace> presentationCoordinateSpace;
@property (copy, nonatomic, readonly) NSArray *presentationRegions;

- (_Bool)isCoverSheetView;

@end
