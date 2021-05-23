/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class NSNumber;

@protocol INStartCallIntentResponseExport <Swift>

@property (nonatomic, readonly) long long code;
@property (copy, nonatomic) NSNumber *shouldDoEmergencyCountdown;
@property (nonatomic) long long confirmationReason;

@end
