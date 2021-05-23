/*
 Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

#import <Foundation/NSValue.h>

@class NSString;

@interface NSValue (BaseBoard)

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)bs_valueWithCGPoint:(struct CGPoint)arg1;
+ (id)bs_valueWithCGSize:(struct CGSize)arg1;
+ (id)bs_valueWithCGRect:(struct CGRect)arg1;
+ (id)bs_valueWithCGAffineTransform:(struct CGAffineTransform)arg1;

- (_Bool)supportsBSXPCSecureCoding;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (id)initWithBSXPCCoder:(id)arg1;
- (struct CGPoint)bs_CGPointValue;
- (struct CGSize)bs_CGSizeValue;
- (struct CGRect)bs_CGRectValue;
- (struct CGAffineTransform)bs_CGAffineTransformValue;
- (_Bool)bs_getValue:(out void *)arg1 ofSize:(unsigned long long)arg2;

@end
