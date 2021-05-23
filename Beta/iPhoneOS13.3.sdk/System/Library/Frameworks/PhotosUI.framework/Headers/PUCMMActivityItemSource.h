/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUICore/PXObservable.h>

#import <PhotosUI/Swift-Protocol.h>

@class NSArray, NSError, NSObject, NSString, NSURL, PUActivityItemSourceController, PUActivityItemSourceOperation;

@protocol OS_dispatch_queue, PUCMMActivityItemSourceDelegate;

@interface PUCMMActivityItemSource : PXObservable <Swift>

{
    PUActivityItemSourceController *_itemSourceController;
    id <PUCMMActivityItemSourceDelegate> _delegate;
    unsigned long long _state;
    NSString *_activityType;
    PUActivityItemSourceOperation *_preparationOperation;
    NSURL *_momentShareLink;
    NSArray *_individuallyPreparedItems;
    NSError *_preparationError;
    NSObject<OS_dispatch_queue> *_externalIsolationQueue;
}

@property (retain, nonatomic) NSString *activityType;
@property (retain, nonatomic) PUActivityItemSourceOperation *preparationOperation;
@property (copy, nonatomic) NSURL *momentShareLink;
@property (copy, nonatomic) NSArray *individuallyPreparedItems;
@property (retain, nonatomic) NSError *preparationError;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *externalIsolationQueue;
@property (weak, nonatomic, readonly) PUActivityItemSourceController *itemSourceController;
@property (weak, nonatomic) id <PUCMMActivityItemSourceDelegate> delegate;
@property (nonatomic, readonly) unsigned long long state;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)cancel;
- (void)setState:(unsigned long long)arg1;
- (id)activityViewControllerPlaceholderItem:(id)arg1;
- (id)activityViewController:(id)arg1 itemForActivityType:(id)arg2;
- (id)activityViewControllerPlaceholderItems:(id)arg1;
- (id)activityViewController:(id)arg1 itemsForActivityType:(id)arg2;
- (id)activityViewControllerOperation:(id)arg1;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)activityItemSourceOperation:(id)arg1 prepareItemForActivityType:(id)arg2;
- (id)initWithActivityItemSourceController:(id)arg1;
- (id)placeholderItemsForActivityViewController:(id)arg1;
- (id)preparedItems;

@end
