/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@protocol PLRegionsClusteringItem;

@interface PLRegionsHierarchicalClusteringObject : NSObject

{
    id <PLRegionsClusteringItem> _object;
    unsigned long long _index;
}

@property (nonatomic, readonly) id <PLRegionsClusteringItem> object;
@property unsigned long long index;

+ (id)clusterObjectWithObject:(id)arg1 index:(unsigned long long)arg2;

@end
