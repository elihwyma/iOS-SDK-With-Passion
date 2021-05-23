/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/PDAnimationShapeTarget.h>

__attribute__((visibility("hidden")))
@interface PDAnimationOleChartTarget : PDAnimationShapeTarget

{
    int mLevel;
    int mChartSubElementType;
}

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (int)level;
- (void)setLevel:(int)arg1;
- (void)setChartSubElementType:(int)arg1;
- (int)chartSubElementType;

@end
