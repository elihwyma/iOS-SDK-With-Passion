/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

#import <PhotosUICore/Swift-Protocol.h>

@class NSString, UIView;

@interface PXCMMTileReusableView : NSObject <Swift>

{
    UIView *_underlyingView;
}

@property (nonatomic, readonly) UIView *underlyingView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) UIView *view;

- (id)init;
- (void)prepareForReuse;
- (id)initWithView:(id)arg1;
- (void)didApplyGeometry:(struct PXTileGeometry)arg1 withUserData:(id)arg2;
- (void)becomeReusable;

@end
