/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <Foundation/NSObject.h>

@class _MRNowPlayingPlayerPathProtobuf;

__attribute__((visibility("hidden")))
@interface MRPlayerPathDictionaryKey : NSObject

{
    _MRNowPlayingPlayerPathProtobuf *_playerPath;
}

@property (nonatomic, readonly) _MRNowPlayingPlayerPathProtobuf *playerPath;

+ (id)dictionaryKeyWithPlayerPath:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithPlayerPath:(id)arg1;

@end
