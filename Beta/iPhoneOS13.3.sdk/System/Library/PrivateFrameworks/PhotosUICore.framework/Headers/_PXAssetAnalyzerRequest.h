/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSString, PHAsset;

@interface _PXAssetAnalyzerRequest : NSObject

{
    CDUnknownBlockType _resultHandler;
    _Bool _finished;
    PHAsset *_asset;
    long long _workerType;
}

@property (readonly) PHAsset *asset;
@property (readonly) long long workerType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)runWithResultHandler:(CDUnknownBlockType)arg1;
- (id)initWithAsset:(id)arg1 workerType:(long long)arg2;
- (void)_handleFinishWithSuccess:(_Bool)arg1;

@end
