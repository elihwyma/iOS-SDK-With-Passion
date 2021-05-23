/*
 Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

#import <Foundation/NSObject.h>

@protocol CMPickupDelegate, OS_dispatch_queue;

@interface CMPickupManager : NSObject

{
    NSObject<OS_dispatch_queue> *fPrivateQueue;
    struct Dispatcher *fDispatcher;
    id <CMPickupDelegate> _delegate;
}

@property (nonatomic) id <CMPickupDelegate> delegate;

+ (_Bool)isPickupAvailable;

- (id)init;
- (void)dealloc;
- (void)onPickupStateUpdated:(const Sample_9e52e243 *)arg1;
- (void)startPickupUpdates;
- (void)stopPickupUpdates;

@end
