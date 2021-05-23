/*
 Image: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface CACOnboardingFeature : NSObject

{
    NSString *_titleText;
    NSString *_helperText;
    NSString *_imageBundleName;
}

@property (retain, nonatomic) NSString *titleText;
@property (retain, nonatomic) NSString *helperText;
@property (retain, nonatomic) NSString *imageBundleName;

+ (id)featureWithTitleText:(id)arg1 helperText:(id)arg2 imageBundleName:(id)arg3;
+ (id)featureWithTitleText:(id)arg1 helperText:(id)arg2;

- (id)initWithTitleText:(id)arg1 helperText:(id)arg2 imageBundleName:(id)arg3;

@end
