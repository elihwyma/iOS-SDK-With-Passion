/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class PXPhotosDetailsLoadCoordinator;

@interface PXPhotosDetailsLoadCoordinationToken : NSObject

{
    _Bool _didComplete;
    PXPhotosDetailsLoadCoordinator *__loadCoordinator;
}

@property (weak, nonatomic, readonly) PXPhotosDetailsLoadCoordinator *_loadCoordinator;

- (id)init;
- (void)dealloc;
- (void)_timeout;
- (void)complete;
- (id)_initWithLoadCoordinator:(id)arg1;

@end
