/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXUIWidgetBar.h>

@class NSString;

@interface PXUIWidgetHeaderBar : PXUIWidgetBar

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)setTitle:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)updateView;
- (void)setSpec:(id)arg1;
- (void)setCaption:(id)arg1;
- (void)setDisclosureTitle:(id)arg1;
- (void)widgetHeaderView:(id)arg1 didSelectSubtitle:(id)arg2;
- (void)widgetHeaderView:(id)arg1 didSelectCaption:(id)arg2;
- (id)createView;
- (double)viewHeight;

@end
