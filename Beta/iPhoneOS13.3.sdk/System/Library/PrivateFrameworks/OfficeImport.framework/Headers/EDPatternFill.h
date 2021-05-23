/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/EDFill.h>

@class EDColorReference;

__attribute__((visibility("hidden")))
@interface EDPatternFill : EDFill

{
    int mType;
    EDColorReference *mBackColorReference;
    EDColorReference *mForeColorReference;
}

+ (id)patternFillWithType:(int)arg1 resources:(id)arg2;
+ (id)patternFillWithType:(int)arg1 foreColor:(id)arg2 resources:(id)arg3;
+ (id)patternFillWithType:(int)arg1 foreColor:(id)arg2 backColor:(id)arg3 resources:(id)arg4;
+ (id)patternFillWithType:(int)arg1 foreColorReference:(id)arg2 backColorReference:(id)arg3 resources:(id)arg4;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEmpty;
- (int)type;
- (void)setType:(int)arg1;
- (id)initWithResources:(id)arg1;
- (id)foreColor;
- (id)backColor;
- (void)setForeColorReference:(id)arg1;
- (void)setBackColorReference:(id)arg1;
- (id)foreColorReference;
- (id)backColorReference;
- (void)setForeColor:(id)arg1;
- (void)setBackColor:(id)arg1;
- (_Bool)isEqualToPatternFill:(id)arg1;
- (id)initWithType:(int)arg1 foreColor:(id)arg2 backColor:(id)arg3 resources:(id)arg4;
- (id)initWithType:(int)arg1 foreColorReference:(id)arg2 backColorReference:(id)arg3 resources:(id)arg4;

@end
