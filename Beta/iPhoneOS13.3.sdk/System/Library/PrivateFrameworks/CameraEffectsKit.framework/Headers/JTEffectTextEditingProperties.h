/*
 Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
 */

#import <Foundation/NSObject.h>

@class NSAttributedString, NSDictionary, UIColor;

@interface JTEffectTextEditingProperties : NSObject

{
    _Bool _isAllCaps;
    _Bool _isEmoji;
    NSAttributedString *_attributedText;
    NSDictionary *_defaultTypingAttributes;
    UIColor *_customColor;
    UIColor *_customTextEditTintColor;
    double _rotation;
    struct CGSize _size;
    struct CGPoint _center;
    struct CGPoint _scale;
}

@property (copy, nonatomic) NSAttributedString *attributedText;
@property (nonatomic) _Bool isAllCaps;
@property (copy, nonatomic) NSDictionary *defaultTypingAttributes;
@property (copy, nonatomic) UIColor *customColor;
@property (copy, nonatomic) UIColor *customTextEditTintColor;
@property (nonatomic) double rotation;
@property (nonatomic) struct CGSize size;
@property (nonatomic) struct CGPoint center;
@property (nonatomic) struct CGPoint scale;
@property (nonatomic) _Bool isEmoji;

@end
