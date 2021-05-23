/*
 Image: /System/Library/PrivateFrameworks/IconServices.framework/IconServices
 */

#import <IconServices/ISHintedValue.h>

@interface ISHintedRect : ISHintedValue

- (void)addHintedRect:(struct CGRect)arg1 forSize:(struct CGSize)arg2;
- (struct CGRect)hintedRectForSize:(struct CGSize)arg1;
- (struct CGRect)hintedRectForSize:(struct CGSize)arg1 options:(unsigned long long)arg2;

@end
