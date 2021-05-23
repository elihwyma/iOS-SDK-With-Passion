/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class NSData;

@interface HDHealthServiceOOBInfo : NSObject

{
    NSData *_oobData;
    NSData *_randomValue;
    NSData *_confirmationValue;
    NSData *_btAddress;
}

@property (nonatomic, readonly) NSData *oobData;
@property (nonatomic, readonly) NSData *randomValue;
@property (nonatomic, readonly) NSData *confirmationValue;
@property (nonatomic, readonly) NSData *btAddress;

+ (id)reverseData:(id)arg1;

- (id)description;
- (id)initWithOOBData:(id)arg1 btAddress:(id)arg2;

@end
