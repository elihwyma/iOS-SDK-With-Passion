/*
 Image: /System/Library/PrivateFrameworks/TextToSpeech.framework/Frameworks/TextToSpeechBundleSupport.framework/TextToSpeechBundleSupport
 */

#import <NSObject.h>

@class NSArray, NSString;

@interface TTSBoostRuleMatch : NSObject

{
    NSString *_rule;
    long long _boostRuleIndex;
    NSArray *_groupings;
    struct _NSRange _range;
}

@property (retain, nonatomic) NSString *rule;
@property (nonatomic) struct _NSRange range;
@property (nonatomic) long long boostRuleIndex;
@property (retain, nonatomic) NSArray *groupings;

- (id)description;

@end
