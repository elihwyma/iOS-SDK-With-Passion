/*
 Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

#import <Foundation/NSObject.h>

@class ICDrawingCommandData;

@interface ICDrawingCommand : NSObject

{
    _Bool _hidden;
    ICDrawingCommandData *_data;
    struct TopoID _timestamp;
}

@property (nonatomic, readonly) ICDrawingCommandData *data;
@property (nonatomic, readonly) _Bool hidden;
@property (nonatomic, readonly) struct TopoID timestamp;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id).cxx_construct;
- (id)initWithCommand:(id)arg1 hidden:(_Bool)arg2 timestamp:(struct TopoID)arg3;
- (id)initWithArchive:(const struct Command *)arg1 version:(unsigned int)arg2 sortedUUIDs:(id)arg3;
- (unsigned int)saveToArchive:(struct Command *)arg1 sortedUUIDs:(id)arg2 withPathData:(_Bool)arg3;
- (_Bool)isEqualDrawingCommand:(id)arg1;

@end
