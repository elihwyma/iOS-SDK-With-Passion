/*
 Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, NSString, SKTileGroup;

@interface SKTileGroupRule : NSObject

{
    NSMutableArray *_tileDefinitions;
    NSMutableArray *_tileDefinitionIDs;
    unsigned char _adjacency;
    NSString *_name;
    SKTileGroup *_parentGroup;
}

@property (nonatomic, readonly) NSArray *tileDefinitionIDs;
@property (weak, nonatomic) SKTileGroup *parentGroup;
@property (nonatomic) unsigned long long adjacency;
@property (copy, nonatomic) NSArray *tileDefinitions;
@property (copy, nonatomic) NSString *name;

+ (_Bool)supportsSecureCoding;
+ (id)tileGroupRuleWithAdjacency:(unsigned long long)arg1 tileDefinitions:(id)arg2;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copy;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqualToNode:(id)arg1;
- (void)setTileDefinitionParentPointers;
- (void)setTileDefinitionIDs:(id)arg1;
- (id)initWithAdjacency:(unsigned long long)arg1 tileDefinitions:(id)arg2;
- (void)calcTileDefinitionIDsWithTileSet:(id)arg1;
- (void)setTileDefinitionsFromIDsWithTileSet:(id)arg1;

@end
