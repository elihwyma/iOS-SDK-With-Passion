/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <ShareSheet/UIActivityItemProvider.h>

@protocol UIActivityItemsConfigurationReading;

__attribute__((visibility("hidden")))
@interface _UIActivityItemsConfigurationActivityItemProvider : UIActivityItemProvider

{
    id <UIActivityItemsConfigurationReading> _activityItemsConfiguration;
    id _item;
    long long _index;
}

- (id)item;
- (id)_title;
- (id)activityViewController:(id)arg1 itemForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 subjectForActivityType:(id)arg2;
- (id)activityViewControllerLinkMetadata:(id)arg1;
- (id)initWithActivityItemsConfiguration:(id)arg1 itemAtIndex:(long long)arg2;

@end
