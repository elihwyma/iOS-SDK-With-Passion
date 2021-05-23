/*
 Image: /System/Library/PrivateFrameworks/CoreSuggestionsML.framework/CoreSuggestionsML
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface SGQuickResponsesClassificationParameters : NSObject

{
    double _positiveSamplingRate;
    double _negativeSamplingRate;
    unsigned long long _maxPromptLength;
    double _maxPromptWindowSeconds;
    NSString *_promptJoiningString;
}

@property (nonatomic, readonly) double positiveSamplingRate;
@property (nonatomic, readonly) double negativeSamplingRate;
@property (nonatomic, readonly) unsigned long long maxPromptLength;
@property (nonatomic, readonly) double maxPromptWindowSeconds;
@property (nonatomic, readonly) NSString *promptJoiningString;

- (id)initWithDictionary:(id)arg1;

@end
