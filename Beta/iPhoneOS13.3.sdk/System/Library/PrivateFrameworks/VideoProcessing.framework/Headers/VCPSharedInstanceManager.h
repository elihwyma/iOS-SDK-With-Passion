/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VCPSharedInstanceManager : NSObject

{
    NSObject<OS_dispatch_queue> *serialQueue_;
    NSMutableDictionary *sharedInstances_;
}

+ (id)sharedManager;

- (id)init;
- (void)reset;
- (id)sharedInstanceWithIdentifier:(id)arg1 andCreationBlock:(CDUnknownBlockType)arg2;

@end
