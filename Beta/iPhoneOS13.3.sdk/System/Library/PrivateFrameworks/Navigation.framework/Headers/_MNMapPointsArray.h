/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface _MNMapPointsArray : NSObject

{
    unsigned long long _count;
    CDStruct_c3b9c2ee *_mapPoints;
}

@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, readonly) CDStruct_c3b9c2ee *mapPoints;
@property (nonatomic, readonly) Matrix_2bdd42a3 *points;

- (void)dealloc;
- (id)initWithCapacity:(unsigned long long)arg1;

@end
