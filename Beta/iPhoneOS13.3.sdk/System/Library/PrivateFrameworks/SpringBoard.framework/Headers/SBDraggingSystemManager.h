/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSHashTable, NSMapTable, NSString;

@interface SBDraggingSystemManager : NSObject

{
    NSHashTable *_observers;
    NSMapTable *_commandeerReasons;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;

- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (id)touchRoutingPolicyForBeginningDragSessionWithInfo:(id)arg1;
- (void)dragSessionDidBegin:(id)arg1;
- (void)dragSessionDidEnd:(id)arg1;
- (void)setCommandeered:(_Bool)arg1 forDraggingSystemSession:(id)arg2 forReason:(id)arg3;
- (void)setCommandeered:(_Bool)arg1 forDropSession:(id)arg2 forReason:(id)arg3;

@end
