/*
 Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

#import <NotesShared/TTVersionedDocument.h>

@class ICDrawing;

@interface ICDrawingVersionedDocument : TTVersionedDocument

{
    ICDrawing *_drawing;
}

@property (retain, nonatomic) ICDrawing *drawing;

+ (unsigned int)serializationVersion;
+ (unsigned int)minimumSupportedVersion;

- (id)initWithData:(id)arg1 andReplicaID:(id)arg2;
- (void)mergeVersion:(unsigned int)arg1 fromData:(id)arg2;
- (id)serializeCurrentVersion:(unsigned int *)arg1;
- (unsigned long long)mergeWithDrawingVersionedDocument:(id)arg1;

@end
