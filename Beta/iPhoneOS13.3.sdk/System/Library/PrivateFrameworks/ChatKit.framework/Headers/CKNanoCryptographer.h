/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <Foundation/NSObject.h>

@class NSData, NSString;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface CKNanoCryptographer : NSObject

{
    NSData *_deviceSalt;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSString *_cachedRecipientName;
    NSString *_cachedRecipientDigest;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, readonly) NSData *deviceSalt;
@property (copy, nonatomic) NSString *cachedRecipientName;
@property (copy, nonatomic) NSString *cachedRecipientDigest;

+ (id)sharedCryptographer;

- (id)init;
- (id)stringDigestForName:(id)arg1;

@end
