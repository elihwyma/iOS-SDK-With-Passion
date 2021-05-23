/*
 Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

#import <Foundation/NSObject.h>

@interface _FBSSnapshotLayer : NSObject

{
    unsigned int _contextID;
    struct CATransform3D _baseTransform;
}

@property (nonatomic, readonly) unsigned int contextID;
@property (nonatomic, readonly) struct CATransform3D baseTransform;

- (id)initWithContextID:(unsigned int)arg1 baseTransform:(struct CATransform3D)arg2;

@end
