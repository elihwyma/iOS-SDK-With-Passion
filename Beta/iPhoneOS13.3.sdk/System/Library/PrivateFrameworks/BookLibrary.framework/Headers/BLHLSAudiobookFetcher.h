/*
 Image: /System/Library/PrivateFrameworks/BookLibrary.framework/BookLibrary
 */

#import <Foundation/NSObject.h>

@class NSURLSession;

@interface BLHLSAudiobookFetcher : NSObject

{
    NSURLSession *_session;
}

@property (nonatomic, readonly) NSURLSession *session;

+ (id)preferredStreamFromMasterPlaylist:(id)arg1;

- (id)initCanUseCellularData:(_Bool)arg1 powerRequired:(_Bool)arg2;
- (id)setupDownloadTaskForFetchingMasterPlaylistAndSelectingStreamFromMasterPlaylistURL:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
