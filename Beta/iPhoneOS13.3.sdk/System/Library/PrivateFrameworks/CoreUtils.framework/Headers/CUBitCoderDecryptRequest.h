/*
 Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

#import <NSObject.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface CUBitCoderDecryptRequest : NSObject

{
    NSData *_aad;
    unsigned long long _authTagLength;
    NSData *_data;
    NSData *_nonce;
}

@property (copy, nonatomic) NSData *aad;
@property (nonatomic) unsigned long long authTagLength;
@property (copy, nonatomic) NSData *data;
@property (copy, nonatomic) NSData *nonce;

@end
