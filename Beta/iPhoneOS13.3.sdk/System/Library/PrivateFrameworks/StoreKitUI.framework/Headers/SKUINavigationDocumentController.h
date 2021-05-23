/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, NSString, SKUIClientContext, UINavigationController;

@protocol SKUINavigationDocumentDelegate;

@interface SKUINavigationDocumentController : NSObject

{
    NSMutableArray *_pendingNavigationStackEnsureConsistencyRequests;
    NSMutableArray *_stackItems;
    UINavigationController *_navigationController;
    SKUIClientContext *_clientContext;
    id <SKUINavigationDocumentDelegate> _delegate;
    UINavigationController *_overrideNavigationController;
    UINavigationController *_moreNavigationController;
}

@property (retain, nonatomic) UINavigationController *moreNavigationController;
@property (nonatomic, readonly) UINavigationController *navigationController;
@property (retain, nonatomic) SKUIClientContext *clientContext;
@property (weak, nonatomic) id <SKUINavigationDocumentDelegate> delegate;
@property (retain, nonatomic) UINavigationController *overrideNavigationController;
@property (copy, nonatomic, readonly) NSArray *documentStackItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)clear;
- (id)initWithNavigationController:(id)arg1;
- (void)pushDocument:(id)arg1 options:(id)arg2;
- (void)insertDocument:(id)arg1 beforeDocument:(id)arg2 options:(id)arg3;
- (void)replaceDocument:(id)arg1 withDocument:(id)arg2 options:(id)arg3;
- (void)popDocument;
- (void)popToDocument:(id)arg1;
- (void)popToRootDocument;
- (void)removeDocument:(id)arg1;
- (id)documents;
- (void)_scheduleFlushingPendingNavigationStackEnsureConsistencyRequestsWithTransitionCoordinator:(id)arg1;
- (void)_ensureStackConsistencyForNavigationControllerOperation:(long long)arg1 operationDidComplete:(_Bool)arg2;
- (void)_unloadAllStackItems;
- (void)_handleStackDidChange;
- (id)_activeNavigationController;
- (void)popAllDocuments;
- (void)_applyDocumentReplacementForOldStackItem:(id)arg1 atOldIndex:(long long)arg2 withStackItem:(id)arg3;
- (void)ensureStackConsistencyForNavigationControllerOperation:(long long)arg1 operationDidComplete:(_Bool)arg2;
- (void)setStackItems:(id)arg1 animated:(_Bool)arg2;

@end
