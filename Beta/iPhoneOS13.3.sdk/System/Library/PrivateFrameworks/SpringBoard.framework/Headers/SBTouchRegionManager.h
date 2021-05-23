/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

#import <SpringBoard/Swift-Protocol.h>

@class FBSDisplayLayoutMonitor, NSString, SBBackBoardServicesInterface, SBMedusa1oSettings;

@protocol OS_dispatch_queue;

@interface SBTouchRegionManager : NSObject <Swift>

{
    NSObject<OS_dispatch_queue> *_queue;
    SBBackBoardServicesInterface *_queue_bksInterface;
    FBSDisplayLayoutMonitor *_queue_displayLayoutMonitor;
    SBMedusa1oSettings *_medusaSettings;
    double _queue_touchRegionBuffer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (void)layoutMonitor:(id)arg1 didUpdateDisplayLayout:(id)arg2 withContext:(id)arg3;
- (id)displayLayoutMonitor;
- (id)_initWithBKSInterface:(id)arg1 displayLayoutMonitor:(id)arg2;
- (struct NSMutableSet *)_queue_calculateTouchRegionsFromSceneRects:(struct NSMutableSet *)arg1;
- (id)_queue_floatingHitTestRegionForLayoutRect:(struct CGRect)arg1;
- (struct NSMutableSet *)_queue_calculateHitTestRegionsFromSceneRects:(struct NSMutableSet *)arg1;
- (void)_queue_displayLayoutDidUpdate:(id)arg1;
- (void)setTouchRegionBuffer:(double)arg1;
- (double)touchRegionBuffer;
- (void)setDisplayLayoutMonitor:(id)arg1;

@end
