/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSAttributedString, NSString, UITraitCollection;

__attribute__((visibility("hidden")))
@interface _UIVectorTextLayoutParameters : NSObject <Swift>

{
    NSAttributedString *_attributedText;
    unsigned long long _numberOfLines;
    UITraitCollection *_traitCollection;
    long long _lineBreakMode;
    struct CGSize _withinSize;
}

@property (copy, nonatomic) NSAttributedString *attributedText;
@property (nonatomic) unsigned long long numberOfLines;
@property (nonatomic) struct CGSize withinSize;
@property (retain, nonatomic) UITraitCollection *traitCollection;
@property (nonatomic) long long lineBreakMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)parametersSuitableForView:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithParameters:(id)arg1;
- (_Bool)isEqualToParameters:(id)arg1;
- (void)_copyFromParameters:(id)arg1;

@end
