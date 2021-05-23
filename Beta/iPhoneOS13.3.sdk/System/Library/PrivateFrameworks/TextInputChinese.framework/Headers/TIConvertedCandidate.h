/*
 Image: /System/Library/PrivateFrameworks/TextInputChinese.framework/TextInputChinese
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString, TIKeyboardCandidate;

@interface TIConvertedCandidate : NSObject

{
    TIKeyboardCandidate *_candidate;
    NSString *_convertedInput;
    NSString *_replacedAmbiguousPinyinSyllable;
    NSString *_replacementUnambiguousPinyinSyllable;
    NSArray *_geometryData;
    NSArray *_touchData;
}

@property (retain, nonatomic) TIKeyboardCandidate *candidate;
@property (copy, nonatomic) NSString *convertedInput;
@property (nonatomic, readonly) NSString *revertedInput;
@property (copy, nonatomic) NSString *replacedAmbiguousPinyinSyllable;
@property (copy, nonatomic) NSString *replacementUnambiguousPinyinSyllable;
@property (copy, nonatomic) NSArray *geometryData;
@property (copy, nonatomic) NSArray *touchData;

- (id)initWithCandidate:(id)arg1;
- (id)initWithCandidate:(id)arg1 replacedAmbiguousPinyinSyllable:(id)arg2 replacementUnambiguousPinyinSyllable:(id)arg3 convertedInput:(id)arg4;

@end
