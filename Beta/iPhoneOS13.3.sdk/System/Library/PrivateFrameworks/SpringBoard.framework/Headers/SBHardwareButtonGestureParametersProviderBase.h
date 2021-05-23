/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

#import <SpringBoard/Swift-Protocol.h>

@class NSMapTable, NSString, SBHardwareButtonGestureParameters;

@interface SBHardwareButtonGestureParametersProviderBase : NSObject <Swift>

{
    NSMapTable *_observers;
}

@property (retain, nonatomic) NSMapTable *observers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) SBHardwareButtonGestureParameters *hardwareButtonGestureParameters;

- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (void)addHardwareButtonGestureParametersObserver:(id)arg1;
- (void)publishUpdatedParameters:(id)arg1;
- (void)removeHardwareButtonGestureParametersObserver:(id)arg1;

@end
