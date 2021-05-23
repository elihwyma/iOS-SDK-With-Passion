/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class INSpeakableString, NSNumber, NSString;

@protocol INSetProfileInCarIntentExport <Swift>

@property (copy, nonatomic) NSNumber *profileNumber;
@property (copy, nonatomic) NSString *profileName;
@property (copy, nonatomic) NSNumber *defaultProfile;
@property (copy, nonatomic) INSpeakableString *carName;

- (unsigned short)init;

@end
