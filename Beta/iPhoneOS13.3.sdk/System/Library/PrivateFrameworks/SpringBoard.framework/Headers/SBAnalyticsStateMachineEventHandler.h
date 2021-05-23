/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString;

@interface SBAnalyticsStateMachineEventHandler : NSObject

{
    unsigned long long _currentState;
    NSMutableArray *_edges;
}

@property (nonatomic, readonly) unsigned long long currentState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (_Bool)handleEvent:(unsigned long long)arg1 withContext:(id)arg2;
- (void)addEdge:(id)arg1;

@end
