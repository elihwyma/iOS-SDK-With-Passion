/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@class NSHashTable, TSTCellRegion;

@interface TSTChangeDescriptor : NSObject

{
    int mChangeDescriptor;
    TSTCellRegion *mCellRegion;
    CDStruct_0441cfb5 mCellID;
    TSTCellRegion *mExpandedRegion;
    TSTCellRegion *mStrokeRegion;
    NSHashTable *mReferenceIdentifiers;
}

@property (nonatomic, readonly) int changeDescriptor;
@property (nonatomic, readonly) TSTCellRegion *cellRegion;
@property (nonatomic, readonly) CDStruct_0441cfb5 cellID;
@property (nonatomic, readonly) TSTCellRegion *strokeRegion;
@property (retain, nonatomic) TSTCellRegion *expandedRegion;
@property (nonatomic, readonly) NSHashTable *referenceIdentifiers;

+ (id)changeDescriptorWithType:(int)arg1 cellRegion:(id)arg2;
+ (id)changeDescriptorWithType:(int)arg1 cellRegion:(id)arg2 strokeRegion:(id)arg3;
+ (id)changeDescriptorWithType:(int)arg1 strokeRegion:(id)arg2;
+ (id)changeDescriptorWithType:(int)arg1 cellID:(CDStruct_0441cfb5)arg2 cellRegion:(id)arg3 strokeRegion:(id)arg4;
+ (id)changeDescriptorWithType:(int)arg1;
+ (id)changeDescriptorWithType:(int)arg1 cellID:(CDStruct_0441cfb5)arg2 cellRange:(CDStruct_5f1f7aa9)arg3;
+ (id)changeDescriptorWithType:(int)arg1 cellID:(CDStruct_0441cfb5)arg2 cellRange:(CDStruct_5f1f7aa9)arg3 strokeRange:(CDStruct_5f1f7aa9)arg4;
+ (id)changeDescriptorWithType:(int)arg1 cellID:(CDStruct_0441cfb5)arg2 strokeRange:(CDStruct_5f1f7aa9)arg3;
+ (id)changeDescriptorWithType:(int)arg1 cellRange:(CDStruct_5f1f7aa9)arg2;
+ (id)changeDescriptorWithType:(int)arg1 strokeRange:(CDStruct_5f1f7aa9)arg2;
+ (id)changeDescriptorWithType:(int)arg1 cellRange:(CDStruct_5f1f7aa9)arg2 strokeRange:(CDStruct_5f1f7aa9)arg3;
+ (id)changeDescriptorWithType:(int)arg1 referenceIdentifiers:(id)arg2;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (CDStruct_5f1f7aa9)cellRange;
- (id)initWithChangeDescriptorType:(int)arg1 andCellRegion:(id)arg2 andCellID:(CDStruct_0441cfb5)arg3 andStrokeRegion:(id)arg4 andReferenceIdentifiers:(id)arg5;
- (CDStruct_5f1f7aa9)strokeRange;
- (void)setExpandedRange:(CDStruct_5f1f7aa9)arg1;
- (CDStruct_5f1f7aa9)expandedRange;

@end
