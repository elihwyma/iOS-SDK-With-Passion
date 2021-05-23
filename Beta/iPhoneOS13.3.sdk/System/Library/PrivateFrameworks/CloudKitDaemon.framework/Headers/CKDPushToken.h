/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <Foundation/NSObject.h>

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface CKDPushToken : NSObject

{
    NSString *_apsEnvironmentString;
    NSData *_apsToken;
}

@property (retain, nonatomic) NSString *apsEnvironmentString;
@property (retain, nonatomic) NSData *apsToken;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;

@end
