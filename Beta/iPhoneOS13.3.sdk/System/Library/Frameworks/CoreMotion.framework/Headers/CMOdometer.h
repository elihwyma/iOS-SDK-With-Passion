/*
 Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

#import <Foundation/NSObject.h>

@class CMOdometerProxy;

@protocol CMOdometerDelegate;

@interface CMOdometer : NSObject

{
    id <CMOdometerDelegate> _delegate;
    CMOdometerProxy *_odometerProxy;
}

@property (nonatomic, readonly) CMOdometerProxy *odometerProxy;
@property (nonatomic) id <CMOdometerDelegate> delegate;

- (id)init;
- (void)dealloc;
- (void)startOdometerUpdatesForActivity:(long long)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)stopOdometerUpdates;

@end
