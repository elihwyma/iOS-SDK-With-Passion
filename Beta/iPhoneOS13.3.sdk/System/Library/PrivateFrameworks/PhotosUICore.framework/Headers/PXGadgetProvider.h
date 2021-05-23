/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

#import <PhotosUICore/Swift-Protocol.h>

@class NSArray, NSString, PXGadgetNavigationHelper;

@protocol PXGadgetDelegate, PXGadgetProviderDelegate, PXGadgetTransition;

@interface PXGadgetProvider : NSObject <Swift>

{
    _Bool _isPerformingChanges;
    _Bool _invalidGadgets;
    id <PXGadgetProviderDelegate> _delegate;
    id <PXGadgetDelegate> _nextGadgetResponder;
    NSArray *_gadgets;
}

@property (copy) NSArray *gadgets;
@property (nonatomic) _Bool isPerformingChanges;
@property (nonatomic) _Bool invalidGadgets;
@property (weak, nonatomic) id <PXGadgetProviderDelegate> delegate;
@property (weak, nonatomic) id <PXGadgetDelegate> nextGadgetResponder;
@property (nonatomic, readonly) _Bool supportsDynamicRanking;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) id <PXGadgetTransition> gadgetTransition;
@property (nonatomic, readonly) PXGadgetNavigationHelper *rootNavigationHelper;

- (id)init;
- (void)performChanges:(CDUnknownBlockType)arg1;
- (void)_updateIfNeeded;
- (struct NSObject *)gadgetViewControllerHostingGadget:(id)arg1;
- (void)gadget:(id)arg1 animateChanges:(CDUnknownBlockType)arg2;
- (void)gadget:(id)arg1 didChange:(unsigned long long)arg2;
- (_Bool)gadget:(id)arg1 transitionToViewController:(struct NSObject *)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)presentGadgetViewController:(struct NSObject *)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)dismissGadgetViewController:(struct NSObject *)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)addGadgets:(id)arg1;
- (void)insertGadgets:(id)arg1 atIndexes:(id)arg2;
- (void)removeGadgets:(id)arg1;
- (void)removeGadgetsAtIndexes:(id)arg1;
- (void)removeAllGadgets;
- (void)loadDataForPriority;
- (void)loadDataForGadgets;
- (void)startLoadingRemainingData;
- (unsigned long long)estimatedNumberOfGadgets;
- (void)generateGadgets;

@end
