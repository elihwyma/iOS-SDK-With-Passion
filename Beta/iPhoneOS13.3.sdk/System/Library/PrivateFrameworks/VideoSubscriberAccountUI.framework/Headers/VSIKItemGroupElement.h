/*
 Image: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
 */

#import <ITMLKit/IKViewElement.h>

@class VSIKItemGroup;

__attribute__((visibility("hidden")))
@interface VSIKItemGroupElement : IKViewElement

{
    VSIKItemGroup *_itemGroup;
}

@property (nonatomic, readonly) VSIKItemGroup *itemGroup;

+ (id)supportedFeaturesForElementName:(id)arg1;

- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;

@end
