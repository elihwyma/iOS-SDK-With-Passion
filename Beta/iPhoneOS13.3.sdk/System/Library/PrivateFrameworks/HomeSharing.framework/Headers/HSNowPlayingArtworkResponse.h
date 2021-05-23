/*
 Image: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

#import <HomeSharing/HSResponse.h>

@class NSData, NSString;

@interface HSNowPlayingArtworkResponse : HSResponse

{
    NSData *_artworkData;
    NSString *_artworkMIMEType;
}

@property (retain, nonatomic) NSData *artworkData;
@property (retain, nonatomic) NSString *artworkMIMEType;

@end
