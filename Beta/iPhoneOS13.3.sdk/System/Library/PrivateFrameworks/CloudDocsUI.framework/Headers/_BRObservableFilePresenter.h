/*
 Image: /System/Library/PrivateFrameworks/CloudDocsUI.framework/CloudDocsUI
 */

#import <Foundation/NSObject.h>

@class BRObservableFile, NSOperationQueue, NSSet, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface _BRObservableFilePresenter : NSObject

{
    NSURL *_presentedItemURL;
    NSOperationQueue *_presentedItemOperationQueue;
    BRObservableFile *_parent;
}

@property (copy) NSURL *presentedItemURL;
@property (retain) NSOperationQueue *presentedItemOperationQueue;
@property (weak, nonatomic) BRObservableFile *parent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, readonly) NSURL *primaryPresentedItemURL;
@property (readonly) NSSet *observedPresentedItemUbiquityAttributes;

- (void)accommodatePresentedItemDeletionWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)presentedItemDidChange;
- (void)presentedItemDidMoveToURL:(id)arg1;
- (void)presentedItemUbiquityDidChange;

@end
