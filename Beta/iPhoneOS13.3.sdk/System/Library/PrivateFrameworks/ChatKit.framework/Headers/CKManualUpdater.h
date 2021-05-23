/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <Foundation/NSObject.h>

@interface CKManualUpdater : NSObject

{
    _Bool _needsUpdate;
    id _target;
    SEL _action;
}

@property (nonatomic) _Bool needsUpdate;
@property (nonatomic) id target;
@property (nonatomic) SEL action;

- (id)description;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)setNeedsUpdate;
- (void)updateIfNeeded;

@end
