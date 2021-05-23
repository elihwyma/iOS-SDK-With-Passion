/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPAVErrorResolver.h>

@class MPHomeSharingML3DataProvider, NSData, NSError, NSMutableArray, NSString, NSURL, SSAuthorizationRequest;

@interface MPHomeSharingErrorResolver : MPAVErrorResolver

{
    NSURL *_keybagURL;
    unsigned long long _accountID;
    NSData *_accountTokenData;
    unsigned long long _downloaderAccountID;
    NSData *_downloaderAccountTokenData;
    unsigned long long _familyAccountID;
    NSError *_error;
    NSMutableArray *_requests;
    SSAuthorizationRequest *_activeRequest;
    _Bool _atLeastOneAuthorizationRequestSuccessful;
    MPHomeSharingML3DataProvider *_dataProvider;
}

@property (retain, nonatomic) MPHomeSharingML3DataProvider *dataProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)resolveError:(id)arg1;
- (void)authorizationRequest:(id)arg1 didReceiveResponse:(id)arg2;
- (void)request:(id)arg1 didFailWithError:(id)arg2;
- (void)requestDidFinish:(id)arg1;
- (id)initWithKeybagURL:(id)arg1 accountID:(unsigned long long)arg2 accountTokenData:(id)arg3;
- (id)initWithKeybagURL:(id)arg1 accountID:(unsigned long long)arg2 accountTokenData:(id)arg3 downloaderAccountID:(unsigned long long)arg4 downloaderAccountTokenData:(id)arg5 familyAccountID:(unsigned long long)arg6;
- (_Bool)_errorIsFairPlayError:(id)arg1;
- (void)_performMachineAuthorization;
- (void)_processNextAuthorizationRequest;

@end
