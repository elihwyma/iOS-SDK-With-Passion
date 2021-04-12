//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ESDContainer, ESDObject, ESDRoot, NSMutableArray, NSMutableDictionary, OITSUNoCopyDictionary, PBOfficeArtReaderState, PBOutlineBulletDictionary, PBSlideState, PDPresentation, PDSlideBase;
@protocol TCCancelDelegate;

__attribute__((visibility("hidden")))
@interface PBPresentationReaderState : NSObject
{
    struct PptBinaryReader mPptBinaryReader;
    PDPresentation *mTgtPresentation;
    ESDRoot *mDocumentRoot;
    ESDContainer *mSrcSlideListHolder;
    ChVector_811a7989 mCurrentSlideTextBlockRecordIndexRangeVector;
    unsigned int mSrcSlideId;
    NSMutableArray *mSlideIndexes;
    OITSUNoCopyDictionary *mSlideMasterToMasterStyles;
    struct __CFDictionary mHyperlinkMap;
    PBOfficeArtReaderState *mOfficeArtState;
    NSMutableArray *mFontEntities;
    PDSlideBase *mTgtSlide;
    BOOL mHasCharacterPropertyBulletIndex;
    unsigned int mBulletIndex;
    PBOutlineBulletDictionary *mPlaceholderBulletStyles;
    PBOutlineBulletDictionary *mPlaceholderMacCharStyles;
    ESDObject *mCurrentBulletStyle;
    ESDObject *mCurrentMacCharStyle;
    ChVector_7fbb5a88 mSrcDocMasterStyleInfoVector;
    ChVector_7fbb5a88 mSrcCurrentMasterStyleInfoVector;
    PBSlideState *mSlideState;
    id <TCCancelDelegate> mCancel;
    BOOL mHasSlideNumberPlaceholder;
    NSMutableDictionary *mTargetShapeToSourceTextBoxContainerHolderMap;
}

@property BOOL hasSlideNumberPlaceholder; // @synthesize hasSlideNumberPlaceholder=mHasSlideNumberPlaceholder;
@property(retain, nonatomic) id <TCCancelDelegate> cancelDelegate; // @synthesize cancelDelegate=mCancel;
@property(retain) ESDContainer *sourceSlideListHolder; // @synthesize sourceSlideListHolder=mSrcSlideListHolder;
// - (void).cxx_destruct;
- (void)setSourceTextBoxContainerHolder:(id)arg1 forTargetShape:(id)arg2;
- (id)sourceTextBoxContainerHolderForTargetShape:(id)arg1;
- (id)hyperlinkInfoWithId:(unsigned int)arg1 createIfAbsent:(BOOL)arg2;
- (BOOL)isCancelled;
- (void)setSourceSlideId:(unsigned int)arg1;
- (ChVector_811a7989 )currentSlideTextBlockRecordIndexRangeVector;
- (struct PBReaderMasterStyleInfo )currentSourceMasterStyleInfoOfType:(int)arg1;
- (struct PBReaderMasterStyleInfo )docSourceMasterStyleInfoOfType:(int)arg1;
- (void)setCurrentSourceMasterStyleInfoVector:(ChVector_7fbb5a88 )arg1;
- (BOOL)hasCurrentSourceMasterStyleInfoVector;
- (void)resetSlideState;
- (id)slideState;
- (id)masterStyles:(id)arg1;
- (void)setMasterStyles:(id)arg1 slideMaster:(id)arg2;
- (void)setCurrentBulletStyle:(id)arg1 macCharStyle:(id)arg2;
- (void)setCurrentTextType:(int)arg1 placeholderIndex:(unsigned int)arg2;
- (id)currentMacCharStyle;
- (id)currentBulletStyle;
- (void)setPlaceholderMacCharStyles:(id)arg1;
- (void)setPlaceholderBulletStyles:(id)arg1;
- (void)setBulletIndex:(unsigned int)arg1;
- (unsigned int)bulletIndex;
- (void)setHasCharacterPropertyBulletIndex:(BOOL)arg1;
- (BOOL)hasCharacterPropertyBulletIndex;
- (void)setTgtSlide:(id)arg1;
- (id)tgtSlide;
- (id)fontEntityAtIndex:(NSUInteger)arg1;
- (void)addFontEntity:(id)arg1 charSet:(int)arg2 type:(int)arg3 family:(int)arg4;
- (NSUInteger)fontEntityCount;
- (id)officeArtState;
- (id)slideIndexesRef;
- (NSUInteger)getSlideIndexAt:(NSUInteger)arg1;
- (void)addSlideIndex:(NSUInteger)arg1;
- (NSUInteger)numberOfSlideIndexes;
- (id)tgtPresentation;
- (void)setDocumentRoot:(id)arg1;
- (id)documentRoot;
- (struct PptBinaryReader )reader;
- (void)dealloc;
- (id)initWithReader:(struct PptBinaryReader )arg1 tgtPresentation:(id)arg2;

@end

