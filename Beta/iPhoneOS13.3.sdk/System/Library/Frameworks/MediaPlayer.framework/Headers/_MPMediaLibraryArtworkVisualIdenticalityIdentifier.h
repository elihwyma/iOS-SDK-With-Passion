/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface _MPMediaLibraryArtworkVisualIdenticalityIdentifier : NSObject

{
    long long _artworkType;
    NSString *_availableArtworkToken;
    NSString *_fetchableArtworkToken;
}

@property (nonatomic, readonly) long long artworkType;
@property (nonatomic, readonly) NSString *availableArtworkToken;
@property (nonatomic, readonly) NSString *fetchableArtworkToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)stringRepresentation;
- (id)initWithArtworkType:(long long)arg1 availableArtworkToken:(id)arg2 fetchableArtworkToken:(id)arg3;

@end
