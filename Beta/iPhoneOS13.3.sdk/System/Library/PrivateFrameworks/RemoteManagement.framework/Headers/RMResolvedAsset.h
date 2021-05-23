/*
 Image: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
 */

#import <NSObject.h>

@class NSError, RMAsset;

@interface RMResolvedAsset : NSObject

{
    RMAsset *_asset;
    NSError *_error;
}

@property (nonatomic, readonly) RMAsset *asset;
@property (nonatomic, readonly) NSError *error;

- (id)initWithAsset:(id)arg1 error:(id)arg2;

@end
