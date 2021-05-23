/*
 Image: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
 */

#import <Foundation/NSObject.h>

@class NSDictionary;

@interface NMRProtobufSerialization : NSObject

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

- (id)protobufFromDictionary:(id)arg1;
- (id)dictionaryFromProtobuf:(id)arg1;
- (id)protobufDataFromDictionary:(id)arg1;
- (id)dictionaryFromProtobufData:(id)arg1;

@end
