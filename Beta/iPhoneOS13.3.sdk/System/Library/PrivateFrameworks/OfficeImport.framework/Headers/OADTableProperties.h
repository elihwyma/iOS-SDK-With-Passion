/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OADDrawableProperties.h>

@class NSArray, NSString, OADTableStyle;

__attribute__((visibility("hidden")))
@interface OADTableProperties : OADDrawableProperties

{
    OADTableStyle *mStyle;
    _Bool mRightToLeft;
    _Bool mFirstRow;
    _Bool mFirstColumn;
    _Bool mLastRow;
    _Bool mLastColumn;
    _Bool mBandRow;
    _Bool mBandColumn;
    NSArray *mEffects;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)defaultProperties;

- (id)style;
- (void)setStyle:(id)arg1;
- (id)initWithDefaults;
- (_Bool)rightToLeft;
- (_Bool)hasEffects;
- (_Bool)firstColumn;
- (id)effects;
- (void)setEffects:(id)arg1;
- (_Bool)lastColumn;
- (_Bool)firstRow;
- (_Bool)lastRow;
- (void)setLastColumn:(_Bool)arg1;
- (void)setFirstColumn:(_Bool)arg1;
- (_Bool)bandRow;
- (void)setFirstRow:(_Bool)arg1;
- (void)setLastRow:(_Bool)arg1;
- (void)setBandColumn:(_Bool)arg1;
- (void)setBandRow:(_Bool)arg1;
- (void)setRightToLeft:(_Bool)arg1;
- (_Bool)bandColumn;
- (_Bool)hasBandsNormalToDir:(int)arg1;
- (_Bool)hasVectorNormalToDir:(int)arg1 atExtremePos:(int)arg2;

@end
