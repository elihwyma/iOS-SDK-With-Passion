/*
 Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import <CorePDF/CPChunk.h>

@class CPParagraph, CPTextLine;

@protocol CPGraphicUser;

__attribute__((visibility("hidden")))
@interface CPGraphicObject : CPChunk

{
    unsigned int clipIndex;
    struct CGRect renderedBounds;
    _Bool isInZoneBorder;
    int zoneGraphicType;
    CPTextLine *anchoringTextLine;
    CPParagraph *anchoringParagraph;
    CPChunk<CPGraphicUser> *user;
}

@property (nonatomic) unsigned int clipIndex;
@property (retain, nonatomic) CPParagraph *anchoringParagraph;

- (id)init;
- (void)dealloc;
- (id)user;
- (void)setUser:(id)arg1;
- (_Bool)isVisible;
- (struct CGRect)renderedBounds;
- (unsigned short)unicode;
- (_Bool)isNarrow;
- (_Bool)canBeContainer;
- (_Bool)isIndivisible;
- (_Bool)isInZoneBorder;
- (void)setIsInZoneBorder:(_Bool)arg1;
- (int)zoneGraphicType;
- (void)setZoneGraphicType:(int)arg1;
- (void)setAnchoringTextLine:(id)arg1;
- (id)anchoringTextLine;

@end
