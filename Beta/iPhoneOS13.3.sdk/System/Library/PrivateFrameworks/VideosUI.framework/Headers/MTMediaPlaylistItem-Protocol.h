/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <VideosUI/Swift-Protocol.h>

@class NSArray;

@protocol MTMediaPlaylistItem <Swift>

@property (nonatomic, readonly) unsigned long long startOverallPosition;
@property (nonatomic, readonly) unsigned long long overallPosition;
@property (nonatomic, readonly) long long startPosition;
@property (nonatomic, readonly) NSArray *eventData;

@end
