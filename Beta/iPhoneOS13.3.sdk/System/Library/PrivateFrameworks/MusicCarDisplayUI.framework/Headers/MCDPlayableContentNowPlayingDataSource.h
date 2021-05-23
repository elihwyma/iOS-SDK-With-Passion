/*
 Image: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface MCDPlayableContentNowPlayingDataSource : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)_itemProperties;
- (id)queueItemProperties;
- (id)playingItemProperties;
- (id)requestLabel;

@end
