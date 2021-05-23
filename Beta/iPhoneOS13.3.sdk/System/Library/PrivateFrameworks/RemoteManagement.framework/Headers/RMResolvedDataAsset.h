/*
 Image: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
 */

#import <RemoteManagement/RMResolvedAsset.h>

@class NSData;

@interface RMResolvedDataAsset : RMResolvedAsset

{
    NSData *_data;
}

@property (copy, nonatomic, readonly) NSData *data;

- (id)initWithAsset:(id)arg1 data:(id)arg2 error:(id)arg3;

@end
