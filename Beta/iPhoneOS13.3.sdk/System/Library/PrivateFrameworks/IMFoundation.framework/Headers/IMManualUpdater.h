/*
 Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

#import <Foundation/NSObject.h>

@interface IMManualUpdater : NSObject

{
    id _target;
    SEL _action;
    unsigned int _needsUpdate:1;
}

@property (nonatomic) id target;
@property (nonatomic) SEL action;
@property (nonatomic) _Bool needsUpdate;

- (id)description;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)setNeedsUpdate;
- (void)updateIfNeeded;

@end
