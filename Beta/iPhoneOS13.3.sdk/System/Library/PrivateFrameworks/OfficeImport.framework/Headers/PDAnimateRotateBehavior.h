/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/PDAnimateBehavior.h>

__attribute__((visibility("hidden")))
@interface PDAnimateRotateBehavior : PDAnimateBehavior

{
    double mTo;
    double mFrom;
    double mBy;
    _Bool mHasTo;
    _Bool mHasFrom;
    _Bool mHasBy;
}

- (id)init;
- (double)to;
- (double)from;
- (void)setFrom:(double)arg1;
- (void)setTo:(double)arg1;
- (_Bool)hasFrom;
- (_Bool)hasTo;
- (double)by;
- (void)setBy:(double)arg1;
- (_Bool)hasBy;

@end
