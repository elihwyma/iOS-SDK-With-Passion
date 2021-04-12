//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSArray, NSMutableOrderedSet, PKDrawing, PKStroke, UIImage;

@interface PKStrokeSelection : NSObject <NSItemProviderReading, NSItemProviderWriting>
{
    NSMutableOrderedSet *_strokes;
    PKStroke *_lassoStroke;
    UIImage *_strokeImage;
    PKDrawing *_drawing;
}

+ (id)strokeSelectionFromData:(id)arg1;
+ (id)writableTypeIdentifiersForItemProvider;
+ (id)objectWithItemProviderData:(id)arg1 typeIdentifier:(id)arg2 error:(id )arg3;
+ (id)readableTypeIdentifiersForItemProvider;
@property(readonly, nonatomic) PKDrawing *drawing; // @synthesize drawing=_drawing;
@property(copy, nonatomic) UIImage *strokeImage; // @synthesize strokeImage=_strokeImage;
@property(readonly, nonatomic) PKStroke *lassoStroke; // @synthesize lassoStroke=_lassoStroke;
@property(readonly, nonatomic) NSMutableOrderedSet *strokes; // @synthesize strokes=_strokes;
// - (void).cxx_destruct;
- (BOOL)containsBitmapData;
- (id)strokeDataForSelection;
- (id)legacyStrokeDataForSelection;
- (id)_newDrawingWithStrokes;
- (id)imageDataForSelection;
- (id)loadDataWithTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(id /* CDUnknownBlockType */)arg2;
@property(readonly, copy, nonatomic) NSArray *writableTypeIdentifiersForItemProvider;
- (CGRect)boundsWithoutLasso;
- (CGRect)bounds;
- (id)initWithStrokes:(id)arg1 lassoStroke:(id)arg2 drawing:(id)arg3;

@end

