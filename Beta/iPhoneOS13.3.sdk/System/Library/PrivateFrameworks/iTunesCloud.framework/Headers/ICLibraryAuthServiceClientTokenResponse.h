/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <NSObject.h>

#import <iTunesCloud/Swift-Protocol.h>

@class ICLibraryAuthServiceClientTokenResult, NSString;

@interface ICLibraryAuthServiceClientTokenResponse : NSObject <Swift>

{
    _Bool _success;
    int _resultCode;
    NSString *_serverHostName;
    long long _serverInstance;
    ICLibraryAuthServiceClientTokenResult *_tokenResult;
}

@property (nonatomic, readonly) int resultCode;
@property (copy, nonatomic, readonly) NSString *serverHostName;
@property (nonatomic, readonly) long long serverInstance;
@property (nonatomic, getter=isSuccess) _Bool success;
@property (copy, nonatomic, readonly) ICLibraryAuthServiceClientTokenResult *tokenResult;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithResponseDictionary:(id)arg1;
- (id)initWithResultCode:(int)arg1;

@end
