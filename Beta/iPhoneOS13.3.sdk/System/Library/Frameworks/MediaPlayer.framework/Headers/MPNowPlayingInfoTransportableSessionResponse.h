/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@class NSData, NSString;

@interface MPNowPlayingInfoTransportableSessionResponse : NSObject

{
    NSString *_identifier;
    NSString *_sessionType;
    NSData *_data;
}

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *sessionType;
@property (nonatomic, readonly) NSData *data;

+ (id)responseWithIdentifier:(id)arg1 sessionType:(id)arg2 data:(id)arg3;

- (id)_init;

@end
