/*
 Image: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
 */

#import <Foundation/NSObject.h>

@class CACRecordedUserActionFlow, NSDictionary, NSString;

@interface CACRecordedUserAction : NSObject

{
    long long _type;
    NSString *_identifier;
    NSDictionary *_targetAttributes;
    _Bool _canIgnoreFailure;
    id _object;
    CACRecordedUserActionFlow *_ownerFlow;
}

@property (readonly) _Bool isSpokenCommand;
@property (readonly) _Bool isReplayableGesture;
@property (readonly) _Bool canIgnoreFailure;
@property (weak) CACRecordedUserActionFlow *ownerFlow;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSpokenCommand:(id)arg1;
- (void)beginExecutingWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)plistDescription;
- (id)_derivedTargetAttributesFromSpokenCommand:(id)arg1;
- (id)_dictionaryFromRect:(struct CGRect)arg1;
- (struct CGRect)_rectFromDictionary:(id)arg1;
- (id)_labeledElementsFromMatchingCriteria:(id)arg1;
- (id)spokenCommand;

@end
