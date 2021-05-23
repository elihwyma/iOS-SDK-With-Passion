/*
 Image: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
 */

#import <Foundation/NSObject.h>

@class NSString, UIImage;

@interface CACDisambiguationItem : NSObject

{
    long long _type;
}

@property (nonatomic) long long type;
@property (readonly) NSString *displayName;
@property (readonly) NSString *displayDescription;
@property (readonly) UIImage *displayImage;

- (void)startInteraction;

@end
