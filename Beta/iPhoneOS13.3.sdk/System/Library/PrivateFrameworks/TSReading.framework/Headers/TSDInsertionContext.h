/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@interface TSDInsertionContext : NSObject

@property (nonatomic, readonly) _Bool hasPreferredCenter;
@property (nonatomic, readonly, getter=isPreferredCenterRequired) _Bool preferredCenterRequired;
@property (nonatomic, readonly) struct CGPoint preferredCenter;
@property (nonatomic, readonly) _Bool shouldEndEditing;
@property (nonatomic, readonly) _Bool insertFloating;
@property (nonatomic, readonly) _Bool insertFromDrag;
@property (nonatomic, readonly) _Bool fromDragToInsertController;
@property (nonatomic, readonly) _Bool insertWillBeDiscarded;
@property (nonatomic, readonly, getter=isInteractive) _Bool interactive;

+ (id)dragInsertionContextWithPreferredCenter:(struct CGPoint)arg1 required:(_Bool)arg2 shouldEndEditing:(_Bool)arg3 fromDragToInsertController:(_Bool)arg4 insertWillBeDiscarded:(_Bool)arg5;
+ (id)nonInteractiveInsertionContext;
+ (id)nonInteractiveFloatingInsertionContext;
+ (id)dragInsertionContextWithPreferredCenter:(struct CGPoint)arg1 required:(_Bool)arg2 fromDragToInsertController:(_Bool)arg3 insertWillBeDiscarded:(_Bool)arg4;

- (id)init;

@end
