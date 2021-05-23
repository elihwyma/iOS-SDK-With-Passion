/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class INSpeakableString;

@protocol INSearchForTimersIntentExport <Swift>

@property (copy, nonatomic) INSpeakableString *label;
@property (nonatomic) double duration;
@property (nonatomic) long long state;
@property (nonatomic) long long type;

- (unsigned short)init;

@end
