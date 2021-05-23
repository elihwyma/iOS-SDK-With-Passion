/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class AVPlayerItem, NSError;

@interface PXVideoContentProviderLoadingResult : NSObject

{
    AVPlayerItem *_playerItem;
    NSError *_error;
    long long _priority;
}

@property (nonatomic, readonly) AVPlayerItem *playerItem;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) long long priority;

- (id)description;
- (id)initWithPlayerItem:(id)arg1 error:(id)arg2 priority:(long long)arg3;

@end
