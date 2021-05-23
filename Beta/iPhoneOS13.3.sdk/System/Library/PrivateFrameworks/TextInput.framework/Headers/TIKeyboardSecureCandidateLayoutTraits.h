/*
 Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

#import <Foundation/NSObject.h>

@class TIKeyboardSecureCandidateTextTraits;

@interface TIKeyboardSecureCandidateLayoutTraits : NSObject

{
    _Bool _forceSingleLineLayout;
    unsigned int _headerInliningBehavior;
    TIKeyboardSecureCandidateTextTraits *_headerTraitsInOnlyLine;
    TIKeyboardSecureCandidateTextTraits *_headerTraitsInFirstLine;
    TIKeyboardSecureCandidateTextTraits *_inputTraitsInOnlyLine;
    TIKeyboardSecureCandidateTextTraits *_inputTraitsInFirstAndSecondLines;
    TIKeyboardSecureCandidateTextTraits *_inputTraitsInSecondLine;
}

@property (nonatomic) _Bool forceSingleLineLayout;
@property (nonatomic) unsigned int headerInliningBehavior;
@property (retain, nonatomic) TIKeyboardSecureCandidateTextTraits *headerTraitsInOnlyLine;
@property (retain, nonatomic) TIKeyboardSecureCandidateTextTraits *headerTraitsInFirstLine;
@property (retain, nonatomic) TIKeyboardSecureCandidateTextTraits *inputTraitsInOnlyLine;
@property (retain, nonatomic) TIKeyboardSecureCandidateTextTraits *inputTraitsInFirstAndSecondLines;
@property (retain, nonatomic) TIKeyboardSecureCandidateTextTraits *inputTraitsInSecondLine;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
