/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class PXViewSpec;

@interface PXBasicTileUserData : NSObject

{
    PXViewSpec *_viewSpec;
}

@property (nonatomic, readonly) PXViewSpec *viewSpec;

+ (id)userDataWithViewSpec:(id)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)_initWithViewSpec:(id)arg1;

@end
