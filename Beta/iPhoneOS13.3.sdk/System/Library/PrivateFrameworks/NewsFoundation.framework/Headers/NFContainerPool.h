/*
 Image: /System/Library/PrivateFrameworks/NewsFoundation.framework/NewsFoundation
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

@interface NFContainerPool : NSObject

{
    _Bool _objectGraphDrainingEnabled;
    struct NSMutableDictionary *_singletons;
    struct NSMutableDictionary *_graph;
    unsigned long long _depth;
    unsigned long long _drainDepth;
    NSMutableArray *_onDrainBlocks;
    NSMutableArray *_onDrainCopyPoolObjectGraphBlocks;
}

@property (retain, nonatomic) NSMutableDictionary *singletons;
@property (retain, nonatomic) NSMutableDictionary *graph;
@property (nonatomic) unsigned long long depth;
@property (nonatomic) unsigned long long drainDepth;
@property (nonatomic, getter=isObjectGraphDrainingEnabled) _Bool objectGraphDrainingEnabled;
@property (retain, nonatomic) NSMutableArray *onDrainBlocks;
@property (retain, nonatomic) NSMutableArray *onDrainCopyPoolObjectGraphBlocks;
@property (nonatomic, readonly, getter=isPoolPreparedForLockingGraph) _Bool poolPreparedForLockingGraph;

- (id)init;
- (void)drain;
- (void)onDrainCopyPoolObjectGraph:(CDUnknownBlockType)arg1;
- (id)copyWithObjectGraphDrainingDisabled;
- (void)linkDepth:(CDUnknownBlockType)arg1;
- (void)onDrain:(CDUnknownBlockType)arg1;
- (id)enter:(CDUnknownBlockType)arg1;

@end
