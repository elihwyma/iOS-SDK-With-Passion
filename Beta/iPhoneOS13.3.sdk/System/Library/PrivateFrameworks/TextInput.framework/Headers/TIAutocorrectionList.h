/*
 Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

#import <Foundation/NSObject.h>

@class NSArray, TIKeyboardCandidate;

@interface TIAutocorrectionList : NSObject

{
    _Bool _containsProactiveTriggers;
    TIKeyboardCandidate *_autocorrection;
    NSArray *_predictions;
    NSArray *_emojiList;
    NSArray *_proactiveTriggers;
}

@property (nonatomic) _Bool containsProactiveTriggers;
@property (nonatomic, readonly) TIKeyboardCandidate *autocorrection;
@property (nonatomic, readonly) NSArray *predictions;
@property (nonatomic, readonly) NSArray *emojiList;
@property (nonatomic, readonly) NSArray *proactiveTriggers;
@property (nonatomic, readonly) NSArray *candidates;
@property (nonatomic, readonly) _Bool shouldAcceptTopCandidate;

+ (_Bool)supportsSecureCoding;
+ (id)listWithAutocorrection:(id)arg1 predictions:(id)arg2;
+ (id)listWithPredictions:(id)arg1 emojiList:(id)arg2 proactiveTriggers:(id)arg3;
+ (id)listWithAutocorrection:(id)arg1 predictions:(id)arg2 emojiList:(id)arg3;
+ (id)listWithAutocorrection:(id)arg1;
+ (id)listWithAutocorrection:(id)arg1 predictions:(id)arg2 emojiList:(id)arg3 proactiveTriggers:(id)arg4;
+ (id)listWithPredictions:(id)arg1 proactiveTriggers:(id)arg2;
+ (id)autocorrectionListWithCandidates:(id)arg1 shouldAcceptTopCandidate:(_Bool)arg2;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAutocorrection:(id)arg1 predictions:(id)arg2 emojiList:(id)arg3 proactiveTriggers:(id)arg4;
- (id)initWithAutocorrectionAlternativeProactiveTrigger:(id)arg1 predictions:(id)arg2 emojiList:(id)arg3 proactiveTriggers:(id)arg4;
- (id)initWithCandidates:(id)arg1;
- (id)initWithCandidates:(id)arg1 shouldAcceptTopCandidate:(_Bool)arg2;

@end
