/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

@class NSOperationQueue, NSSet, NSString, NSURL, PFUbiquityLocation;

__attribute__((visibility("hidden")))
@interface PFUbiquityMetadataFactoryFilePresenter : NSObject

{
    NSURL *_presentedItemURL;
    PFUbiquityLocation *_presentedItemLocation;
}

@property (copy, readonly) NSURL *presentedItemURL;
@property (nonatomic, readonly) PFUbiquityLocation *presentedItemLocation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, readonly) NSOperationQueue *presentedItemOperationQueue;
@property (copy, readonly) NSURL *primaryPresentedItemURL;
@property (readonly) NSSet *observedPresentedItemUbiquityAttributes;

+ (void)initialize;

- (id)init;
- (void)dealloc;
- (void)savePresentedItemChangesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)accommodatePresentedItemDeletionWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)relinquishPresentedItemToReader:(CDUnknownBlockType)arg1;
- (void)relinquishPresentedItemToWriter:(CDUnknownBlockType)arg1;
- (id)initWithMetadataStoreFileLocation:(id)arg1;

@end
