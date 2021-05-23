/*
 Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

#import <Foundation/NSObject.h>

@class CMHealthTrackerInternal;

@interface CMHealthTracker : NSObject

{
    CMHealthTrackerInternal *_internal;
}

@property (nonatomic, readonly) CMHealthTrackerInternal *_internal;

+ (_Bool)isMetMinutesAvailable;
+ (long long)isAuthorizedForMetMinutes;
+ (_Bool)isVO2MaxDataAvailable;
+ (long long)isAuthorizedForVO2MaxData;

- (id)init;
- (void)dealloc;
- (void)queryMetMinutesFromDate:(id)arg1 toDate:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)queryVO2MaxInputsFromRecord:(id)arg1 handler:(CDUnknownBlockType)arg2;

@end
