/*
 Image: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol CACVoiceOverDescribable;

@interface CACVoiceOverItemShortDescriptionPair : NSObject

{
    id <CACVoiceOverDescribable> _item;
    NSString *_shortDescription;
}

@property (retain, nonatomic) id <CACVoiceOverDescribable> item;
@property (retain, nonatomic) NSString *shortDescription;

@end
