/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/Swift-Protocol.h>

@class NSData, NSString;

@protocol TSPPassphraseConsumer <Swift>

@property (nonatomic, readonly) NSString *passphraseHint;
@property (nonatomic, readonly) NSData *keychainGenericItem;
@property (nonatomic, readonly) NSString *service;

@end
