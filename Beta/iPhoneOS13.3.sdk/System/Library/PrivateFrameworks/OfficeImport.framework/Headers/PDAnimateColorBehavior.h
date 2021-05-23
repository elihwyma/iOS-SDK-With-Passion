/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/PDAnimateBehavior.h>

@class OADColor;

__attribute__((visibility("hidden")))
@interface PDAnimateColorBehavior : PDAnimateBehavior

{
    _Bool mHasBy;
    double mBy[3];
    _Bool mHasFrom;
    OADColor *mFrom;
    _Bool mHasTo;
    OADColor *mTo;
    _Bool mHasColorSpace;
    int mColorSpace;
    _Bool mHasColorDirection;
    int mDirection;
}

- (int)colorSpace;
- (void)setColorSpace:(int)arg1;
- (id)to;
- (int)direction;
- (void)setDirection:(int)arg1;
- (id)from;
- (void)setFrom:(id)arg1;
- (void)setTo:(id)arg1;
- (_Bool)hasFrom;
- (_Bool)hasTo;
- (double (*)[3])by;
- (void)setBy:(double [3])arg1;
- (_Bool)hasBy;
- (_Bool)hasColorSpace;
- (_Bool)hasColorDirection;

@end
