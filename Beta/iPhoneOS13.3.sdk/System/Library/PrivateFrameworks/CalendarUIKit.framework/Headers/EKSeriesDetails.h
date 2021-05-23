/*
 Image: /System/Library/PrivateFrameworks/CalendarUIKit.framework/CalendarUIKit
 */

#import <NSObject.h>

@class EKEvent, NSArray, NSSet;

@interface EKSeriesDetails : NSObject

{
    EKEvent *_masterEvent;
    NSArray *_detachedEvents;
    NSSet *_exceptionDates;
}

@property (retain) EKEvent *masterEvent;
@property (retain) NSArray *detachedEvents;
@property (retain) NSSet *exceptionDates;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end
