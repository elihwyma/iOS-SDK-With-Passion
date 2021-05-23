/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <Foundation/NSObject.h>

@class NSDictionary;

@interface CSNovDetectorResult : NSObject

{
    _Bool _earlyWarning;
    _Bool _isRescoring;
    float _bestScore;
    unsigned long long _sampleFed;
    unsigned long long _bestPhrase;
    unsigned long long _bestStart;
    unsigned long long _bestEnd;
}

@property (nonatomic) unsigned long long sampleFed;
@property (nonatomic) unsigned long long bestPhrase;
@property (nonatomic) unsigned long long bestStart;
@property (nonatomic) unsigned long long bestEnd;
@property (nonatomic) float bestScore;
@property (nonatomic) _Bool earlyWarning;
@property (nonatomic) _Bool isRescoring;
@property (nonatomic, readonly) NSDictionary *dictionary;

- (id)initWithResult:(id)arg1;

@end
