/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIInputViewElement.h>

@class NSString, SKUIAnimatorDOMFeature;

__attribute__((visibility("hidden")))
@interface SKUITextInputViewElement : SKUIInputViewElement

{
    long long _keyboardType;
    long long _maximumLength;
    _Bool _secure;
    NSString *_placeholderText;
}

@property (nonatomic, readonly) SKUIAnimatorDOMFeature *animationInterface;
@property (nonatomic, readonly) long long keyboardType;
@property (nonatomic, readonly) long long maximumLength;
@property (nonatomic, readonly) NSString *placeholderText;
@property (nonatomic, readonly, getter=isSecure) _Bool secure;

+ (id)supportedFeatures;
+ (_Bool)isTextInputType:(id)arg1;

- (unsigned long long)elementType;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (id)applyUpdatesWithElement:(id)arg1;

@end
