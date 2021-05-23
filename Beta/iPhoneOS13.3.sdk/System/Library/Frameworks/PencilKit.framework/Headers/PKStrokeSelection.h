/*
 Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableOrderedSet, NSString, PKDrawing, PKStroke, UIImage;

@interface PKStrokeSelection : NSObject

{
    NSMutableOrderedSet *_strokes;
    PKStroke *_lassoStroke;
    UIImage *_strokeImage;
    PKDrawing *_drawing;
}

@property (nonatomic, readonly) NSMutableOrderedSet *strokes;
@property (nonatomic, readonly) PKStroke *lassoStroke;
@property (copy, nonatomic) UIImage *strokeImage;
@property (nonatomic, readonly) PKDrawing *drawing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSArray *writableTypeIdentifiersForItemProvider;

+ (id)objectWithItemProviderData:(id)arg1 typeIdentifier:(id)arg2 error:(id *)arg3;
+ (id)writableTypeIdentifiersForItemProvider;
+ (id)readableTypeIdentifiersForItemProvider;
+ (id)strokeSelectionFromData:(id)arg1;

- (id)loadDataWithTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(CDUnknownBlockType)arg2;
- (struct CGRect)bounds;
- (struct CGRect)boundsWithoutLasso;
- (id)initWithStrokes:(id)arg1 lassoStroke:(id)arg2 drawing:(id)arg3;
- (_Bool)containsBitmapData;
- (id)strokeDataForSelection;
- (id)legacyStrokeDataForSelection;
- (id)_newDrawingWithStrokes;
- (id)imageDataForSelection;

@end
