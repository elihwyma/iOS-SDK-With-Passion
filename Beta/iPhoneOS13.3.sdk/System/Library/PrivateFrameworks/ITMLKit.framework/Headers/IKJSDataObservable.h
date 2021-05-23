/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <ITMLKit/IKJSEventListenerObject.h>

@class JSManagedValue, JSValue, NSArray, NSMutableArray, _IKJSDataDictionaryExporter;

@interface IKJSDataObservable : IKJSEventListenerObject

{
    JSManagedValue *_managedTargetValue;
    NSMutableArray *_observerRecords;
    _IKJSDataDictionaryExporter *_exporter;
    _Bool _isBoxed;
    _Bool _observersEnabled;
    IKJSDataObservable *_parent;
    NSArray *_parentAccessorSequence;
}

@property (copy, nonatomic, readonly) NSArray *parentAccessorSequence;
@property (weak, nonatomic, readonly) IKJSDataObservable *parent;
@property (weak, nonatomic, readonly) JSValue *targetValue;
@property (nonatomic, readonly) _Bool isBoxed;
@property (nonatomic, readonly) _Bool isPlaceholder;
@property (nonatomic) _Bool observersEnabled;

+ (id)toDataObservable:(id)arg1 proxy:(id *)arg2;
+ (id)_proxyHandlerForValue:(id)arg1 boxed:(_Bool)arg2 context:(id)arg3;
+ (id)toDataObservable:(id)arg1;
+ (id)jsExportedProperties;

- (id)init;
- (void)removeObserver:(id)arg1;
- (void)setTargetValue:(id)arg1;
- (id)valueForPropertyPath:(id)arg1 boxed:(_Bool)arg2;
- (id)dataDictionaryObject;
- (void)touchPropertyPath:(id)arg1;
- (id)_initWithTargetValue:(id)arg1 boxed:(_Bool)arg2;
- (id)exportValue;
- (void)_updateValueAtPropertyPath:(id)arg1 touch:(_Bool)arg2 withBlock:(CDUnknownBlockType)arg3;
- (void)setValue:(id)arg1 forPropertyPath:(id)arg2;
- (id)valueForAccessorSequence:(id)arg1 closestParent:(id *)arg2 accessorSequenceFromClosestParent:(id *)arg3;
- (void)touchPathWithAccessorSequence:(id)arg1 extraInfo:(id)arg2;
- (id)extraInfoForChangeInPathWithAccessorSequence:(id)arg1 extraInfo:(id)arg2;
- (void)setParent:(id)arg1 accessorSequence:(id)arg2;
- (void)setPropertyPath:(id)arg1:(id)arg2;
- (id)getPropertyPath:(id)arg1;
- (void)resetValueForPropertyPath:(id)arg1;
- (void)addObserver:(id)arg1 forPropertyPathWithString:(id)arg2;
- (id)initWithTargetValue:(id)arg1;

@end
