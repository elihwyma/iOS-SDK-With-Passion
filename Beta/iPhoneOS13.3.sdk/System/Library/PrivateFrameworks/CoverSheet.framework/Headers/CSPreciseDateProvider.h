/*
 Image: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
 */

#import <Foundation/NSObject.h>

@class NSString, SBUIPreciseClockTimer;

@interface CSPreciseDateProvider : NSObject

{
    SBUIPreciseClockTimer *_preciseClockTimer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)date;
- (id)observeMinuteUpdatesWithHandler:(CDUnknownBlockType)arg1;
- (void)removeMinuteUpdateHandler:(id)arg1;

@end
