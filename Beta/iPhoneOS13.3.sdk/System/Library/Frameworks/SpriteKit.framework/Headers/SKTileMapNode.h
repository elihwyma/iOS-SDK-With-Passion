/*
 Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

#import <SpriteKit/SKNode.h>

@class MISSING_TYPE, NSDictionary, NSString, SKShader, SKTileSet, UIColor;

@interface SKTileMapNode : SKNode

{
    struct SKCTileMapNode *_skcTileMapNode;
    SKTileSet *_tileSet;
    struct CGSize _tileSize;
    MISSING_TYPE *_isoOrigin;
    MISSING_TYPE *_isoColumnVector;
    MISSING_TYPE *_isoRowVector;
    float _isoColumnWidth;
    float _isoRowHeight;
    float _isoHeightScalar;
    float _hexRadius;
    _Bool _enableAutomapping;
    NSString *_tileSetName;
}

@property (retain, nonatomic) NSString *tileSetName;
@property (nonatomic) unsigned long long numberOfColumns;
@property (nonatomic) unsigned long long numberOfRows;
@property (nonatomic) struct CGSize tileSize;
@property (nonatomic, readonly) struct CGSize mapSize;
@property (retain, nonatomic) SKTileSet *tileSet;
@property (nonatomic) double colorBlendFactor;
@property (retain, nonatomic) UIColor *color;
@property (nonatomic) long long blendMode;
@property (nonatomic) struct CGPoint anchorPoint;
@property (retain, nonatomic) SKShader *shader;
@property (copy, nonatomic) NSDictionary *attributeValues;
@property (nonatomic) unsigned int lightingBitMask;
@property (nonatomic) _Bool enableAutomapping;

+ (_Bool)supportsSecureCoding;
+ (id)debugHierarchyPropertyDescriptions;
+ (id)debugHierarchyValueForPropertyWithName:(id)arg1 onObject:(id)arg2 outOptions:(id *)arg3 outError:(id *)arg4;
+ (id)tileMapNodeWithTileSet:(id)arg1 columns:(unsigned long long)arg2 rows:(unsigned long long)arg3 tileSize:(struct CGSize)arg4;
+ (id)tileMapNodeWithTileSet:(id)arg1 columns:(unsigned long long)arg2 rows:(unsigned long long)arg3 tileSize:(struct CGSize)arg4 fillWithTileGroup:(id)arg5;
+ (id)tileMapNodeWithTileSet:(id)arg1 columns:(unsigned long long)arg2 rows:(unsigned long long)arg3 tileSize:(struct CGSize)arg4 tileGroupLayout:(id)arg5;

- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copy;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (double)alpha;
- (void)commonInit;
- (void)setAlpha:(double)arg1;
- (void)removeAllTiles;
- (_Bool)isEqualToNode:(id)arg1;
- (struct SKCNode *)_makeBackingNode;
- (void)_didMakeBackingNode;
- (id)tileDefinitionForTileID:(unsigned int)arg1;
- (void)setColumns:(unsigned long long)arg1 andRows:(long long)arg2;
- (void)calculateSize;
- (void)rebuildTileSprites;
- (_Bool)shouldUnarchiveTileSet;
- (void)setStartData:(unsigned long long)arg1 rows:(unsigned long long)arg2 tileSize:(struct CGSize)arg3 tileSet:(id)arg4;
- (void)fillWithTileGroup:(id)arg1;
- (id)initWithTileSet:(id)arg1 columns:(unsigned long long)arg2 rows:(unsigned long long)arg3 tileSize:(struct CGSize)arg4;
- (id)initWithTileSet:(id)arg1 columns:(unsigned long long)arg2 rows:(unsigned long long)arg3 tileSize:(struct CGSize)arg4 fillWithTileGroup:(id)arg5;
- (id)initWithTileSet:(id)arg1 columns:(unsigned long long)arg2 rows:(unsigned long long)arg3 tileSize:(struct CGSize)arg4 tileGroupLayout:(id)arg5;
- (void)updateTileGroupsAtX:(unsigned long long)arg1 y:(unsigned long long)arg2;
- (void)updateTileDefinitionWithoutAutomappingAtX:(unsigned long long)arg1 y:(unsigned long long)arg2;
- (unsigned int)getTileIDWithTileGroup:(id)arg1 andTileDefinition:(id)arg2;
- (id)valueForAttributeNamed:(id)arg1;
- (void)setValue:(id)arg1 forAttributeNamed:(id)arg2;
- (void)setRawTiles:(unsigned int *)arg1 rows:(unsigned long long)arg2 columns:(unsigned long long)arg3;
- (void)fillWithTileDefinition:(id)arg1;
- (id)tileDefinitionAtColumn:(unsigned long long)arg1 row:(unsigned long long)arg2;
- (id)tileGroupAtColumn:(unsigned long long)arg1 row:(unsigned long long)arg2;
- (void)setTileGroup:(id)arg1 forColumn:(unsigned long long)arg2 row:(unsigned long long)arg3;
- (void)setTileGroup:(id)arg1 andTileDefinition:(id)arg2 forColumn:(unsigned long long)arg3 row:(unsigned long long)arg4;
- (void)setTileGroupWithoutUpdate:(id)arg1 forColumn:(unsigned long long)arg2 row:(unsigned long long)arg3;
- (void)setTileGroupWithoutUpdate:(id)arg1 tileDefinition:(id)arg2 forColumn:(unsigned long long)arg3 row:(unsigned long long)arg4;
- (void)setTileGroup:(id)arg1 forTileIndicies:(id)arg2;
- (void)setTileGroup:(id)arg1 andTileDefinition:(id)arg2 forTileIndicies:(id)arg3;
- (void)validateAllTiles;
- (void)fillArrayWithTiles:(unsigned int *)arg1;
- (void)fillArray:(unsigned int *)arg1 withTilesFromColumn:(unsigned long long)arg2 row:(unsigned long long)arg3 forWidth:(unsigned long long)arg4 height:(unsigned long long)arg5;
- (void)setTilesFromArray:(unsigned int *)arg1;
- (void)setTilesFromArray:(unsigned int *)arg1 fromColumn:(unsigned long long)arg2 row:(unsigned long long)arg3 forWidth:(unsigned long long)arg4 height:(unsigned long long)arg5;
- (void)clearModifiedTileTracking;
- (void)getTileModifiedData:(long long *)arg1 outMinRowModified:(long long *)arg2 outMaxColumnModified:(long long *)arg3 outmaxRowModified:(long long *)arg4;
- (unsigned long long)tileColumnIndexFromPosition:(struct CGPoint)arg1;
- (unsigned long long)tileRowIndexFromPosition:(struct CGPoint)arg1;
- (struct CGPoint)centerOfTileAtColumn:(unsigned long long)arg1 row:(unsigned long long)arg2;
- (id)createTileStampFromColumn:(unsigned long long)arg1 row:(unsigned long long)arg2 withWidth:(unsigned long long)arg3 height:(unsigned long long)arg4 addToTileSet:(_Bool)arg5;
- (void)applyTileStamp:(id)arg1 inColumn:(long long)arg2 row:(long long)arg3;
- (void)forceRedraw;

@end
