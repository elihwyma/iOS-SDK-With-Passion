/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIEvent.h>

@class NSMapTable, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface UIHoverEvent : UIEvent

{
    NSMapTable *_touchesByWindow;
    NSMapTable *_deliveryTableByTouch;
    _Bool _hasOutstandingUpdates;
    NSMutableDictionary *_trackedHoverTouches;
}

@property (retain, nonatomic) NSMutableDictionary *trackedHoverTouches;
@property (nonatomic) _Bool hasOutstandingUpdates;

- (long long)type;
- (id)_init;
- (long long)subtype;
- (id)touchesForWindow:(id)arg1;
- (void)setNeedsUpdate;
- (id)touchesForGestureRecognizer:(id)arg1;
- (id)allTouches;
- (id)_gestureRecognizersForWindow:(id)arg1;
- (_Bool)_sendEventToGestureRecognizer:(id)arg1;
- (id)touchesForView:(id)arg1;
- (id)_deliveryTableByTouchCreateIfNeeded:(id)arg1;
- (id)_touchesByWindow:(id)arg1 createIfNeeded:(_Bool)arg2;
- (void)removeHoverTouchForPathIndex:(long long)arg1;
- (void)setNeedsHitTestReset;
- (void)removeTouch:(id)arg1 fromGestureRecognizer:(id)arg2;
- (id)hoverTouchForPathIndex:(long long)arg1;
- (void)setHoverTouch:(id)arg1 forPathIndex:(long long)arg2;

@end
