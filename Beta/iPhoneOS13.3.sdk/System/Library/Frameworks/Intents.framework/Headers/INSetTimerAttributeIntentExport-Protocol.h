/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class INSpeakableString, INTimer;

@protocol INSetTimerAttributeIntentExport <Swift>

@property (copy, nonatomic) INTimer *targetTimer;
@property (nonatomic) double toDuration;
@property (copy, nonatomic) INSpeakableString *toLabel;

- (unsigned short)init;

@end
