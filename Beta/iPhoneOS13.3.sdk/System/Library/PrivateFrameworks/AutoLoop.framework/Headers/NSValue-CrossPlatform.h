/*
 Image: /System/Library/PrivateFrameworks/AutoLoop.framework/AutoLoop
 */

#import <Foundation/NSValue.h>

@interface NSValue (CrossPlatform)

+ (id)valueWithPoint:(struct CGPoint)arg1;
+ (id)valueWithSize:(struct CGSize)arg1;

- (struct CGPoint)pointValue;
- (struct CGSize)sizeValue;

@end
