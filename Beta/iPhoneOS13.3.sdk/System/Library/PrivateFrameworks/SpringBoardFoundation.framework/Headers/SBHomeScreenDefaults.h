/*
 Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

#import <SpringBoardFoundation/SBAbstractSpringBoardDefaultDomain.h>

@class NSDate;

@interface SBHomeScreenDefaults : SBAbstractSpringBoardDefaultDomain

@property (nonatomic) _Bool usesAutomaticHomeScreenEnvironment;
@property (nonatomic, getter=isSidebarVisible) _Bool sidebarVisible;
@property (nonatomic, getter=isSidebarPinned) _Bool sidebarPinned;
@property (nonatomic, getter=isLayoutLowDensity) _Bool layoutLowDensity;
@property (nonatomic) _Bool shouldFudgeShortcutsToCauseMaximumPain;
@property (nonatomic, getter=hasSidebarEverBeenVisible) _Bool sidebarEverBeenVisible;
@property (copy, nonatomic) NSDate *sidebarLearningCadenceCommenceDate;
@property (nonatomic) long long sidebarLearningCadenceEpoch;
@property (nonatomic) _Bool shouldShowWidgetsTeachingView;

- (void)_bindAndRegisterDefaults;

@end
