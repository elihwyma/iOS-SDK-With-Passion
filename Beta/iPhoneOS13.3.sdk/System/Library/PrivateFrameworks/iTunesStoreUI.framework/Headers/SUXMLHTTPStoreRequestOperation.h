/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStore/ISOperation.h>

@class ISDataProvider, SSAuthenticationContext, SSURLRequestProperties;

@interface SUXMLHTTPStoreRequestOperation : ISOperation

{
    CDUnknownBlockType _outputBlock;
    SSURLRequestProperties *_requestProperties;
    SSAuthenticationContext *_authenticationContext;
    ISDataProvider *_dataProvider;
}

@property (retain, nonatomic) SSAuthenticationContext *authenticationContext;
@property (retain, nonatomic) ISDataProvider *dataProvider;
@property (copy) CDUnknownBlockType outputBlock;

- (void)run;
- (id)initWithRequestProperties:(id)arg1;

@end
