/*
 Image: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
 */

#import <NSObject.h>

@class NSDictionary;

@interface _EARLanguageDetectorResult : NSObject

{
    _Bool _isConfident;
    NSDictionary *_confidences;
}

@property (copy, nonatomic) NSDictionary *confidences;
@property (nonatomic) _Bool isConfident;

@end
