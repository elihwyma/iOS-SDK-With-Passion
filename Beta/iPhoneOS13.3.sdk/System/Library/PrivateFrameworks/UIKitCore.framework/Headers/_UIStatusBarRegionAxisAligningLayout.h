/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface _UIStatusBarRegionAxisAligningLayout : NSObject

{
    long long _alignment;
}

@property (nonatomic) long long alignment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool canOverflowItems;

+ (id)aligningLayoutWithAlignment:(long long)arg1;

- (id)constraintsForDisplayItems:(id)arg1 layoutGuides:(id)arg2 inContainerItem:(id)arg3 axis:(long long)arg4;

@end
