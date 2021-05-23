/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface PXGSublayoutDataStore : NSObject

{
    long long _capacity;
    long long _count;
    CDStruct_ff9a7497 *_geometries;
    CDStruct_df88f589 *_infos;
    long long _version;
}

@property (nonatomic) long long count;
@property (nonatomic, readonly) CDStruct_ff9a7497 *geometries;
@property (nonatomic, readonly) CDStruct_df88f589 *infos;
@property (nonatomic, readonly) long long version;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSString *diagnosticDescription;

- (void)dealloc;
- (void)insertSublayout:(id)arg1 atIndex:(long long)arg2;
- (void)removeSublayoutsInRange:(struct _NSRange)arg1;
- (void)insertSublayoutProvider:(id)arg1 inRange:(struct _NSRange)arg2;
- (void)_invalidateVersion;
- (void)_insertRange:(struct _NSRange)arg1;
- (id)sublayoutAtIndex:(long long)arg1;
- (id)sublayoutProviderAtIndex:(long long)arg1;
- (unsigned int)spriteIndexOriginForSublayout:(id)arg1;
- (CDStruct_ff9a7497)geometryForSublayout:(id)arg1;
- (void)enumerateSublayoutsUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateSublayoutsInRange:(struct _NSRange)arg1 options:(unsigned long long)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)enumerateSublayoutsInRect:(struct CGRect)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (long long)indexOfSublayout:(id)arg1;
- (void)enumerateSublayoutGeometriesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateSublayoutGeometriesInRange:(struct _NSRange)arg1 options:(unsigned long long)arg2 usingBlock:(CDUnknownBlockType)arg3;

@end
