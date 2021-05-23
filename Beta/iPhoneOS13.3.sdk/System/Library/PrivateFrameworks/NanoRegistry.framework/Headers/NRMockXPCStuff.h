/*
 Image: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface NRMockXPCStuff : NSObject

{
    NSMutableDictionary *_mockListeners;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain, nonatomic) NSMutableDictionary *mockListeners;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

+ (id)sharedInstance;

- (id)init;

@end
