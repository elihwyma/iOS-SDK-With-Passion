/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Silex/SXComponentBlueprint.h>

@class SXLayoutBlueprint;

@interface SXContainerComponentBlueprint : SXComponentBlueprint

{
    SXLayoutBlueprint *_parentLayoutBlueprint;
    SXLayoutBlueprint *_layoutBlueprint;
}

@property (retain, nonatomic) SXLayoutBlueprint *layoutBlueprint;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)parentLayoutBlueprint;
- (void)setParentLayoutBlueprint:(id)arg1;

@end
