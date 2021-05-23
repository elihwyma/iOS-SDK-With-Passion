/*
 Image: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

@interface CCUIStatusUpdateQueue : NSObject

{
    NSMutableArray *_queuedIdentifiers;
    NSMutableDictionary *_latestUpdateByIdentifier;
}

- (id)init;
- (void)removeAllStatusUpdates;
- (void)enqueueStatusUpdate:(id)arg1 forIdentifier:(id)arg2;
- (id)dequeueNextStatusUpdate;

@end
