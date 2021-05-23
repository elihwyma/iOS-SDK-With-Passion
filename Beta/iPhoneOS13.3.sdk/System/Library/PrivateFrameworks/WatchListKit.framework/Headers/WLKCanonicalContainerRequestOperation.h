/*
 Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

#import <WatchListKit/WLKCanonicalPlayablesRequestOperation.h>

@class WLKCanonicalContainerResponse;

@interface WLKCanonicalContainerRequestOperation : WLKCanonicalPlayablesRequestOperation

{
    WLKCanonicalContainerResponse *_containerResponse;
}

@property (nonatomic, readonly) WLKCanonicalContainerResponse *containerResponse;

- (void)processResponse;

@end
