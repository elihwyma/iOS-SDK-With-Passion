/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/ODILinear.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface ODIImageLinear : ODILinear

{
    NSString *mImagePresentationName;
}

- (id)initWithImagePresentationName:(id)arg1 state:(id)arg2;
- (void)mapPoint:(id)arg1 bounds:(struct CGRect)arg2;

@end
