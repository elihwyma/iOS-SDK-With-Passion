/*
 Image: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
 */

#import <Foundation/NSObject.h>

#import <SoundAnalysis/Swift-Protocol.h>

@class NSString, SNSpeechUtteranceDetector;

@protocol SNAnalyzing;

@interface SNDetectSpeechUtteranceRequest : NSObject <Swift>

{
    SNSpeechUtteranceDetector *_detector;
}

@property (readonly) double decisionDelay;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic, readonly) id <SNAnalyzing> analyzer;

- (id)init;
- (id)initWithRequestType:(long long)arg1;
- (_Bool)detected;

@end
