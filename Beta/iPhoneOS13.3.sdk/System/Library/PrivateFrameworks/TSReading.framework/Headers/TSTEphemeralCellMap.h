/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface TSTEphemeralCellMap : NSObject

{
    CDStruct_0441cfb5 *mCellIDs;
    id *mCells;
    unsigned long long mCapacity;
    unsigned long long mCount;
    _Bool mMayModifyValuesReferencedByFormulas;
    _Bool mIgnoreHiddenCellsWhenApplying;
    _Bool mAppliesToHidden;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) _Bool appliesToHidden;

- (id)init;
- (void)dealloc;
- (id)initWithCapacity:(unsigned long long)arg1;
- (unsigned long long)count;
- (void)addCell:(id)arg1 andCellID:(CDStruct_0441cfb5)arg2;
- (_Bool)containsCellID:(CDStruct_0441cfb5)arg1;
- (void)popLastCell;
- (CDStruct_0441cfb5 *)cellIDs;
- (CDStruct_0441cfb5)cellIDAtIndex:(unsigned long long)arg1;
- (id)cellAtIndex:(unsigned long long)arg1;
- (_Bool)mayModifyFormulasInCells;
- (_Bool)mayModifyValuesReferencedByFormulas;
- (void)setMayModifyValuesReferencedByFormulas:(_Bool)arg1;

@end
