/*
 Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _NSUIKitTextGraphicsContext : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) struct CGContext *CGContext;
@property (readonly, getter=isFlipped) _Bool flipped;
@property (readonly, getter=isDrawingToScreen) _Bool drawingToScreen;

+ (id)graphicsContextForApplicationFrameworkContext:(long long)arg1;
+ (id)sharedContext;

- (void)saveGraphicsState;
- (void)restoreGraphicsState;

@end
