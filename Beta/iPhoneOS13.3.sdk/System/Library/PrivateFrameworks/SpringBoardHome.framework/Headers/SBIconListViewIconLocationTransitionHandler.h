/*
 Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

#import <Foundation/NSObject.h>

@class NSString, SBIconListView;

@interface SBIconListViewIconLocationTransitionHandler : NSObject

{
    NSString *_iconLocation;
    NSString *_reason;
    SBIconListView *_iconListView;
    double _progress;
}

@property (copy, nonatomic, readonly) NSString *iconLocation;
@property (copy, nonatomic, readonly) NSString *reason;
@property (weak, nonatomic, readonly) SBIconListView *iconListView;
@property (nonatomic) double progress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (void)completeTransition:(_Bool)arg1;
- (id)initWithIconLocation:(id)arg1 reason:(id)arg2 iconListView:(id)arg3;

@end
