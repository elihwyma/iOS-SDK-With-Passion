/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@protocol OS_dispatch_group, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _PPTState : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_group> *_group;
    int _enteredCount;
    _Bool _hasRendered;
    NSMutableArray *_renderStatistics;
}

@property _Bool hasRendered;
@property (retain) NSMutableArray *renderStatistics;

- (id)init;
- (void)enterDispatchGroup;
- (void)leaveDispatchGroup;
- (void)groupNotifyOnQueue:(id)arg1 withBlock:(CDUnknownBlockType)arg2;

@end
