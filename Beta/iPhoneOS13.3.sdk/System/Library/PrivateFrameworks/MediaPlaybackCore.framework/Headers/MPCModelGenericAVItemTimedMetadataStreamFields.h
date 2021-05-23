/*
 Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface MPCModelGenericAVItemTimedMetadataStreamFields : NSObject

{
    _Bool _explicitContent;
    NSString *_title;
    NSString *_artist;
    NSString *_album;
    NSArray *_artworkDictionaries;
}

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *artist;
@property (copy, nonatomic) NSString *album;
@property (nonatomic, getter=isExplicitContent) _Bool explicitContent;
@property (copy, nonatomic) NSArray *artworkDictionaries;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;

@end
