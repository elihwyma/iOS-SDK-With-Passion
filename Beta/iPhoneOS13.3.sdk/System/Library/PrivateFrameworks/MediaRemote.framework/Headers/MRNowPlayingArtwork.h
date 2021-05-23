/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <Foundation/NSObject.h>

@interface MRNowPlayingArtwork : NSObject

@property (nonatomic, readonly) unsigned int type;
@property (nonatomic, readonly) _Bool hasArtworkData;

- (id)copyImageData;

@end
