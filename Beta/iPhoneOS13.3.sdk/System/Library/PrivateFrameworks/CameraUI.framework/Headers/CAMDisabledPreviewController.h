/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <Foundation/NSObject.h>

@class NSMutableSet;

@protocol CAMDisabledPreviewControllerDelegate;

@interface CAMDisabledPreviewController : NSObject

{
    id <CAMDisabledPreviewControllerDelegate> _delegate;
    NSMutableSet *__reasonsForDisablingPreview;
}

@property (nonatomic, readonly) NSMutableSet *_reasonsForDisablingPreview;
@property (weak, nonatomic) id <CAMDisabledPreviewControllerDelegate> delegate;
@property (nonatomic, readonly, getter=isPreviewDisabled) _Bool previewDisabled;

- (id)init;
- (void)addDisabledPreviewReason:(long long)arg1;
- (void)removeDisabledPreviewReason:(long long)arg1;
- (id)_descriptionStringForReason:(long long)arg1;
- (id)_descriptionForReasons:(id)arg1;

@end
