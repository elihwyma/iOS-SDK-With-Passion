/*
 Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
 */

#import <Foundation/NSObject.h>

@class CAMediaTimingFunction, NSArray, NSString;

@interface MPUAnimationFactory : NSObject

{
    _Bool _removedOnCompletion;
    NSArray *_allowedKeyPaths;
    NSString *_fillMode;
    double _timeOffset;
    CAMediaTimingFunction *_timingFunction;
}

@property (copy, nonatomic) NSArray *allowedKeyPaths;
@property (copy, nonatomic) NSString *fillMode;
@property (nonatomic, getter=isRemovedOnCompletion) _Bool removedOnCompletion;
@property (nonatomic) double timeOffset;
@property (retain, nonatomic) CAMediaTimingFunction *timingFunction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2;
- (id)_timingFunctionForAnimation;

@end
