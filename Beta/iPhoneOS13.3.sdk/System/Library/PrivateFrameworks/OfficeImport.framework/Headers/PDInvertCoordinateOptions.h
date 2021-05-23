/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/PDTransitionOptions.h>

__attribute__((visibility("hidden")))
@interface PDInvertCoordinateOptions : PDTransitionOptions

{
    _Bool mIsInvX;
    _Bool mIsInvY;
}

- (_Bool)isInvX;
- (void)setIsInvX:(_Bool)arg1;
- (_Bool)isInvY;
- (void)setIsInvY:(_Bool)arg1;

@end
