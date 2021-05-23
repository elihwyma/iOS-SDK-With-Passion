/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@class MPMediaItemArtwork, NSString;

@interface MPContentItem : NSObject

{
    void *_mediaRemoteContentItem;
    MPMediaItemArtwork *_artwork;
}

@property (nonatomic, readonly) void *_mediaRemoteContentItem;
@property (copy, nonatomic, readonly) NSString *identifier;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (retain, nonatomic) MPMediaItemArtwork *artwork;
@property (nonatomic) float playbackProgress;
@property (nonatomic, getter=isStreamingContent) _Bool streamingContent;
@property (nonatomic, getter=isExplicitContent) _Bool explicitContent;
@property (nonatomic, getter=isContainer) _Bool container;
@property (nonatomic, getter=isPlayable) _Bool playable;

+ (_Bool)shouldPushArtworkData;
+ (_Bool)isSuppressingChangeNotifications;
+ (void)performSuppressingChangeNotifications:(CDUnknownBlockType)arg1;
+ (void)performChangeImmediately:(CDUnknownBlockType)arg1;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)initWithIdentifier:(id)arg1;
- (id)initWithExternalRepresentation:(id)arg1;
- (id)_initWithMediaRemoteContentItem:(void *)arg1;
- (id)createExternalRepresentation;
- (void)_postItemChangedNotificationWithDeltaBlock:(CDUnknownBlockType)arg1;
- (void)_loadArtwork:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
