/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class NSArray, NSString;

@protocol INSpeakable <Swift>

@property (nonatomic, readonly) NSString *spokenPhrase;
@property (nonatomic, readonly) NSString *pronunciationHint;
@property (nonatomic, readonly) NSString *vocabularyIdentifier;
@property (nonatomic, readonly) NSArray *alternativeSpeakableMatches;
@property (nonatomic, readonly) NSString *identifier;

@end
