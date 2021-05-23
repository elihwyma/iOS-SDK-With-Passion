/*
 Image: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
 */

#import <NSObject.h>

@class NSLocale, _EARFormatter;

@protocol OS_dispatch_queue;

@interface EMTTokenizer : NSObject

{
    _EARFormatter *_formatter;
    NSObject<OS_dispatch_queue> *_queue;
    NSLocale *_outputLocale;
}

@property (nonatomic, readonly) NSLocale *outputLocale;

- (id)initWithModelURL:(id)arg1;
- (id)format:(id)arg1 preToPostItnMap:(id)arg2;
- (id)format:(id)arg1;

@end
