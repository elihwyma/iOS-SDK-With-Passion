/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <VideosUI/Swift-Protocol.h>

@class VUIUpNextButtonProperties;

@protocol VUIUpNextButtonProtocol <Swift>

@property (nonatomic, readonly) VUIUpNextButtonProperties *properties;

- (unsigned short)upNextStateChangedToAdded;
- (unsigned short)upNextStateChangedToRemoved;

@end
