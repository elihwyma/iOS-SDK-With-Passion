/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSString, UIColor;

@interface _UILegibilitySettings : NSObject <Swift>

{
    long long _style;
    UIColor *_contentColor;
    UIColor *_primaryColor;
    UIColor *_secondaryColor;
    UIColor *_shadowColor;
    double _shadowRadius;
    double _shadowAlpha;
    double _imageOutset;
    double _minFillHeight;
    NSString *_shadowCompositingFilterName;
}

@property (nonatomic) long long style;
@property (copy, nonatomic) NSString *shadowCompositingFilterName;
@property (retain, nonatomic) UIColor *primaryColor;
@property (retain, nonatomic) UIColor *secondaryColor;
@property (retain, nonatomic) UIColor *shadowColor;
@property (retain, nonatomic) UIColor *contentColor;
@property (nonatomic) double shadowRadius;
@property (nonatomic) double shadowAlpha;
@property (nonatomic) double imageOutset;
@property (nonatomic) double minFillHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)sharedInstanceForStyle:(long long)arg1;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (id)initWithStyle:(long long)arg1;
- (id)initWithStyle:(long long)arg1 contentColor:(id)arg2;
- (void)setPropertiesForStyle:(long long)arg1;
- (id)initWithStyle:(long long)arg1 primaryColor:(id)arg2 secondaryColor:(id)arg3 shadowColor:(id)arg4;
- (id)initWithContentColor:(id)arg1;
- (id)initWithContentColor:(id)arg1 contrast:(double)arg2;

@end
