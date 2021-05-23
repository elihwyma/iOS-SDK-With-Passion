/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

@class GEOLocationShifter;

@interface _MKLocationShifter : NSObject

{
    GEOLocationShifter *_locationShifter;
}

@property (nonatomic, readonly, getter=isLocationShiftEnabled) _Bool locationShiftEnabled;

+ (_Bool)isLocationShiftRequiredForLocation:(id)arg1;

- (id)init;
- (void)_prepareShiftForLocation:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2 withShiftRequestBlock:(CDUnknownBlockType)arg3;
- (void)shiftLocation:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)shiftLocation:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2 callbackQueue:(id)arg3;

@end
