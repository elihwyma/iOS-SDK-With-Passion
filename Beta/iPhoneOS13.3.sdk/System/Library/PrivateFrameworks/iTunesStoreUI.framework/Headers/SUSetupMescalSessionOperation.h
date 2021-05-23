/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStore/ISOperation.h>

@class SSURLRequestProperties, SUMescalSession;

@interface SUSetupMescalSessionOperation : ISOperation

{
    SSURLRequestProperties *_requestProperties;
    SUMescalSession *_session;
}

@property (readonly) SUMescalSession *mescalSession;

- (void)dealloc;
- (void)run;
- (id)initWithURLRequestProperties:(id)arg1;
- (_Bool)_isMescalEnabled;
- (id)_setupSAPCertificate:(id *)arg1;
- (id)_setupSAPWithData:(id)arg1 error:(id *)arg2;

@end
