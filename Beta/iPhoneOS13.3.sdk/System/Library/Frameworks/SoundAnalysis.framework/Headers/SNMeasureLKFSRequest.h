/*
 Image: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
 */

#import <Foundation/NSObject.h>

#import <SoundAnalysis/Swift-Protocol.h>

@class NSString, SNAudioLevelMeasurer;

@protocol SNAnalyzing;

@interface SNMeasureLKFSRequest : NSObject <Swift>

{
    SNAudioLevelMeasurer *_detector;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic, readonly) id <SNAnalyzing> analyzer;

- (id)init;

@end
