/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIViewElement.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SKUIIndexBarEntryViewElement : SKUIViewElement

{
    NSString *_targetIndexBarEntryID;
    long long _visibilityPriority;
}

@property (nonatomic, readonly) SKUIViewElement *childElement;
@property (copy, nonatomic, readonly) NSString *targetIndexBarEntryID;
@property (nonatomic, readonly) long long visibilityPriority;

- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (id)applyUpdatesWithElement:(id)arg1;

@end
