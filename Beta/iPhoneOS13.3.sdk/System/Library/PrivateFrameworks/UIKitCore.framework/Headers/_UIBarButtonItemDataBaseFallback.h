/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UIBarButtonItemDataBaseFallback : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)fallback;

- (id)fontForState:(long long)arg1 style:(long long)arg2;
- (id)colorForState:(long long)arg1 style:(long long)arg2;
- (struct UIOffset)titlePositionAdjustmentForState:(long long)arg1 style:(long long)arg2;
- (id)backgroundImageForState:(long long)arg1 style:(long long)arg2;
- (struct UIOffset)backgroundImagePositionAdjustmentForState:(long long)arg1 style:(long long)arg2;

@end
