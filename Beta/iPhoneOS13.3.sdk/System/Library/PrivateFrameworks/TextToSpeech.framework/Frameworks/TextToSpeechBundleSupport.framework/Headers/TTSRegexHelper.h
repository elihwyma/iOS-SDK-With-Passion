/*
 Image: /System/Library/PrivateFrameworks/TextToSpeech.framework/Frameworks/TextToSpeechBundleSupport.framework/TextToSpeechBundleSupport
 */

#import <NSObject.h>

@class NSMutableDictionary, NSMutableSet, NSRegularExpression;

@protocol OS_dispatch_queue;

@interface TTSRegexHelper : NSObject

{
    struct vector<boost::basic_regex<char, boost::regex_traits<char, boost::cpp_regex_traits<char>>>, std::__1::allocator<boost::basic_regex<char, boost::regex_traits<char, boost::cpp_regex_traits<char>>>>> _boostRegexes;
    NSMutableSet *_duplicateChecker;
    NSObject<OS_dispatch_queue> *_ttsRegexQueue;
    NSMutableDictionary *_nsRules;
    NSMutableDictionary *_boostRules;
    NSRegularExpression *_escapeStripper;
    int _regexStyle;
}

@property (nonatomic) int regexStyle;

+ (id)sharedInstance;

- (id)init;
- (id).cxx_construct;
- (void)_addRules:(id)arg1;
- (void)_addNSRule:(id)arg1 ruleApplication:(id)arg2 caseInsensitive:(_Bool)arg3;
- (id)_boostApplyRulesForText:(id)arg1 rangeAdjustments:(id)arg2;
- (id)_nsApplyRulesForText:(id)arg1 rangeAdjustments:(id)arg2;
- (id)_calculatedUTF8Offsets:(id)arg1;
- (id)_boostApplyMatches:(id)arg1 rangeAdjustments:(id)arg2 text:(id)arg3 logging:(id)arg4;
- (id)_processReplacementStringForSpecialCharacters:(id)arg1;
- (void)addRules:(id)arg1;
- (id)applyRulesForText:(id)arg1 rangeAdjustments:(id)arg2;
- (id)regexRules;
- (_Bool)hasStoredRules;
- (void)resetStoredRules;

@end
