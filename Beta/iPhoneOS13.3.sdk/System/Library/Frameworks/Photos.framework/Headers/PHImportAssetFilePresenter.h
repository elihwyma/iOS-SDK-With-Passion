/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Foundation/NSObject.h>

@class NSOperationQueue, NSSet, NSString, NSURL;

@interface PHImportAssetFilePresenter : NSObject

{
    NSURL *_presentedItemURL;
    NSURL *_primaryPresentedItemURL;
    NSOperationQueue *_presentedItemOperationQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, readonly) NSURL *presentedItemURL;
@property (retain, readonly) NSOperationQueue *presentedItemOperationQueue;
@property (copy, readonly) NSURL *primaryPresentedItemURL;
@property (readonly) NSSet *observedPresentedItemUbiquityAttributes;

- (id)initWithPrimaryURL:(id)arg1 presentedURL:(id)arg2;

@end
