/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <Foundation/NSObject.h>

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface CKDShortTokenLookupInfo : NSObject

{
    _Bool _shouldFetchRootRecord;
    _Bool _forceDSRefetch;
    NSString *_routingKey;
    NSData *_shortSharingTokenHashData;
}

@property (retain, nonatomic) NSString *routingKey;
@property (retain, nonatomic) NSData *shortSharingTokenHashData;
@property (nonatomic) _Bool shouldFetchRootRecord;
@property (nonatomic) _Bool forceDSRefetch;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
