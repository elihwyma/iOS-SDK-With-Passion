/*
 Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

#import <Foundation/NSObject.h>

@class NSData, NSMutableData;

@interface TIKeyboardCandidateResultSetCoder : NSObject

{
    NSMutableData *_mutableData;
    NSData *_data;
    unsigned long long _offset;
}

@property (retain, nonatomic) NSData *data;
@property (retain, nonatomic) NSMutableData *mutableData;
@property (nonatomic) unsigned long long offset;
@property (nonatomic, readonly) const char *bytes;
@property (nonatomic, readonly) const char *currentPosition;

+ (Class)classFromCandidateType:(int)arg1;
+ (id)candidateTypeToClassNameMap;
+ (id)encodeWithCandidateResultSet:(id)arg1;
+ (id)decodeWithData:(id)arg1;

- (id)candidateResultSet;
- (id)initForEncoding;
- (id)initForDecodingWithData:(id)arg1;
- (id)initWithData:(id)arg1 mutableData:(id)arg2;
- (id)decodeCandidate;
- (void)encodeBool:(_Bool)arg1;
- (_Bool)decodeBool;
- (void)encodeByte:(unsigned char)arg1;
- (unsigned char)decodeByte;
- (void)encodeShort:(unsigned short)arg1;
- (unsigned short)decodeShort;
- (void)encodeDouble:(double)arg1;
- (double)decodeDouble;
- (void)encodeUInt32:(unsigned int)arg1;
- (unsigned int)decodeUInt32;
- (void)encodeUInt64:(unsigned long long)arg1;
- (unsigned long long)decodeUInt64;
- (void)encodeString:(id)arg1;
- (id)decodeString;
- (void)encodeStringArray:(id)arg1;
- (id)decodeStringArray;
- (void)encodePointerValueArray:(id)arg1;
- (id)decodePointerValueArray;
- (id)dataFromCandidateResultSet:(id)arg1;

@end
