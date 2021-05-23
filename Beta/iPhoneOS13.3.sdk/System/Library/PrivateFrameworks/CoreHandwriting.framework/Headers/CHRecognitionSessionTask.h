/*
 Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

#import <Foundation/NSObject.h>

@class CHRecognitionSessionResult, NSArray, NSSet;

@protocol CHRecognitionSessionTaskDelegate, CHStrokeProvider, OS_dispatch_queue;

@interface CHRecognitionSessionTask : NSObject

{
    _Bool _cancelled;
    _Bool _saveInputDrawings;
    _Bool _strokeGroupingOnly;
    CHRecognitionSessionResult *_inputResult;
    long long _status;
    id <CHRecognitionSessionTaskDelegate> _delegate;
    NSArray *_locales;
    NSArray *_preferredLocales;
    id <CHStrokeProvider> _strokeProvider;
    CHRecognitionSessionResult *_outputResult;
    long long _recognitionEnvironment;
    NSSet *_forceRecognitionStrokeGroupIdentifiers;
    NSObject<OS_dispatch_queue> *__recognizersQueue;
}

@property (retain, nonatomic, setter=_setOutputResult:) CHRecognitionSessionResult *outputResult;
@property (nonatomic, setter=_setStatus:) long long status;
@property (retain, nonatomic, readonly) NSObject<OS_dispatch_queue> *_recognizersQueue;
@property _Bool cancelled;
@property (retain, nonatomic, readonly) CHRecognitionSessionResult *inputResult;
@property (nonatomic) id <CHRecognitionSessionTaskDelegate> delegate;
@property (copy, nonatomic, readonly) NSArray *locales;
@property (copy, nonatomic, readonly) NSArray *preferredLocales;
@property (retain, nonatomic, readonly) id <CHStrokeProvider> strokeProvider;
@property (nonatomic, readonly) long long recognitionEnvironment;
@property (nonatomic) _Bool saveInputDrawings;
@property (copy, nonatomic) NSSet *forceRecognitionStrokeGroupIdentifiers;
@property (nonatomic) _Bool strokeGroupingOnly;

- (id)init;
- (void)dealloc;
- (void)cancel;
- (void)main;
- (id)clutterFilter;
- (id)newStrokeClassifier;
- (id)newGroupingManager;
- (id)recognitionResultsForGroupingResult:(id)arg1 groupingManager:(id)arg2;
- (void)_logResultsIfAppropriateWithStrokeProvider:(id)arg1;
- (_Bool)_isTransitionValidFromStatus:(long long)arg1 toStatus:(long long)arg2;
- (id)_textRecognitionResultsForTextStrokeGroup:(id)arg1 groupingManager:(id)arg2;
- (id)_recognitionResultsForNonTextStrokeGroup:(id)arg1 groupingManager:(id)arg2;
- (id)_tokenizedTextResultForDrawing:(id)arg1 usingRecognizer:(id)arg2 isRemoteRecognizer:(_Bool)arg3 locale:(id)arg4 strokeLimit:(long long)arg5 recognitionError:(id *)arg6;
- (id)initWithLocales:(id)arg1 preferredLocales:(id)arg2 strokeProvider:(id)arg3 inputResult:(id)arg4 recognitionQOSClass:(unsigned int)arg5 recognitionEnvironment:(long long)arg6;

@end
