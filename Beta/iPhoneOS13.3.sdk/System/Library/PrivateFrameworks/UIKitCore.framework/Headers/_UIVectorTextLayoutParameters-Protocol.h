/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/Swift-Protocol.h>

@class NSAttributedString, UITraitCollection;

@protocol _UIVectorTextLayoutParameters <Swift>

@property (copy, nonatomic, readonly) NSAttributedString *attributedText;
@property (nonatomic, readonly) unsigned long long numberOfLines;
@property (nonatomic, readonly) struct CGSize withinSize;
@property (nonatomic, readonly) UITraitCollection *traitCollection;
@property (nonatomic, readonly) long long lineBreakMode;

@end
