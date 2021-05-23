/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/Swift-Protocol.h>

@class NSString, UIImage;

@protocol _UIMenuLeaf <Swift>

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) UIImage *image;
@property (copy, nonatomic) NSString *discoverabilityTitle;
@property (nonatomic) unsigned long long attributes;
@property (nonatomic) long long state;

- (unsigned short)_resolvedTargetFromFirstTarget: /* Error: Ran out of types for this method. */;
- (unsigned short)_performWithTarget: /* Error: Ran out of types for this method. */;
- (unsigned short)_leafKeyInput;
- (unsigned short)_leafKeyModifierFlags;
- (unsigned short)_leafAlternates;
- (unsigned short)_validatedLeafWithAlternate:target:validation: /* Error: Ran out of types for this method. */;

@end
