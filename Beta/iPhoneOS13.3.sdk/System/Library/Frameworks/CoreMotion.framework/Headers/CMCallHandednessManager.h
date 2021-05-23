/*
 Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

#import <Foundation/NSObject.h>

@protocol CMCallHandednessDelegate, OS_dispatch_queue;

@interface CMCallHandednessManager : NSObject

{
    NSObject<OS_dispatch_queue> *fPrivateQueue;
    struct Dispatcher *fDispatcher;
    id <CMCallHandednessDelegate> _delegate;
}

@property (nonatomic) id <CMCallHandednessDelegate> delegate;

+ (_Bool)isCallHandednessAvailable;

- (id)init;
- (void)dealloc;
- (void)onCallHandednessStateUpdated:(const Sample_9e52e243 *)arg1;
- (void)startCallHandednessUpdates;
- (void)stopCallHandednessUpdates;

@end
