/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

#import <OfficeImport/Swift-Protocol.h>

@class EDAlignmentInfo, EDBorders, EDContentFormat, EDFill, EDFont, EDProtection, EDResources, NSString;

__attribute__((visibility("hidden")))
@interface EDStyle : NSObject <Swift>

{
    EDResources *mResources;
    unsigned long long mParentIndex;
    unsigned long long mContentFormatId;
    unsigned long long mFontIndex;
    unsigned long long mFillIndex;
    unsigned long long mAlignmentInfoIndex;
    unsigned long long mBordersIndex;
    EDProtection *mProtection;
    unsigned long long mIndex;
    _Bool mContentFormatOverridden;
    _Bool mContentFormatApplied;
    _Bool mFontOverridden;
    _Bool mFontApplied;
    _Bool mFillOverridden;
    _Bool mFillApplied;
    _Bool mAlignmentInfoOverridden;
    _Bool mAlignmentInfoApplied;
    _Bool mBordersOverridden;
    _Bool mBordersApplied;
    _Bool mProtectionOverridden;
    _Bool mProtectionApplied;
    _Bool mDoNotModify;
}

@property (getter=isContentFormatOverridden) _Bool contentFormatOverridden;
@property (getter=isContentFormatApplied) _Bool contentFormatApplied;
@property (retain) EDContentFormat *contentFormat;
@property (getter=isFontOverridden) _Bool fontOverridden;
@property (getter=isFontApplied) _Bool fontApplied;
@property (retain) EDFont *font;
@property (getter=isFillOverridden) _Bool fillOverridden;
@property (getter=isFillApplied) _Bool fillApplied;
@property (retain) EDFill *fill;
@property (getter=isAlignmentInfoOverridden) _Bool alignmentInfoOverridden;
@property (getter=isAlignmentInfoApplied) _Bool alignmentInfoApplied;
@property (retain) EDAlignmentInfo *alignmentInfo;
@property (getter=isBordersOverridden) _Bool bordersOverridden;
@property (getter=isBordersApplied) _Bool bordersApplied;
@property (retain) EDBorders *borders;
@property (getter=isProtectionOverridden) _Bool protectionOverridden;
@property (getter=isProtectionApplied) _Bool protectionApplied;
@property (retain) EDProtection *protection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)styleWithResources:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)parent;
- (void)setParent:(id)arg1;
- (unsigned long long)index;
- (void)setIndex:(unsigned long long)arg1;
- (unsigned long long)fontIndex;
- (id)initWithResources:(id)arg1;
- (void)setFontIndex:(unsigned long long)arg1;
- (unsigned long long)contentFormatId;
- (unsigned long long)fillIndex;
- (void)setContentFormatId:(unsigned long long)arg1;
- (void)setParentIndex:(unsigned long long)arg1;
- (void)setDoNotModify:(_Bool)arg1;
- (_Bool)isEquivalentToStyle:(id)arg1;
- (_Bool)isEqualToStyle:(id)arg1;
- (_Bool)isCenterAcrossAligned;
- (unsigned long long)parentIndex;
- (unsigned long long)bordersIndex;
- (void)setBordersIndex:(unsigned long long)arg1;
- (void)setFillIndex:(unsigned long long)arg1;
- (unsigned long long)alignmentInfoIndex;
- (void)setAlignmentInfoIndex:(unsigned long long)arg1;

@end
