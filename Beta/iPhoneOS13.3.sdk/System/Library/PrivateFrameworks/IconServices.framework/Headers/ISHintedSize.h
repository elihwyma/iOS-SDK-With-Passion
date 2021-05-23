/*
 Image: /System/Library/PrivateFrameworks/IconServices.framework/IconServices
 */

#import <IconServices/ISHintedValue.h>

__attribute__((visibility("hidden")))
@interface ISHintedSize : ISHintedValue

- (struct CGSize)hintedSizeForSize:(struct CGSize)arg1 options:(unsigned long long)arg2;
- (void)addHintedSize:(struct CGSize)arg1 forSize:(struct CGSize)arg2;
- (struct CGSize)hintedSizeForSize:(struct CGSize)arg1;

@end
