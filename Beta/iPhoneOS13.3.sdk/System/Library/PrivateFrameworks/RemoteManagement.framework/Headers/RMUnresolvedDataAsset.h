/*
 Image: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
 */

#import <NSObject.h>

@class NSString, RMAsset;

@interface RMUnresolvedDataAsset : NSObject

{
    RMAsset *_asset;
}

@property (retain, nonatomic) RMAsset *asset;
@property (copy, nonatomic, readonly) NSString *identifier;

- (id)initWithAsset:(id)arg1;
- (void)resolveWithAssetResolver:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
