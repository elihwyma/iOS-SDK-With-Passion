/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <VideosUI/Swift-Protocol.h>

@protocol VUINowPlayingFeature <Swift>

@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic, getter=isActive) _Bool active;
@property (nonatomic, getter=shouldAutoRemove) _Bool autoRemove;
@property (retain, nonatomic) id userInfo;

@end
