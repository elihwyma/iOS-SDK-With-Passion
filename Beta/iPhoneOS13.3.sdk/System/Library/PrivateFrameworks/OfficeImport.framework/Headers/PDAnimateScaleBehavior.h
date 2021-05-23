/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/PDAnimateBehavior.h>

__attribute__((visibility("hidden")))
@interface PDAnimateScaleBehavior : PDAnimateBehavior

{
    struct CGPoint mTo;
    struct CGPoint mFrom;
    struct CGPoint mBy;
    _Bool mHasTo;
    _Bool mHasFrom;
    _Bool mHasBy;
}

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (struct CGPoint)to;
- (struct CGPoint)from;
- (void)setFrom:(struct CGPoint)arg1;
- (void)setTo:(struct CGPoint)arg1;
- (_Bool)hasFrom;
- (_Bool)hasTo;
- (struct CGPoint)by;
- (void)setBy:(struct CGPoint)arg1;
- (_Bool)hasBy;

@end
