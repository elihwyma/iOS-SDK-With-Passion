/*
 Image: /System/Library/PrivateFrameworks/GraphVisualizer.framework/GraphVisualizer
 */

#import <Foundation/NSObject.h>

@class NSMutableOrderedSet;

@interface GVNode : NSObject

{
    double x;
    double y;
    double w;
    double h;
    NSMutableOrderedSet *inNodes;
    NSMutableOrderedSet *outNodes;
    long long rank;
    long long index;
    GVNode *prev;
    GVNode *next;
    unsigned long long inPriority;
    unsigned long long outPriority;
}

@property (nonatomic) double x;
@property (nonatomic) double y;
@property (nonatomic) double w;
@property (nonatomic) double h;
@property (nonatomic) double cx;
@property (nonatomic) double cy;
@property (retain, nonatomic) NSMutableOrderedSet *inNodes;
@property (retain, nonatomic) NSMutableOrderedSet *outNodes;
@property (readonly) unsigned long long inDegree;
@property (readonly) unsigned long long outDegree;
@property (nonatomic) long long rank;
@property (nonatomic) long long index;
@property (nonatomic) GVNode *prev;
@property (nonatomic) GVNode *next;
@property (nonatomic) unsigned long long inPriority;
@property (nonatomic) unsigned long long outPriority;
@property (nonatomic) struct CGRect frame;
@property (nonatomic) struct CGPoint origin;
@property (nonatomic) struct CGPoint center;
@property (nonatomic) struct CGSize size;

- (id)init;
- (void)dealloc;
- (id)description;
- (_Bool)hasEdgeFrom:(id)arg1;
- (_Bool)hasEdgeTo:(id)arg1;
- (void)addEdgeFrom:(id)arg1;
- (void)addEdgeTo:(id)arg1;
- (void)removeEdgeFrom:(id)arg1;
- (void)removeEdgeTo:(id)arg1;
- (void)computePriority;
- (void)traversePostorder:(int)arg1 withCallback:(CDUnknownBlockType)arg2 stopper:(CDUnknownBlockType)arg3 randomize:(_Bool)arg4;
- (void)traversePreorder:(int)arg1 withCallback:(CDUnknownBlockType)arg2 randomize:(_Bool)arg3;

@end
