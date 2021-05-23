/*
 Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

#import <Foundation/NSObject.h>

@class CMAltimeterInternal;

@interface CMElevation : NSObject

{
    CMAltimeterInternal *_internal;
}

@property (nonatomic, readonly) CMAltimeterInternal *_internal;

+ (_Bool)isElevationAvailable;

- (id)init;
- (void)dealloc;
- (void)startElevationUpdatesWithHandler:(CDUnknownBlockType)arg1;
- (void)stopElevationUpdates;

@end
