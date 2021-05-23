/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/PDTransitionOptions.h>

__attribute__((visibility("hidden")))
@interface PDSplitDirectionOptions : PDTransitionOptions

{
    int mOrientation;
    int mInOut;
}

- (int)orientation;
- (void)setOrientation:(int)arg1;
- (void)setInOut:(int)arg1;
- (int)inOut;

@end
