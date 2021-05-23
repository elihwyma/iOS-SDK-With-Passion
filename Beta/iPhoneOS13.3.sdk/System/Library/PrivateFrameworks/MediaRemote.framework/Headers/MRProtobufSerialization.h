/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <Foundation/NSObject.h>

@class NSDictionary;

@interface MRProtobufSerialization : NSObject

{
    NSDictionary *_protobufKeyToDictionaryKeyMapping;
    NSDictionary *_dictionaryKeyToProtobufKeyMapping;
    Class _protobufClass;
    CDUnknownBlockType _dictionaryValueToProtobufValueTransformer;
    CDUnknownBlockType _protobufValueToDictionaryValueTransformer;
}

@property (copy, nonatomic) NSDictionary *dictionaryKeyToProtobufKeyMapping;
@property (retain, nonatomic) Class protobufClass;
@property (copy, nonatomic) CDUnknownBlockType dictionaryValueToProtobufValueTransformer;
@property (copy, nonatomic) CDUnknownBlockType protobufValueToDictionaryValueTransformer;

- (id)createDictionaryFromProtobuf:(id)arg1;
- (id)createProtobufFromDictionary:(id)arg1;

@end
