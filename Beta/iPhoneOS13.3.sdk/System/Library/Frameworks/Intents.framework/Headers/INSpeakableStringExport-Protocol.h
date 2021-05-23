/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class NSString;

@protocol INSpeakableStringExport <Swift>

@property (retain, nonatomic) NSString *spokenPhrase;
@property (retain, nonatomic) NSString *pronunciationHint;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *vocabularyIdentifier;

- (unsigned short)init;

@end
