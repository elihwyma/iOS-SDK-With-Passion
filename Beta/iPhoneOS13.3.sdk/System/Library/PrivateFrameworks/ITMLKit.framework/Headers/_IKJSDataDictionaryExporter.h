/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <ITMLKit/IKJSObject.h>

@class IKHandle, IKJSDataObservable, NSMutableArray;

__attribute__((visibility("hidden")))
@interface _IKJSDataDictionaryExporter : IKJSObject

{
    IKHandle *_dataDictionaryHandle;
    NSMutableArray *_touchedPropertyPaths;
    IKJSDataObservable *_dataObservable;
}

@property (weak, nonatomic, readonly) IKJSDataObservable *dataObservable;

+ (id)_dataDictionaryObjectFromObject:(id)arg1 forAccessorSequence:(id)arg2;
+ (id)_dataDictionaryObjectFromValue:(id)arg1 inContext:(id)arg2;
+ (id)_updatedDataDictionaryObject:(id)arg1 fromValue:(id)arg2 forPropertyPaths:(id)arg3 inContext:(id)arg4;
+ (id)_dataDictionaryObjectFromValueRef:(struct OpaqueJSValue *)arg1 inContextRef:(struct OpaqueJSContext *)arg2;

- (id)dataDictionaryObject;
- (id)initWithAppContext:(id)arg1 dataObservable:(id)arg2;
- (void)touchPropertyPath:(id)arg1;

@end
