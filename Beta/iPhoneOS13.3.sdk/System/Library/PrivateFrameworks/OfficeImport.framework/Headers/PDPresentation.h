/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OCDDocument.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface PDPresentation : OCDDocument

{
    NSMutableArray *mSlideMasters;
    NSMutableArray *mNotesMasters;
    NSMutableArray *mSlides;
    NSMutableArray *mBulletBlips;
    struct CGSize mSlideSize;
    struct CGSize mNotesSize;
    _Bool mIsAutoPlay;
    _Bool mIsCommentsVisible;
    _Bool mIsLooping;
    _Bool mIsKiosk;
    NSMutableArray *mCommentAuthors;
}

- (id)init;
- (id)description;
- (_Bool)isLooping;
- (struct CGSize)slideSize;
- (void)removeUnnecessaryOverrides;
- (void)setUpPropertyHierarchyPreservingEffectiveValues;
- (id)bulletBlips;
- (unsigned int)bulletBlipCount;
- (void)setSlideSize:(struct CGSize)arg1;
- (void)setNotesSize:(struct CGSize)arg1;
- (void)setIsCommentsVisible:(_Bool)arg1;
- (void)setIsLooping:(_Bool)arg1;
- (void)setIsKiosk:(_Bool)arg1;
- (void)addSlideMaster:(id)arg1;
- (unsigned long long)commentAuthorCount;
- (void)addCommentAuthor:(id)arg1;
- (void)cacheGraphicStylesForSlideBase:(id)arg1;
- (void)addSlide:(id)arg1;
- (void)addNotesMaster:(id)arg1;
- (void)setIsAutoPlay:(_Bool)arg1;
- (id)notesMasterAtIndex:(unsigned long long)arg1;
- (id)commentAuthorAtIndex:(unsigned long long)arg1;
- (unsigned long long)slideCount;
- (id)slideAtIndex:(unsigned long long)arg1;
- (unsigned long long)slideMasterCount;
- (id)slideMasterAtIndex:(unsigned long long)arg1;
- (unsigned long long)notesMasterCount;
- (unsigned long long)indexOfSlide:(id)arg1;
- (id)bulletBlipAtIndex:(int)arg1;
- (unsigned int)addBulletBlip:(id)arg1;
- (struct CGSize)notesSize;
- (_Bool)isAutoPlay;
- (_Bool)isCommentsVisible;
- (_Bool)isKiosk;
- (void)flushUnusedMastersAndLayouts;
- (void)ensureDefaultLayoutsForMasters;
- (void)cacheGraphicStyleForDrawable:(id)arg1 colorContext:(id)arg2;

@end
