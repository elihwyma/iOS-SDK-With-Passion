/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <UIKit/UIView.h>

@class CALayer, CAStateController, NSObject, NSString;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface PUVolumeGlyphView : UIView

{
    CALayer *_glyphLayer;
    CAStateController *_stateController;
    NSObject<OS_dispatch_queue> *_loadingQueue;
    NSString *_stateName;
}

@property (copy, nonatomic) NSString *stateName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)classSubstitions;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (Class)CAMLParser:(id)arg1 didFailToFindClassWithName:(id)arg2;
- (void)_handleGlyphLayerDidLoad:(id)arg1;

@end
