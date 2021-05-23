/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSArray, NSSet, SXTextSource, SXTextTangierContainerInfo, SXTextTangierDocumentRoot, TSDLayoutController;

@interface SXTextLayouter : NSObject

{
    SXTextSource *_textSource;
    NSSet *_exclusionPaths;
    SXTextTangierDocumentRoot *_documentRoot;
    TSDLayoutController *_layoutController;
    SXTextTangierContainerInfo *_textInfo;
}

@property (retain, nonatomic) SXTextTangierDocumentRoot *documentRoot;
@property (retain, nonatomic) SXTextSource *textSource;
@property (retain, nonatomic) NSSet *exclusionPaths;
@property (retain, nonatomic) TSDLayoutController *layoutController;
@property (retain, nonatomic) SXTextTangierContainerInfo *textInfo;
@property (nonatomic, readonly) NSArray *paragraphRanges;

- (id)init;
- (void)invalidate;
- (void)reset;
- (struct CGRect)typographicBounds;
- (struct CGSize)boundingSize;
- (id)textLayout;
- (void)removeAllExclusionPaths;
- (void)addExclusionPath:(id)arg1;
- (double)verticalLocationOfCharacterAtIndex:(unsigned long long)arg1;
- (id)wpStorage;
- (id)wpLayout;
- (id)initWithTextSource:(id)arg1 andDocumentRoot:(id)arg2;
- (double)calculateHeightForWidth:(double)arg1;
- (void)createTextInfoIfNeeded;
- (void)assignExclusionPaths;
- (struct _NSRange)validAnchorRangeForRange:(struct _NSRange)arg1;
- (id)exclusionPathIndexes;
- (double)baselineForLastLine;
- (id)firstColumn;

@end
