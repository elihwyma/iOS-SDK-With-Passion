/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface _UIStatusBarRegionAxisStackingLayout : NSObject

{
    _Bool _hugging;
    long long _alignment;
    double _interspace;
}

@property (nonatomic) long long alignment;
@property (nonatomic) double interspace;
@property (nonatomic) _Bool hugging;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool canOverflowItems;

- (id)constraintsForDisplayItems:(id)arg1 layoutGuides:(id)arg2 inContainerItem:(id)arg3 axis:(long long)arg4;

@end
