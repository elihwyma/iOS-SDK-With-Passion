/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class INSpeakableString, NSNumber;

@protocol INSetDefrosterSettingsInCarIntentExport <Swift>

@property (copy, nonatomic) NSNumber *enable;
@property (nonatomic) long long defroster;
@property (copy, nonatomic) INSpeakableString *carName;

- (unsigned short)init;

@end
