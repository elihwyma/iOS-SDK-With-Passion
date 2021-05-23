/*
 Image: /System/Library/PrivateFrameworks/TextToSpeech.framework/Frameworks/TextToSpeechBundleSupport.framework/TextToSpeechBundleSupport
 */

#import <NSObject.h>

@interface TTSUTF8Offset : NSObject

{
    long long _cStringOffset;
    long long _actualPos;
    long long _actualLength;
    long long _lengthDifference;
}

@property (nonatomic) long long cStringOffset;
@property (nonatomic) long long actualPos;
@property (nonatomic) long long actualLength;
@property (nonatomic) long long lengthDifference;

- (id)description;

@end
