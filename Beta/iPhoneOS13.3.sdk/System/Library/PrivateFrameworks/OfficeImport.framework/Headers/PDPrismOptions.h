/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/PDSideDirectionOptions.h>

__attribute__((visibility("hidden")))
@interface PDPrismOptions : PDSideDirectionOptions

{
    _Bool mIsContent;
    _Bool mIsInverted;
}

- (_Bool)isContent;
- (void)setIsInverted:(_Bool)arg1;
- (_Bool)isInverted;
- (void)setIsContent:(_Bool)arg1;

@end
