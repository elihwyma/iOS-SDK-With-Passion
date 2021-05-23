/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <Foundation/NSObject.h>

@class HMFUnfairLock, NSData;

__attribute__((visibility("hidden")))
@interface HMDIdentifierSaltStore : NSObject

{
    HMFUnfairLock *_lock;
    NSData *_identifierSalt;
    NSData *_assistantIdentifierSalt;
}

@property (retain, nonatomic) NSData *identifierSalt;
@property (retain, nonatomic) NSData *assistantIdentifierSalt;

- (id)init;

@end
