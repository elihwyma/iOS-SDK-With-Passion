/*
 Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

#import <SpringBoardFoundation/SBAbstractSpringBoardDefaultDomain.h>

@class NSArray;

@interface SBAppSwitcherDefaults : SBAbstractSpringBoardDefaultDomain

@property (retain, nonatomic) NSArray *recentsPlistRepresentation;
@property (nonatomic) unsigned long long bottomEdgeGestureSwipeCount;
@property (nonatomic, readonly, getter=isSpringBoardKillable) _Bool springBoardKillable;
@property (nonatomic, readonly) NSArray *legacyRecentApplications;
@property (nonatomic, readonly) NSArray *legacyRecentDisplayItems;
@property (nonatomic, readonly) NSArray *legacyRecentDisplayItemRoles;

- (void)_bindAndRegisterDefaults;
- (void)clearLegacyDefaults;

@end
