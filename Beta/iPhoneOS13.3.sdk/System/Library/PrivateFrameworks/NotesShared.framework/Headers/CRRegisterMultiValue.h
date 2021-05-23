/*
 Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

#import <NotesShared/CRRegister.h>

@class CRSet, NSSet;

@interface CRRegisterMultiValue : CRRegister

{
    CRSet *_values;
    NSSet *_cachedValues;
}

@property (retain, nonatomic) CRSet *values;
@property (retain, nonatomic) NSSet *cachedValues;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)contents;
- (id)initWithValues:(id)arg1;
- (void)setContents:(id)arg1;
- (void)setDocument:(id)arg1;
- (id)initWithCRCoder:(id)arg1;
- (void)encodeWithCRCoder:(id)arg1;
- (void)mergeWith:(id)arg1;
- (id)deltaSince:(id)arg1 in:(id)arg2;
- (void)walkGraph:(CDUnknownBlockType)arg1;
- (id)initWithContents:(id)arg1 document:(id)arg2;
- (void)mergeWithRegisterMultiValue:(id)arg1;
- (id)allContents;

@end
