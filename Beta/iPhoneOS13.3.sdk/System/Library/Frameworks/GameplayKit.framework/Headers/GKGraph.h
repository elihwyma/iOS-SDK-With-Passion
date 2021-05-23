/*
 Image: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, NSMutableDictionary;

@interface GKGraph : NSObject

{
    NSMutableArray *_nodes;
    struct GKCGraph *_cGraph;
    NSMutableDictionary *__info;
}

@property (retain, nonatomic) NSMutableDictionary *_info;
@property (nonatomic, readonly) NSArray *nodes;

+ (_Bool)supportsSecureCoding;
+ (id)graph;
+ (id)graphWithNodes:(id)arg1;

- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copy;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)removeNodes:(id)arg1;
- (id)initWithNodes:(id)arg1;
- (struct GKCGraph *)makeCGraph;
- (struct GKCGraph *)cGraph;
- (id)nodesMut;
- (void)connectNodeToLowestCostNode:(id)arg1 bidirectional:(_Bool)arg2;
- (void)addNodes:(id)arg1;
- (id)findPathFromNode:(id)arg1 toNode:(id)arg2;

@end
