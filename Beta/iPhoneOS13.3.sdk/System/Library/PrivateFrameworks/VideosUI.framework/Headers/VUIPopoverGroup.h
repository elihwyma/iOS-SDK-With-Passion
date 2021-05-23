/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

@class IKImageElement, IKTextElement, IKViewElement, NSArray, TVImageProxy, UIColor;

__attribute__((visibility("hidden")))
@interface VUIPopoverGroup : NSObject

{
    IKViewElement *_groupElement;
    IKImageElement *_downImageElement;
    IKImageElement *_upImageElement;
    IKTextElement *_titleElement;
    NSArray *_groupOptions;
    UIColor *_highlightColor;
}

@property (nonatomic, readonly) IKViewElement *groupElement;
@property (nonatomic, readonly) IKImageElement *downImageElement;
@property (nonatomic, readonly) IKImageElement *upImageElement;
@property (nonatomic, readonly) IKTextElement *titleElement;
@property (nonatomic, readonly) TVImageProxy *downImageProxy;
@property (nonatomic, readonly) TVImageProxy *upImageProxy;
@property (copy, nonatomic, readonly) NSArray *groupOptions;
@property (nonatomic, readonly) UIColor *highlightColor;

- (id)init;
- (id)_init;
- (id)initWithViewElement:(id)arg1;
- (void)_populateWithElement:(id)arg1;

@end
