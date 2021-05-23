/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

#import <OfficeImport/Swift-Protocol.h>

@class EDColorReference, EDResources, NSString;

__attribute__((visibility("hidden")))
@interface EDFont : NSObject <Swift>

{
    EDResources *mResources;
    NSString *mName;
    EDColorReference *mColorReference;
    int mUnderline;
    int mScript;
    double mHeightInTwips;
    int mCharSet;
    int mFamily;
    unsigned int mWeight;
    _Bool mBold;
    _Bool mItalic;
    _Bool mShadow;
    _Bool mStrike;
    _Bool mOutline;
    _Bool mUnderlineOverridden;
    _Bool mStrikeOverridden;
    _Bool mBoldOverridden;
    _Bool mWeightOverridden;
    _Bool mItalicOverridden;
    _Bool mHeightOverridden;
    _Bool mNameOverridden;
    _Bool mDoNotModify;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)fontWithResources:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (id)name;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setName:(id)arg1;
- (int)family;
- (void)setFamily:(int)arg1;
- (double)height;
- (id)color;
- (void)setHeight:(double)arg1;
- (void)setColor:(id)arg1;
- (void)setWeight:(unsigned int)arg1;
- (unsigned int)weight;
- (void)setOutline:(_Bool)arg1;
- (void)setShadow:(_Bool)arg1;
- (_Bool)isBold;
- (int)script;
- (void)setScript:(int)arg1;
- (void)setBold:(_Bool)arg1;
- (void)setUnderline:(int)arg1;
- (int)underline;
- (id)initWithResources:(id)arg1;
- (_Bool)isBoldOverridden;
- (_Bool)isItalicOverridden;
- (_Bool)isUnderlineOverridden;
- (_Bool)isHeightOverridden;
- (_Bool)isItalic;
- (_Bool)isStrikeOverridden;
- (_Bool)isStrike;
- (void)setItalic:(_Bool)arg1;
- (int)charSet;
- (void)setStrike:(_Bool)arg1;
- (_Bool)isOutline;
- (void)setCharSet:(int)arg1;
- (void)setColorReference:(id)arg1;
- (void)setDoNotModify:(_Bool)arg1;
- (_Bool)isEqualToFont:(id)arg1;
- (_Bool)isNameOverridden;
- (_Bool)isShadow;
- (_Bool)isWeightOverridden;
- (id)colorReference;

@end
