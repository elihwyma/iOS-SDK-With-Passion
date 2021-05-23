/*
 Image: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

#import <Foundation/NSObject.h>

@class FBSDisplayLayout, FBSDisplayLayoutMonitor, FBSDisplayLayoutTransitionContext, NSString;

@protocol OS_dispatch_queue;

@interface SBScreenTimeTrackingController : NSObject

{
    FBSDisplayLayoutMonitor *_layoutMonitor;
    NSObject<OS_dispatch_queue> *_queue;
    _Bool _queue_isScreenOn;
    _Bool _queue_isPhoneOrFaceTimeActive;
    unsigned long long _queue_thisCategoryStartTime;
    double _queue_lastCategoryChangeTime;
    int _queue_activeContext;
    int _queue_activeCategory;
    FBSDisplayLayout *_queue_lastLayout;
    FBSDisplayLayoutTransitionContext *_queue_lastLayoutTransitionContext;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)layoutMonitor:(id)arg1 didUpdateDisplayLayout:(id)arg2 withContext:(id)arg3;
- (void)_queue_handleNewLayout:(id)arg1 withContext:(id)arg2;
- (void)_queue_setPhoneOrFaceTimeActive:(_Bool)arg1;
- (void)_queue_setScreenOn:(_Bool)arg1 withContext:(id)arg2;
- (void)_queue_setActiveCategory:(int)arg1 context:(int)arg2;
- (id)_nameForContext:(int)arg1;

@end
