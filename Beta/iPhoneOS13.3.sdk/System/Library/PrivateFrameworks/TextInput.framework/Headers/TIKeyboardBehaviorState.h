/*
 Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

#import <Foundation/NSObject.h>

@interface TIKeyboardBehaviorState : NSObject

{
    _Bool hasInput;
    _Bool hasCandidates;
    _Bool hasCandidateSelected;
    _Bool hasNextPage;
    _Bool showsExtendedList;
    _Bool followsZhuyin;
    _Bool spaceConfirmation;
    _Bool hardwareKeyboardMode;
    _Bool followsIncompleteRomaji;
    _Bool _hasAutocorrection;
    _Bool _userSelectedCurrentCandidate;
    _Bool _showsCandidatesInLayout;
}

@property (nonatomic) _Bool hasInput;
@property (nonatomic) _Bool hasAutocorrection;
@property (nonatomic) _Bool hasCandidates;
@property (nonatomic) _Bool hasCandidateSelected;
@property (nonatomic) _Bool userSelectedCurrentCandidate;
@property (nonatomic) _Bool hasNextPage;
@property (nonatomic) _Bool showsExtendedList;
@property (nonatomic) _Bool followsZhuyin;
@property (nonatomic) _Bool spaceConfirmation;
@property (nonatomic) _Bool showsCandidatesInLayout;
@property (nonatomic) _Bool hardwareKeyboardMode;
@property (nonatomic) _Bool followsIncompleteRomaji;

@end
