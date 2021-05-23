/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class INSpeakableString;

@protocol INActivateCarSignalIntentExport <Swift>

@property (copy, nonatomic) INSpeakableString *carName;
@property (nonatomic) unsigned long long signals;

- (unsigned short)init;

@end
