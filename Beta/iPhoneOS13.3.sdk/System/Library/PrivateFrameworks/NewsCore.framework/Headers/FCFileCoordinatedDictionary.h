/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class FCAsyncSerialQueue, NSOperationQueue, NSSet, NSString, NSURL;

@interface FCFileCoordinatedDictionary : NSObject

{
    NSURL *_presentedItemURL;
    NSOperationQueue *_presentedItemOperationQueue;
    NSURL *_fileURL;
    NSSet *_allowedClasses;
    NSOperationQueue *_accessQueue;
    FCAsyncSerialQueue *_accessSynchronizationQueue;
}

@property (copy, nonatomic, readonly) NSURL *fileURL;
@property (copy, nonatomic, readonly) NSSet *allowedClasses;
@property (nonatomic, readonly) NSOperationQueue *accessQueue;
@property (nonatomic, readonly) FCAsyncSerialQueue *accessSynchronizationQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, readonly) NSURL *presentedItemURL;
@property (retain, readonly) NSOperationQueue *presentedItemOperationQueue;
@property (copy, readonly) NSURL *primaryPresentedItemURL;
@property (readonly) NSSet *observedPresentedItemUbiquityAttributes;

- (id)init;
- (void)readWithAccessor:(CDUnknownBlockType)arg1;
- (id)initWithFileURL:(id)arg1 allowedClasses:(id)arg2;
- (void)writeWithAccessor:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;

@end
