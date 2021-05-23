/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <WorkflowUI/POPAnimation.h>

@class POPAnimatableProperty;

@interface POPPropertyAnimation : POPAnimation

@property (retain, nonatomic) POPAnimatableProperty *property;
@property (copy, nonatomic) id fromValue;
@property (copy, nonatomic) id toValue;
@property (nonatomic) double roundingFactor;
@property (nonatomic) unsigned long long clampMode;
@property (nonatomic, getter=isAdditive) _Bool additive;

+ (id)animationWithCustomPropertyNamed:(id)arg1 readBlock:(CDUnknownBlockType)arg2 writeBlock:(CDUnknownBlockType)arg3;
+ (id)animationWithCustomPropertyReadBlock:(CDUnknownBlockType)arg1 writeBlock:(CDUnknownBlockType)arg2;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)currentValue;
- (void)_initState;
- (void)_appendDescription:(id)arg1 debug:(_Bool)arg2;
- (id)progressMarkers;
- (void)setProgressMarkers:(id)arg1;

@end
