/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <Foundation/NSObject.h>

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface CKDShareTokenMetadata : NSObject

{
    _Bool _forceDSRefetch;
    NSString *_routingKey;
    NSData *_shortSharingTokenData;
    NSData *_publicTokenData;
    NSData *_privateTokenData;
}

@property (retain, nonatomic) NSString *routingKey;
@property (retain, nonatomic) NSData *shortSharingTokenData;
@property (nonatomic, readonly) NSString *shortSharingToken;
@property (nonatomic, readonly) NSData *shortSharingTokenHashData;
@property (nonatomic) _Bool forceDSRefetch;
@property (retain, nonatomic) NSData *publicTokenData;
@property (retain, nonatomic) NSData *privateTokenData;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end
