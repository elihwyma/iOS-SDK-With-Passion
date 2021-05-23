/*
 Image: /System/Library/Frameworks/CoreServices.framework/CoreServices
 */

#import <NSObject.h>

@class _LSDatabase, _UTDeclaredType;

__attribute__((visibility("hidden")))
@interface _UTDeclaredTypeSortableWrapper : NSObject

{
    _UTDeclaredType *_declaredType;
    _LSDatabase *_database;
    const CDStruct_d2548575 *_utypeData;
}

@property (retain, nonatomic) _UTDeclaredType *declaredType;
@property (nonatomic) _LSDatabase *database;
@property (nonatomic) const CDStruct_d2548575 *utypeData;

- (long long)compare:(id)arg1;

@end
