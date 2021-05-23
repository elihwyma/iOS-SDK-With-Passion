/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class NSString;

@protocol INPlayMessageSoundIntentExport <Swift>

@property (nonatomic) long long soundType;
@property (copy, nonatomic) NSString *messageIdentifier;

- (unsigned short)init;

@end
