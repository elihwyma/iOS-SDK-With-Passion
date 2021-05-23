/*
 Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

#import <Foundation/NSObject.h>

@class NSDate, NSMutableOrderedSet, NSOrderedSet, NSUUID, TTVectorMultiTimestamp;

@interface ICDrawing : NSObject

{
    NSMutableOrderedSet *_commands;
    NSMutableOrderedSet *_visibleCommands;
    long long _orientation;
    struct CGRect _unrotatedBoundsInCommandSpace;
    struct CGRect _commandBounds;
    NSUUID *_replicaUUID;
    TTVectorMultiTimestamp *_timestamp;
    NSDate *_orientationTimestamp;
    struct CGSize _unrotatedSize;
}

@property (retain, nonatomic) TTVectorMultiTimestamp *timestamp;
@property (retain, nonatomic) NSDate *orientationTimestamp;
@property (nonatomic, readonly) NSUUID *replicaUUID;
@property (nonatomic, readonly) NSOrderedSet *commands;
@property (nonatomic, readonly) NSOrderedSet *visibleCommands;
@property (nonatomic) long long orientation;
@property (nonatomic) struct CGSize unrotatedSize;
@property (nonatomic, readonly) long long imageOrientation;
@property (nonatomic, readonly) _Bool canChangeTransientOrientation;
@property (nonatomic, readonly) struct CGRect bounds;
@property (nonatomic) struct CGRect unrotatedBoundsInCommandSpace;
@property (nonatomic, readonly) struct CGRect fullBounds;

+ (struct CGSize)defaultSize;
+ (struct CGSize)defaultPixelSize;
+ (void)sortCommands:(id)arg1;
+ (struct CGSize)fullSize:(struct CGSize)arg1 forOrientation:(long long)arg2;
+ (struct CGAffineTransform)orientationTransform:(long long)arg1 size:(struct CGSize)arg2;
+ (struct CGAffineTransform)defaultSizeOrientationTransform:(long long)arg1;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithReplicaID:(id)arg1;
- (id)initWithData:(id)arg1 andReplicaID:(id)arg2;
- (unsigned long long)mergeWithDrawing:(id)arg1;
- (id)initWithDrawing:(id)arg1;
- (unsigned int)saveToArchive:(struct Drawing *)arg1 withPathData:(_Bool)arg2;
- (struct CGAffineTransform)orientationTransform;
- (struct CGSize)fullSize;
- (id)initWithData:(id)arg1 version:(unsigned int)arg2 andReplicaID:(id)arg3;
- (id)serializeWithPathData:(_Bool)arg1 toVersion:(unsigned int *)arg2;
- (struct CGRect)commandBounds;
- (struct CGRect)calculateCommandBounds;
- (void)setCommandIDForInsertion:(id)arg1;
- (id)visibleCommandForInsertingCommand:(id)arg1;
- (void)addNewCommand:(id)arg1;
- (struct ICDrawingCommandID)commandIDForNewCommand;
- (void)invalidateBounds;
- (void)sortCommands;
- (id)initWithCommands:(id)arg1 fromDrawing:(id)arg2;
- (id)mutableCommands;
- (void)takeOrientationFrom:(id)arg1;
- (_Bool)setTransientOrientation:(long long)arg1;
- (id)insertNewTestCommand;
- (id)setCommand:(id)arg1 hidden:(_Bool)arg2;
- (id)initWithArchive:(const struct Drawing *)arg1 version:(unsigned int)arg2 andReplicaID:(id)arg3;
- (id)serializeWithPathData:(_Bool)arg1;

@end
