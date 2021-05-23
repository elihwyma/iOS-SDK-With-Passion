/*
 Image: /System/Library/PrivateFrameworks/SignpostSupport.framework/SignpostSupport
 */

#import <Foundation/NSObject.h>

@class NSArray, NSNumber;

@interface SignpostSupportSerializabledObjectCollection : NSObject

{
    NSArray *_objectArray;
    NSNumber *_formatVersion;
    unsigned long long _machContinuousTimeFirst;
    unsigned long long _machContinuousTimeLast;
}

@property (nonatomic, readonly) NSArray *objectArray;
@property (nonatomic, readonly) NSNumber *formatVersion;
@property (nonatomic, readonly) unsigned long long machContinuousTimeFirst;
@property (nonatomic, readonly) unsigned long long machContinuousTimeLast;

+ (_Bool)_versionIsSupported:(id)arg1;
+ (id)_deserializedDictionaryForData:(id)arg1 errorOut:(id *)arg2;
+ (_Bool)_enumerateSignpostObjectsInDeserializedCollectionDictionary:(id)arg1 processingBlock:(CDUnknownBlockType)arg2 errorOut:(id *)arg3;
+ (_Bool)timeRangeForSerializedCollection:(id)arg1 continuousTimeFirstOut:(unsigned long long *)arg2 continuousTimeLastOut:(unsigned long long *)arg3 errorOut:(id *)arg4;
+ (_Bool)enumerateSignpostSupportObjectsInSerializedCollection:(id)arg1 processingBlock:(CDUnknownBlockType)arg2 errorOut:(id *)arg3;

- (id)initWithSerializeableObjectArray:(id)arg1;
- (id)newSerializedCollection:(_Bool)arg1;
- (id)initWithData:(id)arg1 errorOut:(id *)arg2;

@end
