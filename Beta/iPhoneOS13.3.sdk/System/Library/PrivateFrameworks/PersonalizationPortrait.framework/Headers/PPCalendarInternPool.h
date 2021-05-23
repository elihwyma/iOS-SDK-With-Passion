/*
 Image: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
 */

#import <NSObject.h>

@class _PASLock;

@interface PPCalendarInternPool : NSObject

{
    _PASLock *_poolLock;
}

- (id)init;
- (id)internedCalendarWithEKCalendar:(id)arg1;

@end
