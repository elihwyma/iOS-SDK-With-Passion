/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSObject.h>

#import <AssistantServices/Swift-Protocol.h>

@class NSArray;

@interface AFSpeechAcousticFeature : NSObject <Swift>

{
    NSArray *_acousticFeatureValuePerFrame;
    double _frameDuration;
}

@property (nonatomic, readonly) NSArray *acousticFeatureValuePerFrame;
@property (nonatomic, readonly) double frameDuration;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAcousticFeatureValue:(id)arg1 frameDuration:(double)arg2;

@end
