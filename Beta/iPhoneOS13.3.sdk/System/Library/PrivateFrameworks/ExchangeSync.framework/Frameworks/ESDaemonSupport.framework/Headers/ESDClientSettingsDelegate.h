/*
 Image: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/ESDaemonSupport.framework/ESDaemonSupport
 */

#import <ESDaemonSupport/ESDClientDelegate.h>

@class DAOofParams;

@interface ESDClientSettingsDelegate : ESDClientDelegate

{
    _Bool _isUpdate;
    DAOofParams *_requestParams;
    DAOofParams *_responseParams;
}

@property (nonatomic) _Bool isUpdate;
@property (retain, nonatomic) DAOofParams *requestParams;
@property (retain, nonatomic) DAOofParams *responseParams;

- (void)dealloc;
- (void)finishWithError:(id)arg1;
- (void)disable;
- (void)settingsRequestFinishedWithResults:(id)arg1 status:(long long)arg2 error:(id)arg3;
- (_Bool)isOofSupported;
- (id)initWithAccountID:(id)arg1 requestDictionary:(id)arg2 forUpdate:(_Bool)arg3 client:(id)arg4;
- (void)beginSettingsRequest;

@end
