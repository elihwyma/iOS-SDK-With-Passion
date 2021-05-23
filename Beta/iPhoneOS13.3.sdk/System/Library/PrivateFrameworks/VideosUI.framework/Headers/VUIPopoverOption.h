/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

@class IKImageElement, IKTextElement, IKViewElement, TVImageProxy, UIColor;

__attribute__((visibility("hidden")))
@interface VUIPopoverOption : NSObject

{
    IKViewElement *_cardElement;
    IKImageElement *_imageElement;
    IKViewElement *_optionElement;
    IKTextElement *_titleElement;
    unsigned long long _type;
    UIColor *_highlightColor;
}

@property (nonatomic, readonly) IKViewElement *cardElement;
@property (nonatomic, readonly) IKImageElement *imageElement;
@property (nonatomic, readonly) TVImageProxy *imageProxy;
@property (nonatomic, readonly) IKViewElement *optionElement;
@property (nonatomic, readonly) IKTextElement *titleElement;
@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic, readonly) UIColor *highlightColor;

- (id)init;
- (id)_init;
- (id)initWithViewElement:(id)arg1;
- (void)_populateWithElement:(id)arg1;

@end
