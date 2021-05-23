/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface MPMusicKitTokenHelper : NSObject

{
    NSString *_clientIdentifier;
    NSString *_clientVersion;
}

@property (copy, nonatomic) NSString *clientIdentifier;
@property (copy, nonatomic) NSString *clientVersion;

- (id)clientInfo;
- (void)fetchDeveloperTokenWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchMusicUserTokenWithDeveloperToken:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchDeveloperAndMusicUserTokensWithCompletion:(CDUnknownBlockType)arg1;

@end
