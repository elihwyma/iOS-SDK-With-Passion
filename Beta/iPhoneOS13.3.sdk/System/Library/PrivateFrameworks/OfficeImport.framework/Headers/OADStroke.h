/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OADProperties.h>

#import <OfficeImport/Swift-Protocol.h>

@class OADColor, OADDash, OADFill, OADLineEnd, OADLineJoin;

__attribute__((visibility("hidden")))
@interface OADStroke : OADProperties <Swift>

{
    OADColor *mColor;
    OADFill *mFill;
    OADDash *mDash;
    OADLineJoin *mJoin;
    OADLineEnd *mHead;
    OADLineEnd *mTail;
    float mWidth;
    unsigned char mCap;
    unsigned char mCompoundType;
    int mPenAlignment;
    unsigned int mIsColorOverridden:1;
    unsigned int mIsWidthOverridden:1;
    unsigned int mIsCapOverridden:1;
    unsigned int mIsCompoundTypeOverridden:1;
    unsigned int mIsPenAlignmentOverridden:1;
}

@property (retain, nonatomic) OADLineEnd *head;
@property (retain, nonatomic) OADLineEnd *tail;

+ (id)defaultProperties;
+ (id)nullStroke;
+ (id)blackStroke;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setParent:(id)arg1;
- (float)width;
- (id)color;
- (void)setWidth:(float)arg1;
- (void)setColor:(id)arg1;
- (id)fill;
- (id)initWithDefaults;
- (unsigned char)compoundType;
- (void)setCompoundType:(unsigned char)arg1;
- (id)join;
- (void)setJoin:(id)arg1;
- (unsigned char)cap;
- (void)setCap:(unsigned char)arg1;
- (void)setFill:(id)arg1;
- (_Bool)isWidthOverridden;
- (_Bool)isColorOverridden;
- (_Bool)isFillOverridden;
- (_Bool)isDashOverridden;
- (id)dash;
- (_Bool)isCompoundTypeOverridden;
- (void)setPenAlignment:(int)arg1;
- (void)setDash:(id)arg1;
- (void)setStyleColor:(id)arg1;
- (_Bool)isCapOverridden;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg1;
- (_Bool)isAnythingOverridden;
- (void)removeUnnecessaryOverrides;
- (_Bool)isJoinOverridden;
- (_Bool)isPenAlignmentOverridden;
- (_Bool)isHeadOverridden;
- (_Bool)isTailOverridden;
- (int)penAlignment;

@end
