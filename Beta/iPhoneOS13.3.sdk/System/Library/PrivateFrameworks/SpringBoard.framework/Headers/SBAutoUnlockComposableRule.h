/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSMutableSet, NSString;

@interface SBAutoUnlockComposableRule : NSObject

{
    NSMutableSet *_rules;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (_Bool)shouldAutoUnlockForSource:(int)arg1;
- (void)addAutoUnlockRule:(id)arg1;
- (void)removeAutoUnlockRule:(id)arg1;

@end
