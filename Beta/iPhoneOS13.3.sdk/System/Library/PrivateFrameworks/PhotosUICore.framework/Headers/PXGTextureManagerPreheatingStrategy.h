/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@interface PXGTextureManagerPreheatingStrategy : NSObject

{
    long long _previousRegime;
    double _stoppedOffset;
    double _slowOffset;
    double _mediumOffset;
    double _fastOffset;
}

@property (nonatomic) double stoppedOffset;
@property (nonatomic) double slowOffset;
@property (nonatomic) double mediumOffset;
@property (nonatomic) double fastOffset;
@property (nonatomic, readonly) double maxPreheatingDistance;

+ (id)defaultPreheatingStrategy;
+ (id)noPreheatingStrategy;

- (struct CGRect)preheatingRectForLayout:(id)arg1 interactionState:(CDStruct_93894d6c)arg2;

@end
