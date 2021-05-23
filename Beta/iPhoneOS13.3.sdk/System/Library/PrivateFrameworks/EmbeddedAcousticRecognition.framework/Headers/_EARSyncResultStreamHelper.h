/*
 Image: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
 */

#import <NSObject.h>

@class NSArray, NSError, NSString;

@protocol OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface _EARSyncResultStreamHelper : NSObject

{
    NSObject<OS_dispatch_semaphore> *_finishSemaphore;
    NSError *_error;
    NSArray *_results;
}

@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) NSArray *results;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)waitForCompletion;
- (void)speechRecognizer:(id)arg1 didRecognizePartialResult:(id)arg2;
- (void)speechRecognizer:(id)arg1 didFinishRecognitionWithError:(id)arg2;
- (void)speechRecognizer:(id)arg1 didRecognizeFinalResults:(id)arg2;

@end
