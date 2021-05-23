/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

#import <PhotosUICore/Swift-Protocol.h>

@class NSString, PXLabelSpec, PXUILabel, UIView;

@interface PXUILabelTile : NSObject <Swift>

{
    PXUILabel *_label;
    PXLabelSpec *_spec;
    NSString *_text;
}

@property (copy, nonatomic) NSString *text;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) UIView *view;

- (void)prepareForReuse;
- (void)_setSpec:(id)arg1;
- (void)didApplyGeometry:(struct PXTileGeometry)arg1 withUserData:(id)arg2;
- (void)becomeReusable;

@end
