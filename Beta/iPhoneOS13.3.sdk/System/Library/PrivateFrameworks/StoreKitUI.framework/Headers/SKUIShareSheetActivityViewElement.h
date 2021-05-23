/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIViewElement.h>

@class NSString, NSURL, SKUIImageViewElement, SKUILabelViewElement, SKUIURLViewElement;

@interface SKUIShareSheetActivityViewElement : SKUIViewElement

{
    NSString *_activityType;
    NSURL *_contentSourceURL;
}

@property (nonatomic, readonly) NSString *activityType;
@property (nonatomic, readonly) NSURL *contentSourceURL;
@property (nonatomic, readonly) SKUIImageViewElement *image;
@property (nonatomic, readonly) SKUILabelViewElement *message;
@property (nonatomic, readonly) SKUILabelViewElement *title;
@property (nonatomic, readonly) SKUIURLViewElement *URL;

- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (id)applyUpdatesWithElement:(id)arg1;

@end
