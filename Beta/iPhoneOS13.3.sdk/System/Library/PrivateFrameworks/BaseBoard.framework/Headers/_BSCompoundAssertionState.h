/*
 Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

#import <Foundation/NSObject.h>

@class NSSet;

@interface _BSCompoundAssertionState : NSObject

{
    _Bool _active;
    NSSet *_context;
}

@property (readonly, getter=isActive) _Bool active;
@property (readonly) NSSet *context;

- (id)description;
- (void)setActive:(_Bool)arg1;
- (void)setContext:(id)arg1;

@end
