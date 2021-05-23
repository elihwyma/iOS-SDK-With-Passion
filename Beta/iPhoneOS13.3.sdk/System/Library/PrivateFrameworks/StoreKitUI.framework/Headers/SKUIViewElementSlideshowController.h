/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString, SKUIIPhoneSlideshowViewController, SKUISlideshowViewController, SKUIViewElementLayoutContext;

@protocol SKUIViewElementSlideshowDelegate;

__attribute__((visibility("hidden")))
@interface SKUIViewElementSlideshowController : NSObject

{
    id <SKUIViewElementSlideshowDelegate> _delegate;
    SKUIViewElementLayoutContext *_layoutContext;
    NSMutableArray *_lockups;
    SKUISlideshowViewController *_padViewController;
    SKUIIPhoneSlideshowViewController *_phoneViewController;
    long long _selectedIndex;
    NSString *_title;
    NSMutableArray *_dataConsumers;
}

@property (retain, nonatomic) NSMutableArray *dataConsumers;
@property (weak, nonatomic) id <SKUIViewElementSlideshowDelegate> delegate;
@property (retain, nonatomic) SKUIViewElementLayoutContext *layoutContext;
@property (nonatomic, readonly) long long numberOfSlideshowItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (long long)numberOfItemsInSlideshowViewController:(id)arg1;
- (id)slideshowViewController:(id)arg1 dataConsumerAtIndex:(long long)arg2;
- (id)slideshowViewController:(id)arg1 imageURLAtIndex:(long long)arg2;
- (id)slideshowViewController:(id)arg1 placeholderImageAtIndex:(long long)arg2;
- (void)slideshowViewControllerDidFinish:(id)arg1;
- (id)initWithShelf:(id)arg1 selectedLockup:(id)arg2;
- (void)presentFromParentViewController:(id)arg1;

@end
