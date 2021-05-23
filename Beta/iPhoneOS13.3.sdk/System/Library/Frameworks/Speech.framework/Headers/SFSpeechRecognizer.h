/*
 Image: /System/Library/Frameworks/Speech.framework/Speech
 */

#import <Foundation/NSObject.h>

@class AFDictationConnection, CXCallObserver, NSLocale, NSOperationQueue, NSString;

@protocol NSObject, SFSpeechRecognizerDelegate;

@interface SFSpeechRecognizer : NSObject

{
    AFDictationConnection *_dictationConnection;
    NSString *_languageCode;
    CXCallObserver *_callObserver;
    id <NSObject> _facetimeObserver;
    id <NSObject> _foregroundObserver;
    id <NSObject> _preferencesObserver;
    _Bool _supportsOnDeviceRecognition;
    NSLocale *_locale;
    id <SFSpeechRecognizerDelegate> _delegate;
    long long _defaultTaskHint;
    NSOperationQueue *_queue;
}

@property (nonatomic, readonly, getter=_isAvailableForForcedOfflineRecognition) _Bool _availableForForcedOfflineRecognition;
@property (nonatomic, readonly, getter=isAvailable) _Bool available;
@property (copy, nonatomic, readonly) NSLocale *locale;
@property (nonatomic) _Bool supportsOnDeviceRecognition;
@property (weak, nonatomic) id <SFSpeechRecognizerDelegate> delegate;
@property (nonatomic) long long defaultTaskHint;
@property (retain, nonatomic) NSOperationQueue *queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)initialize;
+ (long long)authorizationStatus;
+ (void)requestAuthorization:(CDUnknownBlockType)arg1;
+ (id)supportedLocales;
+ (void)_fetchSupportedForcedOfflineLocalesWithCompletion:(CDUnknownBlockType)arg1;

- (id)init;
- (void)dealloc;
- (id)initWithLocale:(id)arg1;
- (void)dictationConnnectionDidChangeAvailability:(id)arg1;
- (void)callObserver:(id)arg1 callChanged:(id)arg2;
- (id)recognitionTaskWithRequest:(id)arg1 delegate:(id)arg2;
- (void)_requestOfflineDictationSupportWithCompletion:(CDUnknownBlockType)arg1;
- (void)_informDelegateOfPreferencesChange;
- (void)_informDelegateOfAvailabilityChange;
- (_Bool)_isInternalTaskHint:(long long)arg1;
- (id)recognitionTaskWithRequest:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;

@end
