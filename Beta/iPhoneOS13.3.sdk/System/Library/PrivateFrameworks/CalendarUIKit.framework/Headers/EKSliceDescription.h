/*
 Image: /System/Library/PrivateFrameworks/CalendarUIKit.framework/CalendarUIKit
 */

#import <NSObject.h>

@class EKEvent, EKSeriesDetails;

@interface EKSliceDescription : NSObject

{
    EKEvent *_originalEventToSliceOn;
    EKSeriesDetails *_originalMainSeriesDetails;
}

@property (retain) EKEvent *originalEventToSliceOn;
@property (retain) EKSeriesDetails *originalMainSeriesDetails;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end
