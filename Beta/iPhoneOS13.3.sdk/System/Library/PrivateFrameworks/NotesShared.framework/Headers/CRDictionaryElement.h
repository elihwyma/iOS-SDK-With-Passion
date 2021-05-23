/*
 Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

#import <Foundation/NSObject.h>

@class CRVectorTimestamp;

@protocol CRDataType;

@interface CRDictionaryElement : NSObject

{
    id <CRDataType> _value;
    CRVectorTimestamp *_timestamp;
}

@property (retain, nonatomic) id <CRDataType> value;
@property (retain, nonatomic) CRVectorTimestamp *timestamp;

+ (id)temporaryElementWithValue:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithValue:(id)arg1;
- (id)initWithValue:(id)arg1 timestamp:(id)arg2;
- (void)mergeWith:(id)arg1;

@end
