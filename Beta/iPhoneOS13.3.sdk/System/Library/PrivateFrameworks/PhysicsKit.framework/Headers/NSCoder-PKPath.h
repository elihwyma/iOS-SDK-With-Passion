/*
 Image: /System/Library/PrivateFrameworks/PhysicsKit.framework/PhysicsKit
 */

#import <Foundation/NSCoder.h>

@interface NSCoder (PKPath)

- (void)encodeCGPoint:(struct CGPoint)arg1 forKey:(id)arg2;
- (void)encodeCGSize:(struct CGSize)arg1 forKey:(id)arg2;
- (struct CGPoint)decodeCGPointForKey:(id)arg1;
- (struct CGSize)decodeCGSizeForKey:(id)arg1;
- (void)encodeCGVector:(struct CGVector)arg1 forKey:(id)arg2;
- (struct CGVector)decodeCGVectorForKey:(id)arg1;

@end
