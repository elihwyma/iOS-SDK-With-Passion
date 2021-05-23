/*
 Image: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

#import <HomeSharing/HSRequest.h>

@interface HSNowPlayingArtworkRequest : HSRequest

{
    unsigned int _interfaceID;
    unsigned int _playQueueIndex;
    struct CGSize _maximumSize;
}

@property (nonatomic, readonly) unsigned int interfaceID;
@property (nonatomic, readonly) struct CGSize maximumSize;
@property (nonatomic, readonly) unsigned int playQueueIndex;

- (id)canonicalResponseForResponse:(id)arg1;
- (id)initWithInterfaceID:(unsigned int)arg1 maximumSize:(struct CGSize)arg2 playQueueIndex:(unsigned int)arg3;

@end
