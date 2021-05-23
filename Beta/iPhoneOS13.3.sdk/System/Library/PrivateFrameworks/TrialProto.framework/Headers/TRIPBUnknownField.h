/*
 Image: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, TRIPBUInt32Array, TRIPBUInt64Array;

@interface TRIPBUnknownField : NSObject

{
    int number_;
    TRIPBUInt64Array *mutableVarintList_;
    TRIPBUInt32Array *mutableFixed32List_;
    TRIPBUInt64Array *mutableFixed64List_;
    NSMutableArray *mutableLengthDelimitedList_;
    NSMutableArray *mutableGroupList_;
}

@property (nonatomic, readonly) int number;
@property (nonatomic, readonly) TRIPBUInt64Array *varintList;
@property (nonatomic, readonly) TRIPBUInt32Array *fixed32List;
@property (nonatomic, readonly) TRIPBUInt64Array *fixed64List;
@property (nonatomic, readonly) NSArray *lengthDelimitedList;
@property (nonatomic, readonly) NSArray *groupList;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithNumber:(int)arg1;
- (void)addGroup:(id)arg1;
- (unsigned long long)serializedSize;
- (void)writeToOutput:(id)arg1;
- (void)addVarint:(unsigned long long)arg1;
- (void)addFixed64:(unsigned long long)arg1;
- (void)addLengthDelimited:(id)arg1;
- (void)addFixed32:(unsigned int)arg1;
- (void)writeAsMessageSetExtensionToOutput:(id)arg1;
- (unsigned long long)serializedSizeAsMessageSetExtension;
- (void)mergeFromField:(id)arg1;

@end
