/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStore/ISOperation.h>

@class SSURLRequestProperties;

@interface SUXMLHTTPRequestOperation : ISOperation

{
    CDUnknownBlockType _outputBlock;
    SSURLRequestProperties *_requestProperties;
}

@property (copy) CDUnknownBlockType outputBlock;

- (void)run;
- (id)initWithRequestProperties:(id)arg1;
- (_Bool)_isAllowedURL:(id)arg1 withURLBag:(id)arg2;

@end
