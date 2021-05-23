/*
 Image: /System/Library/PrivateFrameworks/ActionPredictionHeuristicsInternal.framework/ActionPredictionHeuristicsInternal
 */

#import <NSObject.h>

@class ATXHeuristicDevice, NSString, _PASLock;

@interface ATXBestContactHandleForServiceDataSource : NSObject

{
    ATXHeuristicDevice *_device;
    _PASLock *_lock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithDevice:(id)arg1;
- (void)idStatusUpdatedForDestinations:(id)arg1 service:(id)arg2;
- (void)bestHandleForContact:(id)arg1 service:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (id)_getBestGuessFromRankedHandle:(id)arg1 forService:(id)arg2;

@end
