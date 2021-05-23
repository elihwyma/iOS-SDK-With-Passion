/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface UITextDragFinishState : NSObject

{
    _Bool _dragTearoffOccured;
    struct CGPoint _location;
}

@property (nonatomic) _Bool dragTearoffOccured;
@property (nonatomic) struct CGPoint location;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

@end
