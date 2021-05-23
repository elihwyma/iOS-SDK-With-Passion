/*
 Image: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
 */

#import <Foundation/NSObject.h>

@class HMICameraVideoFrame, NSDictionary;

@interface HMICameraVideoAnalyzerSignificantEvent : NSObject

{
    long long _events;
    HMICameraVideoFrame *_videoFrame;
    NSDictionary *_annotationScores;
}

@property (readonly) NSDictionary *annotationScores;
@property (readonly) long long events;
@property (readonly) HMICameraVideoFrame *videoFrame;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (long long)confidenceThatEventOccurred:(long long)arg1;
- (id)initWithEvents:(long long)arg1 annotationScores:(id)arg2 videoFrame:(id)arg3;

@end
