/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class _INPBDictionary;

@protocol _INPBPlayMediaIntentResponse <Swift>

@property (retain, nonatomic) _INPBDictionary *nowPlayingInfo;
@property (nonatomic, readonly) _Bool hasNowPlayingInfo;

@end
