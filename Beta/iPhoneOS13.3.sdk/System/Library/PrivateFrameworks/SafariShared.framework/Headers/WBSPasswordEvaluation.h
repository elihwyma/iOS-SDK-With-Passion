/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface WBSPasswordEvaluation : NSObject

{
    double _guessesRequired;
    NSString *_password;
    NSArray *_patternMatches;
    long long _evaluationType;
}

@property (copy, nonatomic, readonly) NSString *password;
@property (copy, nonatomic, readonly) NSArray *patternMatches;
@property (nonatomic, readonly) long long evaluationType;
@property (nonatomic, readonly) double guessesRequired;
@property (nonatomic, readonly) unsigned long long strength;
@property (nonatomic, readonly) _Bool userShouldBeShownPassiveWarning;
@property (nonatomic, readonly) _Bool userShouldBeShownActiveWarning;
@property (nonatomic, readonly) NSString *userFeedbackString;

- (id)initWithEvaluationType:(long long)arg1 password:(id)arg2 patternMatches:(id)arg3 guessesRequired:(double)arg4;
- (id)_bestPatternMatchOfType:(unsigned long long)arg1;
- (_Bool)_shouldShowUserFeedbackStringsForWordListPatternMatch:(id)arg1;
- (id)_passwordFeedbackStrings;
- (id)compactDescriptionWithPasswordColumnWidth:(unsigned long long)arg1 includePatternMatches:(_Bool)arg2;

@end
