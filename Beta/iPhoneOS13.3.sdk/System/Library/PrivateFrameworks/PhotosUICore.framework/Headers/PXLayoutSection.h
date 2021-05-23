/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableDictionary;

@interface PXLayoutSection : NSObject

{
    NSMutableDictionary *_geometriesByKind;
    _Bool _accurate;
    unsigned long long _identifier;
    long long _index;
    NSArray *_geometryKinds;
    struct CGRect _frame;
}

@property (nonatomic) unsigned long long identifier;
@property (nonatomic, getter=isAccurate) _Bool accurate;
@property (nonatomic) long long index;
@property (nonatomic) struct CGRect frame;
@property (nonatomic) struct CGSize size;
@property (retain, nonatomic) NSArray *geometryKinds;

- (id)init;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setGeometries:(id)arg1 withKind:(long long)arg2;
- (id)geometriesWithKind:(long long)arg1;
- (void)enumerateGeometriesWithBlock:(CDUnknownBlockType)arg1;

@end
