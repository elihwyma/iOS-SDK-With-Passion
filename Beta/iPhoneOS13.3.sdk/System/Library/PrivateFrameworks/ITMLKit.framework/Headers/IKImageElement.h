/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <ITMLKit/IKViewElement.h>

@class IKSrcSetRule, NSArray, NSDictionary, NSURL, UIColor;

@interface IKImageElement : IKViewElement

{
    double _srcWidth;
    double _srcHeight;
    IKImageElement *_fallbackImageElement;
    NSDictionary *_srcset;
    unsigned long long _imageType;
    double _aspectRatio;
    NSURL *_resolvedURL;
    NSArray *_srcsetRules;
    IKSrcSetRule *_bestRule;
}

@property (retain, nonatomic) NSURL *resolvedURL;
@property (retain, nonatomic) NSArray *srcsetRules;
@property (retain, nonatomic) IKSrcSetRule *bestRule;
@property (nonatomic, readonly) IKImageElement *fallbackImageElement;
@property (nonatomic, readonly) NSURL *url;
@property (retain, nonatomic, readonly) NSDictionary *srcset;
@property (retain, nonatomic, readonly) NSURL *placeholderURL;
@property (nonatomic, readonly) unsigned long long imageType;
@property (nonatomic, readonly) double width;
@property (nonatomic, readonly) double height;
@property (nonatomic, readonly) double aspectRatio;
@property (nonatomic, readonly) unsigned long long position;
@property (nonatomic, readonly) UIColor *borderColor;
@property (nonatomic, readonly) long long fill;
@property (nonatomic, readonly) long long reflect;

+ (_Bool)shouldParseChildDOMElements;
+ (unsigned long long)_imageTypeForTagName:(id)arg1;

- (void)_initCommon;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (void)appDocumentDidMarkStylesDirty;
- (id)initWithPrototypeElement:(id)arg1 parent:(id)arg2 appDataItem:(id)arg3;
- (id)initWithOriginalElement:(id)arg1;
- (void)_resolveURL;
- (void)_parseSrcset:(id)arg1;

@end
