/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface ProjectAssetManagerRepair : NSObject

{
    unsigned long long _numberOfBrokenEditItems;
    unsigned long long _numberOfRepairedEditItems;
    unsigned long long _numberOfUnrepairedEditItems;
    unsigned long long _numberOfOfflineMovies;
}

@property (nonatomic) unsigned long long numberOfBrokenEditItems;
@property (nonatomic) unsigned long long numberOfRepairedEditItems;
@property (nonatomic) unsigned long long numberOfUnrepairedEditItems;
@property (nonatomic) unsigned long long numberOfOfflineMovies;

- (id)description;

@end
