/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <Foundation/NSObject.h>

@class ARCoachingOverlayView;

@interface ARCoachingState : NSObject

{
    ARCoachingOverlayView *_view;
}

@property (weak, nonatomic) ARCoachingOverlayView *view;
@property (nonatomic, readonly) long long requirements;
@property (nonatomic, readonly) _Bool isViewActiveForState;

- (void)exit;
- (id)initWithView:(id)arg1;
- (void)enter;
- (id)doAction:(long long)arg1;

@end
