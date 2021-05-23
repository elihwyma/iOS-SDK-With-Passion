/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <Foundation/NSAttributedString.h>

@class NSDictionary, NSParagraphStyle;

@interface NSAttributedString (TVMLKitAdditions)

@property (copy, nonatomic, setter=tv_setDefaultAttributes:) NSDictionary *tv_defaultAttributes;
@property (nonatomic, readonly) NSParagraphStyle *tv_currentParagraphStyle;

- (struct CGRect)boundingRectWithWidth:(double)arg1 lines:(unsigned long long)arg2;

@end
