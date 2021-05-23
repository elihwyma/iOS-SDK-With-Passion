/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class ESDContainer, ESDObject, ESDRoot, NSMutableArray, NSMutableDictionary, OITSUNoCopyDictionary, PBOfficeArtReaderState, PBOutlineBulletDictionary, PBSlideState, PDPresentation, PDSlideBase;

@protocol TCCancelDelegate;

__attribute__((visibility("hidden")))
@interface PBPresentationReaderState : NSObject

{
    struct PptBinaryReader *mPptBinaryReader;
    PDPresentation *mTgtPresentation;
    ESDRoot *mDocumentRoot;
    ESDContainer *mSrcSlideListHolder;
    ChVector_811a7989 *mCurrentSlideTextBlockRecordIndexRangeVector;
    unsigned int mSrcSlideId;
    NSMutableArray *mSlideIndexes;
    OITSUNoCopyDictionary *mSlideMasterToMasterStyles;
    struct __CFDictionary *mHyperlinkMap;
    PBOfficeArtReaderState *mOfficeArtState;
    NSMutableArray *mFontEntities;
    PDSlideBase *mTgtSlide;
    _Bool mHasCharacterPropertyBulletIndex;
    unsigned int mBulletIndex;
    PBOutlineBulletDictionary *mPlaceholderBulletStyles;
    PBOutlineBulletDictionary *mPlaceholderMacCharStyles;
    ESDObject *mCurrentBulletStyle;
    ESDObject *mCurrentMacCharStyle;
    ChVector_7fbb5a88 *mSrcDocMasterStyleInfoVector;
    ChVector_7fbb5a88 *mSrcCurrentMasterStyleInfoVector;
    PBSlideState *mSlideState;
    id <TCCancelDelegate> mCancel;
    _Bool mHasSlideNumberPlaceholder;
    NSMutableDictionary *mTargetShapeToSourceTextBoxContainerHolderMap;
}

@property (retain) ESDContainer *sourceSlideListHolder;
@property (retain, nonatomic) id <TCCancelDelegate> cancelDelegate;
@property _Bool hasSlideNumberPlaceholder;

- (void)dealloc;
- (_Bool)isCancelled;
- (struct PptBinaryReader *)reader;
- (id)documentRoot;
- (void)setDocumentRoot:(id)arg1;
- (id)officeArtState;
- (void)resetSlideState;
- (id)slideState;
- (id)tgtSlide;
- (id)currentMacCharStyle;
- (_Bool)hasCharacterPropertyBulletIndex;
- (void)setBulletIndex:(unsigned int)arg1;
- (id)fontEntityAtIndex:(unsigned long long)arg1;
- (id)sourceTextBoxContainerHolderForTargetShape:(id)arg1;
- (void)setSourceTextBoxContainerHolder:(id)arg1 forTargetShape:(id)arg2;
- (ChVector_811a7989 *)currentSlideTextBlockRecordIndexRangeVector;
- (void)setCurrentTextType:(int)arg1 placeholderIndex:(unsigned int)arg2;
- (id)initWithReader:(struct PptBinaryReader *)arg1 tgtPresentation:(id)arg2;
- (void)addFontEntity:(id)arg1 charSet:(int)arg2 type:(int)arg3 family:(int)arg4;
- (struct PBReaderMasterStyleInfo *)docSourceMasterStyleInfoOfType:(int)arg1;
- (id)tgtPresentation;
- (id)masterStyles:(id)arg1;
- (void)setCurrentSourceMasterStyleInfoVector:(ChVector_7fbb5a88 *)arg1;
- (struct PBReaderMasterStyleInfo *)currentSourceMasterStyleInfoOfType:(int)arg1;
- (void)setSourceSlideId:(unsigned int)arg1;
- (void)setCurrentBulletStyle:(id)arg1 macCharStyle:(id)arg2;
- (unsigned long long)numberOfSlideIndexes;
- (void)addSlideIndex:(unsigned long long)arg1;
- (unsigned long long)getSlideIndexAt:(unsigned long long)arg1;
- (id)slideIndexesRef;
- (unsigned long long)fontEntityCount;
- (void)setTgtSlide:(id)arg1;
- (void)setHasCharacterPropertyBulletIndex:(_Bool)arg1;
- (unsigned int)bulletIndex;
- (void)setPlaceholderBulletStyles:(id)arg1;
- (void)setPlaceholderMacCharStyles:(id)arg1;
- (id)currentBulletStyle;
- (void)setMasterStyles:(id)arg1 slideMaster:(id)arg2;
- (_Bool)hasCurrentSourceMasterStyleInfoVector;
- (id)hyperlinkInfoWithId:(unsigned int)arg1 createIfAbsent:(_Bool)arg2;

@end
