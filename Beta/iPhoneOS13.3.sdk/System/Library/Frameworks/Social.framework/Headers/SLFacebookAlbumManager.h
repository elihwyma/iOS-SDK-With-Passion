/*
 Image: /System/Library/Frameworks/Social.framework/Social
 */

#import <Foundation/NSObject.h>

@class ACAccount, NSOperationQueue, SLFacebookAlbum;

@protocol SLFacebookAlbumManagerDelegate;

@interface SLFacebookAlbumManager : NSObject

{
    _Bool _isCanceled;
    NSOperationQueue *photoQueue;
    ACAccount *_account;
    id <SLFacebookAlbumManagerDelegate> _delegate;
    SLFacebookAlbum *_selectedAlbum;
}

@property (retain) ACAccount *account;
@property (weak) id <SLFacebookAlbumManagerDelegate> delegate;
@property (retain) SLFacebookAlbum *selectedAlbum;

- (id)initWithAccount:(id)arg1;
- (void)refreshAlbums;
- (void)loadCoverImageForAlbum:(id)arg1;
- (id)checkErrorResponse:(id)arg1;
- (id)parseAlbumsWithResponse:(id)arg1;
- (id)defaultAlbumWithDefaultAlbumResponse:(id)arg1;
- (void)handleAlbumResponse:(id)arg1 error:(id)arg2;
- (void)performAlbumRequestWithBatchRequests:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)handleDefaultAlbumFetchResponse:(id)arg1 handler:(CDUnknownBlockType)arg2 error:(id)arg3;
- (void)fetchDefaultAlbum:(CDUnknownBlockType)arg1;

@end
