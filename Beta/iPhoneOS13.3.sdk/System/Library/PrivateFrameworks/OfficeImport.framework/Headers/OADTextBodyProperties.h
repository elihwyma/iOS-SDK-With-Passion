/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OADProperties.h>

@class OADTextBodyAutoFit, OADTextWarp;

__attribute__((visibility("hidden")))
@interface OADTextBodyProperties : OADProperties

{
    OADTextBodyAutoFit *mAutoFit;
    OADTextWarp *mTextWarp;
    float mTopInset;
    float mLeftInset;
    float mBottomInset;
    float mRightInset;
    float mRotation;
    float mColumnSpacing;
    unsigned short mColumnCount;
    unsigned short mTextBodyId;
    unsigned char mTextAnchorType;
    unsigned char mFlowType;
    unsigned char mWrapType;
    unsigned char mVerticalOverflowType;
    unsigned char mHorizontalOverflowType;
    unsigned int mRepectFirstLastParagraphSpacing:1;
    unsigned int mIsUpright:1;
    unsigned int mIsAnchorCenter:1;
    unsigned int mIsLeftToRightColumns:1;
    unsigned int mHasVerticalOverflowType:1;
    unsigned int mHasHorizontalOverflowType:1;
    unsigned int mHasTextBodyId:1;
    unsigned int mHasFlowType:1;
    unsigned int mHasWrapType:1;
    unsigned int mHasTextAnchorType:1;
    unsigned int mHasIsAnchorCenter:1;
    unsigned int mHasIsUpright:1;
    unsigned int mHasRotation:1;
    unsigned int mHasColumnCount:1;
    unsigned int mHasColumnSpacing:1;
    unsigned int mHasIsLeftToRightColumns:1;
    unsigned int mHasRepectFirstLastParagraphSpacing:1;
    unsigned int mHasTopInset:1;
    unsigned int mHasLeftInset:1;
    unsigned int mHasRightInset:1;
    unsigned int mHasBottomInset:1;
}

+ (id)defaultProperties;
+ (id)defaultEscherWordArtProperties;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (int)columnCount;
- (float)rotation;
- (void)setRotation:(float)arg1;
- (float)topInset;
- (void)setTopInset:(float)arg1;
- (float)leftInset;
- (float)bottomInset;
- (float)rightInset;
- (id)initWithDefaults;
- (void)setLeftInset:(float)arg1;
- (void)setBottomInset:(float)arg1;
- (void)setRightInset:(float)arg1;
- (void)setColumnCount:(int)arg1;
- (void)setColumnSpacing:(float)arg1;
- (float)columnSpacing;
- (_Bool)hasRotation;
- (void)setFlowType:(unsigned char)arg1;
- (unsigned char)flowType;
- (unsigned char)wrapType;
- (_Bool)hasTopInset;
- (_Bool)hasLeftInset;
- (_Bool)hasBottomInset;
- (_Bool)hasRightInset;
- (unsigned char)textAnchorType;
- (void)setIsLeftToRightColumns:(_Bool)arg1;
- (void)setRespectLastFirstLineSpacing:(_Bool)arg1;
- (void)setIsAnchorCenter:(_Bool)arg1;
- (void)setTextAnchorType:(unsigned char)arg1;
- (void)setIsUpright:(_Bool)arg1;
- (void)setAutoFit:(id)arg1;
- (void)setTextWarp:(id)arg1;
- (void)setWrapType:(unsigned char)arg1;
- (void)setVerticalOverflowType:(unsigned char)arg1;
- (void)setHorizontalOverflowType:(unsigned char)arg1;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg1;
- (void)removeUnnecessaryOverrides;
- (_Bool)hasFlowType;
- (_Bool)hasTextAnchorType;
- (_Bool)hasIsAnchorCenter;
- (_Bool)hasHorizontalOverflowType;
- (_Bool)isAnchorCenter;
- (unsigned char)horizontalOverflowType;
- (_Bool)hasRespectLastFirstLineSpacing;
- (_Bool)hasColumnCount;
- (_Bool)hasColumnSpacing;
- (_Bool)hasIsLeftToRightColumns;
- (_Bool)hasAutoFit;
- (_Bool)hasWrapType;
- (_Bool)hasVerticalOverflowType;
- (_Bool)hasTextWarp;
- (id)textWarp;
- (_Bool)hasIsUpright;
- (id)autoFit;
- (int)textBodyId;
- (void)setTextBodyId:(int)arg1;
- (unsigned char)verticalOverflowType;
- (_Bool)respectLastFirstLineSpacing;
- (_Bool)isUpright;
- (_Bool)isLeftToRightColumns;
- (_Bool)hasTextBodyId;
- (_Bool)isWarped;

@end
