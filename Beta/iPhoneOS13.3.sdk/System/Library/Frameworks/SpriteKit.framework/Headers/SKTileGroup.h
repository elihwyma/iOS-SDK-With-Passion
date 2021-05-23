/*
 Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, NSString, SKTileSet;

@interface SKTileGroup : NSObject

{
    NSMutableArray *_rules;
    unsigned long long _type;
    NSString *_name;
    SKTileSet *_parentSet;
}

@property (weak, nonatomic) SKTileSet *parentSet;
@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSArray *rules;
@property (copy, nonatomic) NSString *name;

+ (_Bool)supportsSecureCoding;
+ (id)tileGroupWithRules:(id)arg1;
+ (id)tileGroupWithTileDefinition:(id)arg1;
+ (id)emptyTileGroup;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copy;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqualToNode:(id)arg1;
- (void)setRuleParentPointers;
- (id)initWithTileDefinition:(id)arg1;
- (id)initWithRules:(id)arg1;
- (unsigned long long)findTileDefinitionIndexForAdjacencyData:(unsigned long long)arg1 tileSetType:(unsigned long long)arg2;
- (id)findTileDefinitionIDsForAdjacencyData:(unsigned long long)arg1 tileSetType:(unsigned long long)arg2;

@end
