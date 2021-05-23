/*
 Image: /System/Library/PrivateFrameworks/PlugInKit.framework/PlugInKit
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSSet, NSString, PKDiscoveryLSWatcher;

@protocol OS_dispatch_queue, OS_os_activity;

@interface PKDiscoveryDriver : NSObject

{
    int _annotationNotifyToken;
    NSDictionary *_attributes;
    unsigned long long _flags;
    CDUnknownBlockType _report;
    NSObject<OS_os_activity> *_relatedActivity;
    NSSet *_lastResults;
    id _mcNotificationToken;
    PKDiscoveryLSWatcher *_lsWatcher;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_sync;
}

@property (retain) NSDictionary *attributes;
@property unsigned long long flags;
@property (copy) CDUnknownBlockType report;
@property (retain) NSObject<OS_os_activity> *relatedActivity;
@property (retain) NSSet *lastResults;
@property int annotationNotifyToken;
@property (retain) id mcNotificationToken;
@property (retain) PKDiscoveryLSWatcher *lsWatcher;
@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (retain) NSObject<OS_dispatch_queue> *sync;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)cancel;
- (void)removeWatchers;
- (void)installWatchers;
- (void)performWithPreviousResults:(id)arg1 forceNotify:(_Bool)arg2;
- (id)initWithAttributes:(id)arg1 flags:(unsigned long long)arg2 report:(CDUnknownBlockType)arg3;

@end
