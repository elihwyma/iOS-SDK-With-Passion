/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

#import <PhotosUICore/Swift-Protocol.h>

@class NSString, UIView;

@interface PXUIWidgetBarViewTile : NSObject <Swift>

{
    UIView *_view;
}

@property (retain, nonatomic) UIView *view;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)didApplyGeometry:(struct PXTileGeometry)arg1 withUserData:(id)arg2;

@end
