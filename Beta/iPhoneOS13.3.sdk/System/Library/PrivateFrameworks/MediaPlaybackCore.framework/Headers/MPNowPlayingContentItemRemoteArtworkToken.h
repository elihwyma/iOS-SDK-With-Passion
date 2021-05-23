/*
 Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

#import <Foundation/NSObject.h>

@class MPExportableArtworkProperties, NSString;

@interface MPNowPlayingContentItemRemoteArtworkToken : NSObject

{
    NSString *_identifier;
    NSString *_artworkIdentifier;
    MPExportableArtworkProperties *_artworkProperties;
}

@property (copy, nonatomic, readonly) NSString *identifier;
@property (copy, nonatomic, readonly) NSString *artworkIdentifier;
@property (copy, nonatomic, readonly) MPExportableArtworkProperties *artworkProperties;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)stringRepresentation;
- (id)initWithIdentifier:(id)arg1 artworkProperties:(id)arg2 artworkIdentifier:(id)arg3;

@end
