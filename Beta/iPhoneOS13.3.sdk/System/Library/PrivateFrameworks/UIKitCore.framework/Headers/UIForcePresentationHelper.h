/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface UIForcePresentationHelper : NSObject

+ (struct CGRect)sourceRectForView:(id)arg1 proposedSourceRect:(struct CGRect)arg2;
+ (id)snapshotViewForSourceView:(id)arg1 sourceRect:(struct CGRect)arg2;
+ (void)applyPhase:(unsigned long long)arg1 toSnapshotView:(id)arg2;
+ (id)visualEffectForPresentationPhase:(unsigned long long)arg1 traitCollection:(id)arg2 variant:(long long)arg3;

@end
