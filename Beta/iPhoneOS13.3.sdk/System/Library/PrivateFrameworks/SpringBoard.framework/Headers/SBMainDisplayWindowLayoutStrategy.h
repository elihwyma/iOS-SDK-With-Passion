/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface SBMainDisplayWindowLayoutStrategy : NSObject

{
    _Bool _clip;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)noClipStrategy;
+ (id)_strategyWithClipping:(_Bool)arg1;
+ (id)clipStrategy;

- (id)_init;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (struct CGRect)frameWithInterfaceOrientation:(long long)arg1;
- (_Bool)shouldClipForWindow:(id)arg1;

@end
