/*
 Image: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSSet;

@protocol TVPMediaItem;

@interface TVPClipMediaItem : NSObject

{
    NSObject<TVPMediaItem> *_mediaItem;
    NSSet *_localMetadataKeys;
    NSMutableDictionary *_localMetadata;
}

@property (retain, nonatomic) NSObject<TVPMediaItem> *mediaItem;
@property (retain, nonatomic) NSSet *localMetadataKeys;
@property (retain, nonatomic) NSMutableDictionary *localMetadata;

- (void)dealloc;
- (_Bool)isKindOfClass:(Class)arg1;
- (_Bool)conformsToProtocol:(id)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)mediaItemMetadataForProperty:(id)arg1;
- (_Bool)hasTrait:(id)arg1;
- (void)setMediaItemMetadata:(id)arg1 forProperty:(id)arg2;
- (void)_mediaItemMetadataWillOrDidChange:(id)arg1;
- (id)initWithMediaItem:(id)arg1 clipTimeRange:(id)arg2;

@end
