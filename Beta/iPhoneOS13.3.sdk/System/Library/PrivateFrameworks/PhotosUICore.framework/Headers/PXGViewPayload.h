/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

#import <PhotosUICore/Swift-Protocol.h>

@protocol PXGViewUserData;

@interface PXGViewPayload : NSObject <Swift>

{
    Class _viewClass;
    id <PXGViewUserData> _userData;
}

@property (nonatomic, readonly) Class viewClass;
@property (copy, nonatomic, readonly) id <PXGViewUserData> userData;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithViewClass:(Class)arg1 userData:(id)arg2;

@end
