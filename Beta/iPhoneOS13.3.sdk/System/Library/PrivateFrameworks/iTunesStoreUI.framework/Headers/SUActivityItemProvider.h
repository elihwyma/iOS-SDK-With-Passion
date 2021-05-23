/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <UIKit/UIActivityItemProvider.h>

@class NSObject, UIActivity, UIImage;

@protocol OS_dispatch_queue, SUActivityItemProviderDelegate;

@interface SUActivityItemProvider : UIActivityItemProvider

{
    UIActivity *_activity;
    id <SUActivityItemProviderDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    id _lastProvidedItem;
    UIImage *_previewImage;
}

@property (weak) id <SUActivityItemProviderDelegate> delegate;
@property (retain, setter=setSUActivity:) UIActivity *suActivity;
@property (readonly) id suLastProvidedItem;
@property (retain, setter=setSUPreviewImage:) UIImage *suPreviewImage;

- (void)dealloc;
- (id)item;
- (id)initWithPlaceholderItem:(id)arg1;

@end
