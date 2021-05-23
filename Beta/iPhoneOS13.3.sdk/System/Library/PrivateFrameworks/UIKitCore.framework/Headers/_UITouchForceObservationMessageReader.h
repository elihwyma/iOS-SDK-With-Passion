/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UITouchForceObservationMessageReader : NSObject

{
    _Bool _shouldFilterDueToSystemGestures;
    double _touchForce;
    double _timestamp;
    struct CGPoint _centroid;
}

@property (nonatomic) double touchForce;
@property (nonatomic) double timestamp;
@property (nonatomic) struct CGPoint centroid;
@property (nonatomic) _Bool shouldFilterDueToSystemGestures;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

@end
