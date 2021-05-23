/*
 Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import <AppleAccount/AAResponse.h>

@class NSData, NSString, NSValue;

@interface AAPhotoResponse : AAResponse

{
    NSData *_photoData;
    NSValue *_cropRect;
    NSString *_serverCacheTag;
}

@property (nonatomic, readonly) NSData *photoData;
@property (nonatomic, readonly) NSValue *cropRect;
@property (nonatomic, readonly) NSString *serverCacheTag;

- (id)initWithHTTPResponse:(id)arg1 data:(id)arg2;

@end
