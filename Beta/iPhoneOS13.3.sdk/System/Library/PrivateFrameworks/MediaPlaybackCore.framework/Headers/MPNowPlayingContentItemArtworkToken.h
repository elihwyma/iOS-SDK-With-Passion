/*
 Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface MPNowPlayingContentItemArtworkToken : NSObject

{
    NSString *_identifier;
    NSString *_artworkIdentifier;
}

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *artworkIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)stringRepresentation;
- (id)initWithIdentifier:(id)arg1 artworkIdentifier:(id)arg2;

@end
