/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

@class SKUIContextActionsPresentationSource, SKUIDialogTemplateViewElement;

__attribute__((visibility("hidden")))
@interface SKUIContextActionsConfiguration : NSObject

{
    SKUIContextActionsPresentationSource *_presentationSource;
    SKUIDialogTemplateViewElement *_dialogTemplate;
}

@property (retain, nonatomic) SKUIDialogTemplateViewElement *dialogTemplate;
@property (retain, nonatomic) SKUIContextActionsPresentationSource *presentationSource;

- (id)contextActions;
- (id)initWithDialogTemplate:(id)arg1;
- (id)_resourceImageForImageElement:(id)arg1;

@end
