/*
 Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

#import <PencilKit/PKVersionedDocument.h>

@class PKDrawing;

@interface PKDrawingVersionedDocument : PKVersionedDocument

{
    _Bool _loadNonInkingStrokes;
    PKDrawing *_drawing;
}

@property (retain, nonatomic) PKDrawing *drawing;
@property (nonatomic) _Bool loadNonInkingStrokes;

+ (unsigned int)serializationVersion;
+ (unsigned int)minimumSupportedVersion;

- (void)mergeVersion:(unsigned int)arg1 fromData:(id)arg2;
- (id)serializeCurrentVersion:(unsigned int *)arg1;
- (id)initWithDrawing:(id)arg1;
- (_Bool)loadUnzippedData:(id)arg1;
- (unsigned long long)mergeWithDrawingVersionedDocument:(id)arg1;

@end
