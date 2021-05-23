/*
 Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@protocol OS_dispatch_queue;

@interface MCManagedDomainsCache : NSObject

{
    NSObject<OS_dispatch_queue> *_memberQueue;
    NSMutableArray *_memberQueueCache;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *memberQueue;
@property (retain, nonatomic) NSMutableArray *memberQueueCache;

+ (id)sharedCache;

- (id)init;
- (void)rereadCache;
- (void)memberQueueRereadCache;
- (_Bool)isURLManaged:(id)arg1;

@end
