/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSObject.h>

#import <AssistantServices/Swift-Protocol.h>

@class NSDictionary;

@interface AFSpeechAudioAnalytics : NSObject <Swift>

{
    NSDictionary *_speechRecognitionFeatures;
    NSDictionary *_acousticFeatures;
}

@property (nonatomic, readonly) NSDictionary *speechRecognitionFeatures;
@property (nonatomic, readonly) NSDictionary *acousticFeatures;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSpeechRecognitionFeatures:(id)arg1 acousticFeatures:(id)arg2;

@end
