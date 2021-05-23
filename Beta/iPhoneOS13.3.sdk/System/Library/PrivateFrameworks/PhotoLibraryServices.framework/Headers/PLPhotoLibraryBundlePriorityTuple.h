/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class PLPhotoLibraryBundle;

@interface PLPhotoLibraryBundlePriorityTuple : NSObject

{
    PLPhotoLibraryBundle *_bundle;
    unsigned long long _priority;
}

@property (nonatomic, readonly) PLPhotoLibraryBundle *bundle;
@property (nonatomic, readonly) unsigned long long priority;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)initWithBundle:(id)arg1 priority:(unsigned long long)arg2;

@end
