/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

#import <PhotosUICore/Swift-Protocol.h>

@class NSDictionary, PHFetchResult;

@interface PXMemoriesDataSourceState : NSObject <Swift>

{
    PHFetchResult *_memories;
    NSDictionary *_infosByMemory;
}

@property (nonatomic, readonly) PHFetchResult *memories;
@property (nonatomic, readonly) NSDictionary *infosByMemory;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithMemories:(id)arg1 infosByMemory:(id)arg2;
- (id)stateUpdatedWithChange:(id)arg1 outMemoriesChangeDetails:(out id *)arg2;

@end
