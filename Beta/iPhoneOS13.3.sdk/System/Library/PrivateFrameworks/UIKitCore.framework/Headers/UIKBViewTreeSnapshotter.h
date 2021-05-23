/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, UIView;

__attribute__((visibility("hidden")))
@interface UIKBViewTreeSnapshotter : NSObject

{
    NSMutableArray *_inputViews;
    UIView *_snapshotView;
}

@property (nonatomic, readonly) UIView *snapshotView;

+ (id)snapshotterForKeyboardView:(id)arg1 afterScreenUpdates:(_Bool)arg2;

- (void)dealloc;

@end
