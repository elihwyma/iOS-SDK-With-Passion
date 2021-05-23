/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol UICoordinateSpace;

@interface _UIFocusMapRect : NSObject

{
    id <UICoordinateSpace> _coordinateSpace;
    struct CGRect _frame;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic, readonly) id <UICoordinateSpace> coordinateSpace;
@property (nonatomic, readonly) struct CGRect frame;

- (_Bool)intersectsRect:(struct CGRect)arg1;
- (_Bool)intersectsRegion:(id)arg1;
- (id)intersectionWithRegion:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 coordinateSpace:(id)arg2;

@end
