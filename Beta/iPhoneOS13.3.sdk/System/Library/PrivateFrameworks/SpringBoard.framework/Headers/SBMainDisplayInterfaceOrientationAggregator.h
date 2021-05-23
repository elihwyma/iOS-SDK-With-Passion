/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSArray;

@protocol BSInvalidatable;

@interface SBMainDisplayInterfaceOrientationAggregator : NSObject

{
    id <BSInvalidatable> _stateCaptureHandle;
}

@property (nonatomic, readonly) long long activeInterfaceOrientation;
@property (retain, nonatomic, readonly) NSArray *interfaceOrientationSources;

- (id)init;
- (void)dealloc;
- (id)description;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (long long)_layoutOrientation;
- (void)_sortSources:(id)arg1;
- (long long)activeInterfaceOrientationAtOrBelow:(double)arg1;
- (id)highestActiveInterfaceOrientationSourceBelow:(double)arg1;
- (id)highestActiveInterfaceOrientationSourceIgnoringSourcesAbove:(double)arg1;
- (id)_highestSourceAtOrBelow:(double)arg1 amongSources:(id)arg2;
- (long long)activeInterfaceOrientationBelow:(double)arg1;
- (id)highestActiveInterfaceOrientationSource;

@end
