/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/PDAnimationTarget.h>

@class OADDrawable;

__attribute__((visibility("hidden")))
@interface PDAnimationShapeTarget : PDAnimationTarget

{
    OADDrawable *mDrawable;
}

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)drawable;
- (void)setDrawable:(id)arg1;

@end
