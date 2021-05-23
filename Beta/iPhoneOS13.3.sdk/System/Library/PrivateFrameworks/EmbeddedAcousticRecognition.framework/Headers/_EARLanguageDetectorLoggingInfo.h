/*
 Image: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
 */

#import <NSObject.h>

@class NSDictionary, _EARLanguageDetectorRequestContext;

@interface _EARLanguageDetectorLoggingInfo : NSObject

{
    NSDictionary *_loggingDict;
    _EARLanguageDetectorRequestContext *_context;
}

@property (copy, nonatomic) NSDictionary *loggingDict;
@property (copy, nonatomic) _EARLanguageDetectorRequestContext *context;

@end
