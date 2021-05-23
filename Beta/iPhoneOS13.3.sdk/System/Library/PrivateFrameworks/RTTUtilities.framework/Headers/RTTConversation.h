/*
 Image: /System/Library/PrivateFrameworks/RTTUtilities.framework/RTTUtilities
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString, TUCall;

@interface RTTConversation : NSObject

{
    NSString *_callIdentifier;
    NSMutableArray *_utterances;
    TUCall *_call;
}

@property (retain, nonatomic) NSString *callIdentifier;
@property (retain, nonatomic) NSMutableArray *utterances;
@property (retain, nonatomic) TUCall *call;

+ (_Bool)supportsSecureCoding;
+ (id)conversationWithCall:(id)arg1;
+ (void)conversationWithCallUID:(id)arg1 withCallback:(CDUnknownBlockType)arg2;
+ (void)conversationWithCall:(id)arg1 withCallback:(CDUnknownBlockType)arg2;
+ (id)conversationWithID:(id)arg1 andUtterances:(id)arg2;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)cleanup;
- (_Bool)isEqualToConversation:(id)arg1;
- (id)appendCharacter:(unsigned short)arg1;
- (void)addUtterance:(id)arg1;
- (id)appendStringFromOtherContactPath:(id)arg1;
- (id)lastUtteranceForMe:(_Bool)arg1;
- (id)otherContactPath;
- (id)processBackspaceForMe:(_Bool)arg1;
- (id)mergeUtterancesIfPossible;
- (unsigned long long)utteranceCountForMe:(_Bool)arg1;

@end
