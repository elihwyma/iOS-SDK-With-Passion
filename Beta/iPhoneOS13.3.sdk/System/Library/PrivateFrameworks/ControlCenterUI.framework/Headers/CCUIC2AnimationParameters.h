/*
 Image: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface CCUIC2AnimationParameters : NSObject

{
    _Bool _interactive;
    double _tension;
    double _friction;
}

@property (nonatomic, readonly, getter=isInteractive) _Bool interactive;
@property (nonatomic, readonly) double tension;
@property (nonatomic, readonly) double friction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)_initWithAnimationParameters:(id)arg1;

@end
