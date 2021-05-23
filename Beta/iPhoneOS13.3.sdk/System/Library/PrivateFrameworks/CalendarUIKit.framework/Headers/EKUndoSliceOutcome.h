/*
 Image: /System/Library/PrivateFrameworks/CalendarUIKit.framework/CalendarUIKit
 */

#import <NSObject.h>

@class EKEvent, EKPostSliceDescription, EKSeriesDetails;

@interface EKUndoSliceOutcome : NSObject

{
    EKEvent *_masterToDelete;
    EKSeriesDetails *_mainSeriesDetails;
    EKSeriesDetails *_createdSeriesDetails;
    EKPostSliceDescription *_originalPostSliceDescription;
}

@property (copy) EKEvent *masterToDelete;
@property (copy) EKSeriesDetails *mainSeriesDetails;
@property (copy) EKSeriesDetails *createdSeriesDetails;
@property (readonly) EKPostSliceDescription *originalPostSliceDescription;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end
