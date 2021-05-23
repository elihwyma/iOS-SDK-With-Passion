/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class NSNumber, NSString;

@protocol INSetRadioStationIntentExport <Swift>

@property (nonatomic) long long radioType;
@property (copy, nonatomic) NSNumber *frequency;
@property (copy, nonatomic) NSString *stationName;
@property (copy, nonatomic) NSString *channel;
@property (copy, nonatomic) NSNumber *presetNumber;

- (unsigned short)init;

@end
