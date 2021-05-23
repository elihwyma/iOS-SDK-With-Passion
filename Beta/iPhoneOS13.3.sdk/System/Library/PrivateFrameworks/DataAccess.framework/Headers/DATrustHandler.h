/*
 Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@protocol DATrustHandlerDelegate;

@interface DATrustHandler : NSObject

{
    id <DATrustHandlerDelegate> _delegate;
    NSMutableDictionary *_haveWarnedAboutCertDict;
}

@property (weak, nonatomic) id <DATrustHandlerDelegate> delegate;
@property (retain, nonatomic) NSMutableDictionary *haveWarnedAboutCertDict;

- (id)initWithDelegate:(id)arg1;
- (_Bool)resetCertWarnings;
- (_Bool)handleTrustChallenge:(id)arg1 forAccount:(id)arg2;
- (_Bool)handleTrustChallenge:(id)arg1 forAccount:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)haveWarnedAboutCert:(id)arg1 forHost:(id)arg2;
- (id)_serverSuffixesToAlwaysFail;
- (void)setHaveWarnedAboutCert:(id)arg1 forHost:(id)arg2;
- (void)handleTrust:(struct __SecTrust *)arg1 forHost:(id)arg2 forAccount:(id)arg3 withCompletionBlock:(CDUnknownBlockType)arg4;
- (int)_actionForTrust:(struct __SecTrust *)arg1 host:(id)arg2 service:(id)arg3;

@end
