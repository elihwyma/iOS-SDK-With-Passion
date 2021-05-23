/*
 Image: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
 */

#import <ITMLKit/IKViewElement.h>

@class VSMessagePortFeature;

__attribute__((visibility("hidden")))
@interface VSWebAuthenticationTemplateElement : IKViewElement

{
    VSMessagePortFeature *_messagePort;
}

@property (nonatomic, readonly) VSMessagePortFeature *messagePort;

+ (id)supportedFeatures;

- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;

@end
