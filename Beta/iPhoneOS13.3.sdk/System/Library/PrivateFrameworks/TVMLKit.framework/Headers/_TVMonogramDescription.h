/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <Foundation/NSObject.h>

@class NSString, NSURL, UIColor, UIFont;

@protocol IKNetworkRequestLoader;

@interface _TVMonogramDescription : NSObject

{
    _Bool _shouldFallBackToSilhouette;
    NSString *_firstName;
    NSString *_lastName;
    NSString *_text;
    NSURL *_imageURL;
    UIFont *_font;
    long long _scaleMode;
    UIColor *_backgroundColor;
    UIColor *_textColor;
    double _upscaleAdjustment;
    double _cornerRadius;
    UIColor *_fillColor;
    double _borderWidth;
    UIColor *_borderColor;
    id <IKNetworkRequestLoader> _requestLoader;
    struct CGSize _size;
    struct UIEdgeInsets _padding;
}

@property (copy, nonatomic, readonly) NSString *firstName;
@property (copy, nonatomic, readonly) NSString *lastName;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic, readonly) NSURL *imageURL;
@property (copy, nonatomic, readonly) UIFont *font;
@property (nonatomic) struct CGSize size;
@property (nonatomic) struct UIEdgeInsets padding;
@property (nonatomic) long long scaleMode;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) UIColor *textColor;
@property (nonatomic) double upscaleAdjustment;
@property (nonatomic) double cornerRadius;
@property (retain, nonatomic) UIColor *fillColor;
@property (nonatomic) _Bool shouldFallBackToSilhouette;
@property (nonatomic) double borderWidth;
@property (retain, nonatomic) UIColor *borderColor;
@property (weak, nonatomic) id <IKNetworkRequestLoader> requestLoader;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copyWithType:(unsigned long long)arg1;
- (id)initWithFirstName:(id)arg1 lastName:(id)arg2 imageURL:(id)arg3 font:(id)arg4;
- (unsigned long long)preferedMonogramType;

@end
