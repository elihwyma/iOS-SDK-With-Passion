/*
 Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, NSString, SKTileGroup;

@interface SKTileSet : NSObject

{
    NSMutableArray *_definitions;
    NSMutableArray *_groups;
    NSArray *_stamps;
    unsigned long long _type;
    struct CGSize _defaultTileSize;
    SKTileGroup *_defaultTileGroup;
    NSString *_name;
}

@property (nonatomic, readonly) NSArray *tileDefinitions;
@property (retain, nonatomic) NSArray *stamps;
@property (copy, nonatomic) NSArray *tileGroups;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) SKTileGroup *defaultTileGroup;
@property (nonatomic) struct CGSize defaultTileSize;

+ (_Bool)supportsSecureCoding;
+ (id)recursivePathsForResourcesOfType:(id)arg1 inDirectory:(id)arg2;
+ (id)findTileSetInBundleNamed:(id)arg1;
+ (id)tileSetWithTileGroups:(id)arg1;
+ (id)tileSetWithTileGroups:(id)arg1 tileSetType:(unsigned long long)arg2;
+ (id)tileSetNamed:(id)arg1;
+ (id)tileSetFromURL:(id)arg1;
+ (void)clearTileSetTableCache;

- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copy;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)commonInit;
- (_Bool)isEqualToNode:(id)arg1;
- (void)unobserveAllTileDefinitions;
- (void)lookForMissingDefinitionsInGroups;
- (void)updateTileDefinitionIDsInGroupRules;
- (void)setGroupParentPointers;
- (void)observeTileDefinition:(id)arg1;
- (void)removeTileDefinitionObservers:(id)arg1;
- (void)calcDefaultTileSize;
- (id)initWithTileGroups:(id)arg1;
- (id)initWithTileGroups:(id)arg1 tileSetType:(unsigned long long)arg2;
- (void)observeAllTileDefinitions;
- (id)findTileDefinitionForGroup:(id)arg1 withGroupAdjacency:(unsigned long long *)arg2;
- (id)findTileDefinitionsForGroup:(id)arg1 withGroupAdjacency:(unsigned long long *)arg2;
- (id)getCenterTileDefinitionForGroup:(id)arg1 withRequiredOutputGroupAdjacency:(unsigned long long *)arg2;

@end
