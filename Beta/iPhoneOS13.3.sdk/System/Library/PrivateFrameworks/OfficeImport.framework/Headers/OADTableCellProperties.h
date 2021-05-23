/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class OADFill, OADStroke, OADTableCell3DProperties;

__attribute__((visibility("hidden")))
@interface OADTableCellProperties : NSObject

{
    OADStroke *mLeftStroke;
    OADStroke *mRightStroke;
    OADStroke *mTopStroke;
    OADStroke *mBottomStroke;
    OADStroke *mTopLeftToBottomRightStroke;
    OADStroke *mBottomLeftToTopRightStroke;
    OADTableCell3DProperties *mThreeDProperties;
    OADFill *mFill;
    float mLeftMargin;
    _Bool mIsLeftMarginOverridden;
    float mRightMargin;
    _Bool mIsRightMarginOverridden;
    float mTopMargin;
    _Bool mIsTopMarginOverridden;
    float mBottomMargin;
    _Bool mIsBottomMarginOverridden;
    unsigned char mTextFlow;
    _Bool mIsTextFlowOverridden;
    unsigned char mTextAnchor;
    _Bool mIsTextAnchorOverridden;
    _Bool mTextAnchorCenter;
    _Bool mIsTextAnchorCenterOverridden;
    unsigned char mTextHorizontalOverflow;
    _Bool mIsTextHorizontalOverflowOverridden;
}

- (id)description;
- (void)setLeftMargin:(float)arg1;
- (void)setRightMargin:(float)arg1;
- (void)setTopMargin:(float)arg1;
- (void)setBottomMargin:(float)arg1;
- (void)setTextFlow:(unsigned char)arg1;
- (unsigned char)textFlow;
- (float)topMargin;
- (id)fill;
- (float)rightMargin;
- (float)bottomMargin;
- (float)leftMargin;
- (void)setFill:(id)arg1;
- (_Bool)isLeftMarginOverridden;
- (_Bool)isRightMarginOverridden;
- (_Bool)isTopMarginOverridden;
- (_Bool)isBottomMarginOverridden;
- (unsigned char)textAnchor;
- (id)topStroke;
- (id)bottomStroke;
- (id)leftStroke;
- (id)rightStroke;
- (_Bool)isTextAnchorOverridden;
- (void)setLeftStroke:(id)arg1;
- (void)setRightStroke:(id)arg1;
- (void)setTopStroke:(id)arg1;
- (void)setBottomStroke:(id)arg1;
- (void)setTopLeftToBottomRightStroke:(id)arg1;
- (void)setBottomLeftToTopRightStroke:(id)arg1;
- (void)setTextAnchor:(unsigned char)arg1;
- (void)setTextAnchorCenter:(_Bool)arg1;
- (void)setTextHorizontalOverflow:(unsigned char)arg1;
- (id)topLeftToBottomRightStroke;
- (id)bottomLeftToTopRightStroke;
- (id)stroke:(int)arg1;
- (void)setStrokeOfType:(int)arg1 toValue:(id)arg2;
- (id)strokeNormalToDir:(int)arg1 bound:(int)arg2;
- (id)threeDProperties;
- (void)setThreeDProperties:(id)arg1;
- (_Bool)isTextFlowOverridden;
- (_Bool)textAnchorCenter;
- (_Bool)isTextAnchorCenterOverridden;
- (unsigned char)textHorizontalOverflow;
- (_Bool)isTextHorizontalOverflowOverridden;

@end
