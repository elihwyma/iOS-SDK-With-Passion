/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface _UIStatusBarRegionAxisCenteringLayout : NSObject

{
    double _interspace;
    double _margin;
    long long _maxNumberOfItems;
}

@property (nonatomic) double interspace;
@property (nonatomic) double margin;
@property (nonatomic) long long maxNumberOfItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool canOverflowItems;

- (id)init;
- (id)constraintsForDisplayItems:(id)arg1 layoutGuides:(id)arg2 inContainerItem:(id)arg3 axis:(long long)arg4;
- (_Bool)mayFitDisplayItems:(id)arg1;

@end
