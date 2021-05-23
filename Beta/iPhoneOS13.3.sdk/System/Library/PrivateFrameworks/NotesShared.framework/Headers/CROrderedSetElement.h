/*
 Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

#import <Foundation/NSObject.h>

#import <NotesShared/Swift-Protocol.h>

@class CRRegisterLatest, NSString;

@protocol CRDataType><CRCoding;

@interface CROrderedSetElement : NSObject <Swift>

{
    id <CRDataType><CRCoding> _value;
    CRRegisterLatest *_index;
}

@property (retain, nonatomic) id <CRDataType><CRCoding> value;
@property (retain, nonatomic) CRRegisterLatest *index;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)temporaryElementWithValue:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)tombstone;
- (void)setDocument:(id)arg1;
- (void)mergeWith:(id)arg1;
- (id)deltaSince:(id)arg1 in:(id)arg2;
- (void)walkGraph:(CDUnknownBlockType)arg1;
- (void)realizeLocalChangesIn:(id)arg1;
- (id)initWithProtobufSetElement:(const struct Dictionary_Element *)arg1 decoder:(id)arg2;
- (void)encodeIntoProtobufSetElement:(struct Dictionary_Element *)arg1 coder:(id)arg2;

@end
