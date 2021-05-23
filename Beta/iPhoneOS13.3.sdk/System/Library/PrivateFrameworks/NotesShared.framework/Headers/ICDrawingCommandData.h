/*
 Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

#import <Foundation/NSObject.h>

@interface ICDrawingCommandData : NSObject

{
    struct CGRect _cachedBounds;
    vector_352d2fdf _points;
    _Bool _isClipped;
    unsigned int _type;
    struct CGColor *_color;
    struct CGPoint _clipOrigin;
    struct CGPoint _clipNormal;
    CDStruct_30364a2d _parameters;
    struct ICDrawingCommandID _commandID;
    CDStruct_4a3d0796 _baseValues;
}

@property (nonatomic) unsigned int type;
@property (retain, nonatomic) struct CGColor *color;
@property (nonatomic) CDStruct_4a3d0796 baseValues;
@property (nonatomic) CDStruct_30364a2d parameters;
@property (nonatomic, readonly) unsigned int randomSeed;
@property _Bool isClipped;
@property (nonatomic) struct CGPoint clipOrigin;
@property (nonatomic) struct CGPoint clipNormal;
@property (nonatomic, readonly) struct CGRect bounds;
@property (nonatomic) struct ICDrawingCommandID commandID;
@property (nonatomic, readonly) vector_352d2fdf *points;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id).cxx_construct;
- (double)renderCost;
- (void)invalidateBounds;
- (CDStruct_4a3d0796)readPointFromArchive:(const struct Point *)arg1 deltaFrom:(const CDStruct_4a3d0796 *)arg2;
- (CDStruct_30364a2d)version1Parameters;
- (unsigned int)savePoint:(const CDStruct_4a3d0796 *)arg1 deltaFrom:(const CDStruct_4a3d0796 *)arg2 toArchive:(struct Point *)arg3;
- (id)initWithArchive:(const struct Command *)arg1 version:(unsigned int)arg2 sortedUUIDs:(id)arg3;
- (unsigned int)saveToArchive:(struct Command *)arg1 sortedUUIDs:(id)arg2 withPathData:(_Bool)arg3 isHidden:(_Bool)arg4;
- (_Bool)isEqualDrawingCommandData:(id)arg1;

@end
