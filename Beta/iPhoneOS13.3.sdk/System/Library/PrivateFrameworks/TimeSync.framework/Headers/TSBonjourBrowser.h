/*
 Image: /System/Library/PrivateFrameworks/TimeSync.framework/TimeSync
 */

#import <Foundation/NSObject.h>

@class NSArray;

@protocol OS_dispatch_queue, TSBonjourBrowserDelegate;

@interface TSBonjourBrowser : NSObject

{
    struct _DNSServiceRef_t *_sdRef;
    NSObject<OS_dispatch_queue> *_queue;
    id <TSBonjourBrowserDelegate> _delegate;
    NSArray *_nodes;
}

@property (nonatomic) id <TSBonjourBrowserDelegate> delegate;
@property (copy, nonatomic) NSArray *nodes;

- (id)init;
- (void)dealloc;
- (_Bool)stopBrowsing;
- (void)addedServiceWithName:(const char *)arg1 regType:(const char *)arg2 domain:(const char *)arg3 onInterface:(unsigned int)arg4 withFlags:(unsigned int)arg5;
- (void)removedServiceWithName:(const char *)arg1 regType:(const char *)arg2 domain:(const char *)arg3 onInterface:(unsigned int)arg4 withFlags:(unsigned int)arg5;
- (_Bool)startBrowsingWithError:(id *)arg1;

@end
