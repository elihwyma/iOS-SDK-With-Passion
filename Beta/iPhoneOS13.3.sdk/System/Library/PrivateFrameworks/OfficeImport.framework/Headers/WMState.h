/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/CMState.h>

@class CMOutlineState, NSMutableDictionary, WDParagraph, WDText;

__attribute__((visibility("hidden")))
@interface WMState : CMState

{
    CMOutlineState *currentListState;
    CMOutlineState *outlineState;
    NSMutableDictionary *listStates;
    WDText *mLastHeader;
    WDText *mLastFooter;
    unsigned int mCurrentPage;
    unsigned long long mBlockIndex;
    unsigned long long mRunIndex;
    float mTopMargin;
    float mLeftMargin;
    float mPageHeight;
    _Bool mIsFrame;
    _Bool mIsFrameStart;
    _Bool mIsFrameEnd;
    _Bool mIsHeaderOrFooter;
    float mTotalPageHeight;
    WDParagraph *_currentParagraph;
}

@property (retain) WDParagraph *currentParagraph;

- (id)init;
- (void)dealloc;
- (void)setLeftMargin:(float)arg1;
- (void)setTopMargin:(float)arg1;
- (float)topMargin;
- (void)setCurrentPage:(unsigned int)arg1;
- (unsigned int)currentPage;
- (float)pageOffset;
- (void)setPageHeight:(float)arg1;
- (float)pageHeight;
- (float)leftMargin;
- (_Bool)isFrame;
- (_Bool)isHeaderOrFooter;
- (float)totalPageHeight;
- (void)setTotalPageHeight:(float)arg1;
- (unsigned long long)runIndex;
- (void)setRunIndex:(unsigned long long)arg1;
- (_Bool)isCurrentListDefinitionId:(int)arg1;
- (id)listStateForListDefinitionWithId:(int)arg1 settingUpStateIfNeededWithDocument:(id)arg2;
- (void)setCurrentListState:(id)arg1;
- (id)currentListState;
- (void)setBlockIndex:(unsigned long long)arg1;
- (unsigned long long)blockIndex;
- (void)setIsFrame:(_Bool)arg1;
- (void)setIsFrameStart:(_Bool)arg1;
- (void)setIsFrameEnd:(_Bool)arg1;
- (_Bool)isFrameEnd;
- (_Bool)isFrameStart;
- (void)setLastHeader:(id)arg1;
- (id)lastHeader;
- (void)setIsHeaderOrFooter:(_Bool)arg1;
- (void)setLastFooter:(id)arg1;
- (id)lastFooter;
- (void)clearCurrentListState;
- (_Bool)isCurrentListStateOverridden;
- (id)listStateForListDefinitionId:(int)arg1;
- (void)setListState:(id)arg1 forListDefinitionId:(int)arg2;
- (id)outlineState;

@end
