/*
 Image: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
 */

#import <Foundation/NSObject.h>

@class GPBUInt32Array, GPBUInt64Array, NSArray, NSMutableArray;

__attribute__((visibility("hidden")))
@interface GPBUnknownField : NSObject

{
    int number_;
    GPBUInt64Array *mutableVarintList_;
    GPBUInt32Array *mutableFixed32List_;
    GPBUInt64Array *mutableFixed64List_;
    NSMutableArray *mutableLengthDelimitedList_;
    NSMutableArray *mutableGroupList_;
}

@property (nonatomic, readonly) int number;
@property (nonatomic, readonly) GPBUInt64Array *varintList;
@property (nonatomic, readonly) GPBUInt32Array *fixed32List;
@property (nonatomic, readonly) GPBUInt64Array *fixed64List;
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
