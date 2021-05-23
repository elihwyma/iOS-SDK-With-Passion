/*
 Image: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
 */

#import <NSObject.h>

@class NSDictionary;

@interface _EARAudioAnalytics : NSObject

{
    NSDictionary *_speechRecognitionFeatures;
    NSDictionary *_acousticFeatures;
}

@property (copy, nonatomic, readonly) NSDictionary *speechRecognitionFeatures;
@property (copy, nonatomic, readonly) NSDictionary *acousticFeatures;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_initWithSpeechRecognitionFeatures:(id)arg1 acousticFeatures:(id)arg2;

@end
