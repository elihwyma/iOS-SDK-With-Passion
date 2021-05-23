/*
 Image: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
 */

#import <Foundation/NSObject.h>

#import <SoundAnalysis/Swift-Protocol.h>

@class NSString, SNSoundDetector;

@protocol SNAnalyzing;

@interface SNDetectSoundRequest : NSObject <Swift>

{
    SNSoundDetector *_detector;
    NSString *_soundIdentifier;
}

@property (nonatomic, readonly) NSString *soundIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic, readonly) id <SNAnalyzing> analyzer;

- (id)initWithVGGishBasedMLModel:(id)arg1 soundIdentifier:(id)arg2;
- (id)initWithSoundIdentifier:(id)arg1;

@end
