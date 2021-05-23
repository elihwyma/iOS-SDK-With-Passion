/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface UIPeripheralHostState : NSObject

{
    struct UIPeripheralAnimationGeometry _geometry;
    NSDictionary *_screenGeometry;
    _Bool _inPositionIsDestination;
}

@property (nonatomic) struct UIPeripheralAnimationGeometry geometry;
@property (retain, nonatomic) NSDictionary *screenGeometry;
@property (nonatomic) _Bool inPositionIsDestination;

+ (id)stateWithGeometry:(struct UIPeripheralAnimationGeometry)arg1 inPositionIsDestination:(_Bool)arg2;

- (void)dealloc;

@end
