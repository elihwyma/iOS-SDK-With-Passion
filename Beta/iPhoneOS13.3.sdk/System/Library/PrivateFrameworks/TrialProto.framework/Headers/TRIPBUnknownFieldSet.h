/*
 Image: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
 */

#import <Foundation/NSObject.h>

@interface TRIPBUnknownFieldSet : NSObject

{
    struct __CFDictionary *fields_;
}

+ (_Bool)isFieldTag:(int)arg1;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)data;
- (void)addField:(id)arg1;
- (unsigned long long)serializedSize;
- (void)addUnknownMapEntry:(int)arg1 value:(id)arg2;
- (void)writeToCodedOutputStream:(id)arg1;
- (void)mergeFromCodedInputStream:(id)arg1;
- (id)mutableFieldForNumber:(int)arg1 create:(_Bool)arg2;
- (_Bool)mergeFieldFrom:(int)arg1 input:(id)arg2;
- (_Bool)hasField:(int)arg1;
- (id)getField:(int)arg1;
- (unsigned long long)countOfFields;
- (id)sortedFields;
- (void)writeAsMessageSetTo:(id)arg1;
- (unsigned long long)serializedSizeAsMessageSet;
- (void)mergeUnknownFields:(id)arg1;
- (void)mergeFromData:(id)arg1;
- (void)mergeVarintField:(int)arg1 value:(int)arg2;
- (void)mergeMessageSetMessage:(int)arg1 data:(id)arg2;
- (void)getTags:(int *)arg1;

@end
