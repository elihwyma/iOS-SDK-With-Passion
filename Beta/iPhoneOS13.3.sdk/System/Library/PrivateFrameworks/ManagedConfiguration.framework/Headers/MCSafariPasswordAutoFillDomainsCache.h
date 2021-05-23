/*
 Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@protocol OS_dispatch_queue;

@interface MCSafariPasswordAutoFillDomainsCache : NSObject

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
- (_Bool)isSafariPasswordAutoFillAllowedForURL:(id)arg1;

@end
