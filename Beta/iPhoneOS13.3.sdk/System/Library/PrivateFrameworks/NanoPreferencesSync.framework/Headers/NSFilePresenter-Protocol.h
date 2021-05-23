/*
 Image: /System/Library/PrivateFrameworks/NanoPreferencesSync.framework/NanoPreferencesSync
 */

#import <NanoPreferencesSync/Swift-Protocol.h>

@class NSOperationQueue, NSSet, NSURL;

@protocol NSFilePresenter <Swift>

@property (copy, readonly) NSURL *presentedItemURL;
@property (retain, readonly) NSOperationQueue *presentedItemOperationQueue;
@property (copy, readonly) NSURL *primaryPresentedItemURL;
@property (readonly) NSSet *observedPresentedItemUbiquityAttributes;

@end
