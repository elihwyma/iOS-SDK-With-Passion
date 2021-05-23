/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NTKEditOption;

@interface NTKEditModeConfiguration : NSObject

{
    NSMutableDictionary *_optionsBySlot;
    NTKEditOption *_nilSlotOption;
}

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)JSONObjectRepresentation;
- (id)dailySnapshotKey;
- (void)setEditOption:(id)arg1 forSlot:(id)arg2;
- (id)editOptionForSlot:(id)arg1;
- (void)enumerateSlotsWithBlock:(CDUnknownBlockType)arg1;
- (id)_alphabeticalSlots;
- (id)initWithJSONObjectRepresentation:(id)arg1 editOptionClass:(Class)arg2 forDevice:(id)arg3;

@end
