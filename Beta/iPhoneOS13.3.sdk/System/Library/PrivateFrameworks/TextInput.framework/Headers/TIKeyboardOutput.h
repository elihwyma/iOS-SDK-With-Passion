/*
 Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

#import <Foundation/NSObject.h>

@class NSIndexSet, NSMutableDictionary, NSString, TIKeyboardCandidate;

@interface TIKeyboardOutput : NSObject

{
    _Bool _unmarkIfNecessary;
    _Bool _shouldSendCurrentLocation;
    TIKeyboardCandidate *_acceptedCandidate;
    NSString *_textToCommit;
    unsigned long long _deletionCount;
    NSString *_insertionText;
    unsigned long long _forwardDeletionCount;
    NSString *_insertionTextAfterSelection;
    TIKeyboardCandidate *_shortcutConversion;
    NSIndexSet *_handwritingStrokesToDelete;
    NSMutableDictionary *_customInfo;
}

@property (retain, nonatomic) TIKeyboardCandidate *acceptedCandidate;
@property (copy, nonatomic) NSString *textToCommit;
@property (nonatomic) _Bool unmarkIfNecessary;
@property (nonatomic) unsigned long long deletionCount;
@property (copy, nonatomic) NSString *insertionText;
@property (nonatomic) unsigned long long forwardDeletionCount;
@property (copy, nonatomic) NSString *insertionTextAfterSelection;
@property (retain, nonatomic) TIKeyboardCandidate *shortcutConversion;
@property (copy, nonatomic) NSIndexSet *handwritingStrokesToDelete;
@property (nonatomic) _Bool shouldSendCurrentLocation;
@property (retain, nonatomic) NSMutableDictionary *customInfo;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)deleteBackward;
- (void)insertText:(id)arg1;
- (void)deleteBackward:(unsigned long long)arg1;
- (void)deleteForward:(unsigned long long)arg1;
- (void)insertTextAfterSelection:(id)arg1;
- (void)deleteForward;

@end
