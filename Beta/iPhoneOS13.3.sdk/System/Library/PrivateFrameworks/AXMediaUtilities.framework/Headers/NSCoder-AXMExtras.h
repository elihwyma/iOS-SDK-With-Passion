/*
 Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

#import <Foundation/NSCoder.h>

@interface NSCoder (AXMExtras)

- (struct CGPoint)axmDecodePointForKey:(id)arg1;
- (void)axmEncodePoint:(struct CGPoint)arg1 forKey:(id)arg2;
- (void)axmEncodeRect:(struct CGRect)arg1 forKey:(id)arg2;
- (struct CGRect)axmDecodeRectForKey:(id)arg1;
- (void)axmEncodeSize:(struct CGSize)arg1 forKey:(id)arg2;
- (struct CGSize)axmDecodeSizeForKey:(id)arg1;

@end
