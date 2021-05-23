/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSDate, NSMutableDictionary, NSString, SBDateTimeController;

@protocol SBFDateProviding;

@interface SBOverridableDateProvider : NSObject

{
    SBDateTimeController *_dateTimeController;
    id <SBFDateProviding> _underlyingProvider;
    NSMutableDictionary *_minuteHandlers;
    unsigned long long _nextToken;
    id _underlyingToken;
    NSDate *_overrideDate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)date;
- (id)initWithDateProvider:(id)arg1;
- (id)observeMinuteUpdatesWithHandler:(CDUnknownBlockType)arg1;
- (void)removeMinuteUpdateHandler:(id)arg1;
- (void)controller:(id)arg1 didChangeOverrideDateFromDate:(id)arg2;
- (void)_updateForOverrides;
- (void)_updateUnderlyingProvider;
- (void)_fireHandlersForDate:(id)arg1;

@end
