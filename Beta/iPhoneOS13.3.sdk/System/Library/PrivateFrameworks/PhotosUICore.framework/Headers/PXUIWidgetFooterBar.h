/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXUIWidgetBar.h>

@class NSString;

@interface PXUIWidgetFooterBar : PXUIWidgetBar

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)updateView;
- (void)setSpec:(id)arg1;
- (void)setDisclosureTitle:(id)arg1;
- (id)createView;
- (double)viewHeight;
- (void)widgetFooterView:(id)arg1 didSelectDisclosure:(id)arg2;

@end
