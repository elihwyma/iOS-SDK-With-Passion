/*
 Image: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

#import <Foundation/NSData.h>

@interface NSData (NSDataExtras)

+ (id)dataWithRange:(struct _NSRange)arg1;
+ (id)dataWithPSN:(struct ProcessSerialNumber)arg1;
+ (id)dataWithCGRect:(struct CGRect)arg1;
+ (id)dataWithCGSize:(struct CGSize)arg1;
+ (id)dataWithCGPoint:(struct CGPoint)arg1;

- (struct _NSRange)range;
- (struct CGRect)CGRectValue;
- (struct CGPoint)CGPointValue;
- (struct CGSize)CGSizeValue;
- (struct ProcessSerialNumber)psn;

@end
