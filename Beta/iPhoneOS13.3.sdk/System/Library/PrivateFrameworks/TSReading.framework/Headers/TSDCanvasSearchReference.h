/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString, TSDDrawableInfo, TSKDocumentRoot;

@protocol TSDCanvasSelection, TSKAnnotation;

@interface TSDCanvasSearchReference : NSObject

{
    id <TSDCanvasSelection> mCanvasSelection;
    TSDDrawableInfo *mDrawableInfo;
    TSKDocumentRoot *mDocumentRoot;
    _Bool mAutohideHighlight;
    _Bool mPulseHighlight;
    NSArray *mFindHighlights;
    id <TSKAnnotation> mAnnotation;
    struct CGPoint mSearchReferencePoint;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) struct CGPoint searchReferencePoint;
@property (retain, nonatomic) NSArray *findHighlights;
@property (nonatomic) _Bool pulseHighlight;
@property (nonatomic) _Bool autohideHighlight;
@property (retain, nonatomic) id <TSKAnnotation> annotation;

+ (id)searchReferenceWithDrawableInfo:(id)arg1;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)model;
- (id)selection;
- (id)initWithDrawableInfo:(id)arg1;
- (id)drawableInfo;
- (id)commandForReplacingWithString:(id)arg1 options:(unsigned long long)arg2;
- (id)searchReferenceForReplacingWithString:(id)arg1 options:(unsigned long long)arg2 authorCreatedWithCommand:(id *)arg3;
- (id)searchReferenceStart;
- (id)searchReferenceEnd;
- (_Bool)isReplaceable;

@end
