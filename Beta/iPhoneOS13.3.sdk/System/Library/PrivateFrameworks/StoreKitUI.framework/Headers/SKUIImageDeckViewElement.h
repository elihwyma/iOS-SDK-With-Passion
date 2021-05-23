/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIViewElement.h>

__attribute__((visibility("hidden")))
@interface SKUIImageDeckViewElement : SKUIViewElement

{
    double _initialDragLeft;
    double _initialDragRight;
    double _additionalDragLeft;
    double _additionalDragRight;
}

@property (nonatomic, readonly) double initialDragLeft;
@property (nonatomic, readonly) double initialDragRight;
@property (nonatomic, readonly) double additionalDragLeft;
@property (nonatomic, readonly) double additionalDragRight;

- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;

@end
