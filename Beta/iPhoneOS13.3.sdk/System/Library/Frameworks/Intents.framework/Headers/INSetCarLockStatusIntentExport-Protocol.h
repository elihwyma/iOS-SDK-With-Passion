/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class INSpeakableString, NSNumber;

@protocol INSetCarLockStatusIntentExport <Swift>

@property (copy, nonatomic) NSNumber *locked;
@property (copy, nonatomic) INSpeakableString *carName;

- (unsigned short)init;

@end
