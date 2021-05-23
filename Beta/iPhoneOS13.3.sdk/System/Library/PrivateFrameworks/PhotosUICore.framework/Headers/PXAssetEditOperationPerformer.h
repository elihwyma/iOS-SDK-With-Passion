/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSProgress, NSString;

@protocol PXDisplayAsset;

@interface PXAssetEditOperationPerformer : NSObject

{
    NSString *_type;
    id <PXDisplayAsset> _asset;
    NSProgress *_progress;
}

@property (copy, nonatomic, readonly) NSString *type;
@property (nonatomic, readonly) id <PXDisplayAsset> asset;
@property (nonatomic, readonly) NSProgress *progress;

- (id)init;
- (void)performEditOperationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithEditOperationType:(id)arg1 asset:(id)arg2;

@end
