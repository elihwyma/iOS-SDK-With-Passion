/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <iTunesCloud/ICStoreURLRequest.h>

@class NSData, NSString;

@interface ICAuthorizeMachineURLRequest : ICStoreURLRequest

{
    NSString *_keybagPath;
    NSString *_reason;
    NSData *_tokenData;
}

@property (copy, nonatomic) NSString *keybagPath;
@property (copy, nonatomic) NSString *reason;
@property (copy, nonatomic) NSData *tokenData;

- (void)buildStoreURLRequestWithURLRequest:(id)arg1 builderProperties:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end
