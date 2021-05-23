/*
 Image: /System/Library/Frameworks/CoreServices.framework/CoreServices
 */

#import <NSObject.h>

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface LSDatabaseBuilder : NSObject

{
    NSObject<OS_dispatch_queue> *_ioQueue;
}

- (void)setSeedingComplete:(_Bool)arg1;
- (id)initWithIOQueue:(id)arg1;
- (void)createAndSeedLocalDatabase:(_Bool *)arg1;

@end
