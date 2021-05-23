/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <SafariServices/_SFActivityItemProvider.h>

@class NSExtensionItem;

@interface _SFActivityExtensionItemProvider : _SFActivityItemProvider

{
    NSExtensionItem *_extensionItem;
}

@property (retain, nonatomic) NSExtensionItem *extensionItem;

- (id)item;
- (id)activityViewController:(id)arg1 itemForActivityType:(id)arg2;
- (id)_itemForActivityType:(id)arg1;
- (id)initWithExtensionItem:(id)arg1 URL:(id)arg2 pageTitle:(id)arg3 webView:(id)arg4;

@end
