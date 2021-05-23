/*
 Image: /System/Library/Frameworks/CryptoTokenKit.framework/CryptoTokenKit
 */

#import <CryptoTokenKit/TKTokenSession.h>

@class TKSmartCard;

@interface TKSmartCardTokenSession : TKTokenSession

{
    TKSmartCard *_smartCard;
    _Bool _hasSession;
    TKSmartCard *_errorCard;
}

@property (readonly) TKSmartCard *smartCard;

- (id)name;
- (id)initWithToken:(id)arg1;
- (void)endRequest;
- (void)beginRequest;

@end
