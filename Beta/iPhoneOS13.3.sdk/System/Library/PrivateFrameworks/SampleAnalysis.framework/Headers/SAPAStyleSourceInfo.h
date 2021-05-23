/*
 Image: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SAPAStyleSourceInfo : NSObject

{
    unsigned int _lineNum;
    unsigned int _columnNum;
    unsigned long long _offsetIntoTextSegment;
    unsigned long long _length;
    NSString *_filePath;
}

@property unsigned long long offsetIntoTextSegment;
@property unsigned long long length;
@property unsigned int lineNum;
@property unsigned int columnNum;
@property (retain) NSString *filePath;

+ (id)classDictionaryKey;
+ (id)newInstanceWithoutReferencesFromSerializedBuffer:(const CDStruct_c524502b *)arg1 bufferLength:(unsigned long long)arg2;

- (unsigned long long)sizeInBytesForSerializedVersion;
- (void)addSelfToSerializationDictionary:(id)arg1;
- (_Bool)addSelfToBuffer:(void *)arg1 bufferLength:(unsigned long long)arg2 withCompletedSerializationDictionary:(struct NSMutableDictionary *)arg3;
- (void)populateReferencesUsingBuffer:(const CDStruct_c524502b *)arg1 bufferLength:(unsigned long long)arg2 andDeserializationDictionary:(id)arg3 andDataBufferDictionary:(id)arg4;

@end
