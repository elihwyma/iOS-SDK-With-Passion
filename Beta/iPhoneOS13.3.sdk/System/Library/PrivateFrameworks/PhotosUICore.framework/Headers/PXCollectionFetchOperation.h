/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSOperation.h>

@class PHCollection, PHFetchOptions, PHFetchResult;

@protocol PXCollectionFetchOperationDelegate;

@interface PXCollectionFetchOperation : NSOperation

{
    id <PXCollectionFetchOperationDelegate> _delegate;
    PHFetchOptions *_fetchOptions;
    PHCollection *_collection;
    PHFetchResult *_outputFetchResult;
}

@property (retain, nonatomic) PHFetchResult *outputFetchResult;
@property (weak, nonatomic) id <PXCollectionFetchOperationDelegate> delegate;
@property (retain, nonatomic) PHFetchOptions *fetchOptions;
@property (nonatomic, readonly) PHCollection *collection;

+ (id)fetchOperationWithCollection:(id)arg1 delegate:(id)arg2;

- (id)init;
- (void)main;
- (id)initWithCollection:(id)arg1;
- (void)handleBegin;
- (void)handleFinish;

@end
