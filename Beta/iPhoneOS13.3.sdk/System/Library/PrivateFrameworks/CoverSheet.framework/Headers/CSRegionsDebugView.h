/*
 Image: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
 */

#import <CoverSheet/CSCoverSheetViewBase.h>

@class NSArray;

@interface CSRegionsDebugView : CSCoverSheetViewBase

{
    NSArray *_regions;
}

@property (retain, nonatomic) NSArray *regions;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)drawRect:(struct CGRect)arg1;

@end
