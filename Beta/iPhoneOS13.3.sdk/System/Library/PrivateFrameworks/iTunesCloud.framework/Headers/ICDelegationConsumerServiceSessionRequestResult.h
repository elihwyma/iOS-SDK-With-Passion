/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <NSObject.h>

@class ICDelegateToken, NSError, NSString;

@interface ICDelegationConsumerServiceSessionRequestResult : NSObject

{
    ICDelegateToken *_delegateToken;
    NSError *_resultError;
    NSString *_storefrontIdentifier;
}

@property (copy, nonatomic, readonly) ICDelegateToken *delegateToken;
@property (copy, nonatomic, readonly) NSError *resultError;
@property (copy, nonatomic, readonly) NSString *storefrontIdentifier;

- (id)initWithDelegateToken:(id)arg1 storefrontIdentifier:(id)arg2 resultError:(id)arg3;

@end
