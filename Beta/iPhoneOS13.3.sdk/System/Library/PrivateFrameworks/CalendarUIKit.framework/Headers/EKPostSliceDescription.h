/*
 Image: /System/Library/PrivateFrameworks/CalendarUIKit.framework/CalendarUIKit
 */

#import <CalendarUIKit/EKSliceDescription.h>

@class EKSeriesDetails;

@interface EKPostSliceDescription : EKSliceDescription

{
    EKSeriesDetails *_updatedMainSeriesDetails;
    EKSeriesDetails *_createdSeriesDetails;
}

@property (copy) EKSeriesDetails *updatedMainSeriesDetails;
@property (copy) EKSeriesDetails *createdSeriesDetails;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end
