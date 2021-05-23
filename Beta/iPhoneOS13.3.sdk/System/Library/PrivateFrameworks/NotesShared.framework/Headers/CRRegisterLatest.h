/*
 Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

#import <NotesShared/CRRegister.h>

@class CRTimestamp;

@protocol CRDataType;

@interface CRRegisterLatest : CRRegister

{
    id <CRDataType> _contents;
    CRTimestamp *_timestamp;
}

@property (retain, nonatomic) CRTimestamp *timestamp;

- (id)description;
- (id)contents;
- (void)setContents:(id)arg1;
- (void)setDocument:(id)arg1;
- (void)_setContents:(id)arg1;
- (id)initWithCRCoder:(id)arg1;
- (void)encodeWithCRCoder:(id)arg1;
- (void)mergeWith:(id)arg1;
- (id)deltaSince:(id)arg1 in:(id)arg2;
- (void)walkGraph:(CDUnknownBlockType)arg1;
- (void)realizeLocalChangesIn:(id)arg1;
- (id)initWithContents:(id)arg1 timestamp:(id)arg2 document:(id)arg3;
- (void)encodeIntoProtobufRegisterLatest:(struct RegisterLatest *)arg1 coder:(id)arg2;
- (id)initWithProtobufRegisterLatest:(const struct RegisterLatest *)arg1 decoder:(id)arg2;
- (id)initWithContents:(id)arg1 document:(id)arg2;
- (void)mergeWithRegisterLatest:(id)arg1;
- (_Bool)isEqualContents:(id)arg1;

@end
