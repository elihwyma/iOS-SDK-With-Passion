/*
 Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue;

@interface CMOnBodyStatusManager : NSObject

{
    struct CLConnectionClient *fLocationdConnection;
    _Bool fSubscribedToOnBodyStatusDetection;
    NSObject<OS_dispatch_queue> *fOnBodyStatusQueue;
    CDUnknownBlockType fOnBodyStatusHandler;
    NSObject<OS_dispatch_queue> *fPrivateQueue;
}

+ (_Bool)isOnBodyStatusDetectionAvailable;
+ (id)sharedOnBodyStatusManager;

- (id)init;
- (void)dealloc;
- (void)disconnect;
- (void)connect;
- (void)startOnBodyStatusDetectionPrivateToQueue:(id)arg1 withParameters:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)stopOnBodyStatusDetectionPrivate;
- (void)startOnBodyStatusDetectionToQueue:(id)arg1 withParameters:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)stopOnBodyStatusDetection;
- (void)setPropertiesWithDictionary:(id)arg1;

@end
