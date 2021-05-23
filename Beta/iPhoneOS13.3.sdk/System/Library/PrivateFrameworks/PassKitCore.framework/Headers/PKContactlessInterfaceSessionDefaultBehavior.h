/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

@class NSString;

@interface PKContactlessInterfaceSessionDefaultBehavior : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)attachDefaultBehaviorToSession:(id)arg1;

- (void)contactlessInterfaceSession:(id)arg1 didEndPersistentCardEmulationWithContext:(id)arg2;
- (void)contactlessInterfaceSession:(id)arg1 didFinishTransactionWithContext:(id)arg2;
- (void)_processContext:(id)arg1;

@end
