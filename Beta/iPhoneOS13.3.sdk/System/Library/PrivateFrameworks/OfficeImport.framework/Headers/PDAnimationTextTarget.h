/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/PDAnimationShapeTarget.h>

__attribute__((visibility("hidden")))
@interface PDAnimationTextTarget : PDAnimationShapeTarget

{
    int mType;
    struct _NSRange mRange;
}

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (int)type;
- (void)setType:(int)arg1;
- (struct _NSRange)range;
- (void)setRange:(struct _NSRange)arg1;

@end
