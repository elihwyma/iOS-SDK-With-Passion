/*
 Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

#import <SpringBoardFoundation/SBAbstractSpringBoardDefaultDomain.h>

@class NSDictionary;

@interface SBIconDefaults : SBAbstractSpringBoardDefaultDomain

@property (nonatomic, readonly) long long maxIconListCount;
@property (nonatomic) _Bool didShowIconReorderAlert;
@property (nonatomic, readonly) _Bool shouldDisableLiveIcons;
@property (nonatomic, readonly) _Bool suppressSetCurrentPage;
@property (nonatomic) _Bool suppressAppShortcutTruncation;
@property (nonatomic, readonly) NSDictionary *legacyIconState;
@property (nonatomic, readonly) NSDictionary *legacyIconState2;

- (void)_bindAndRegisterDefaults;
- (void)clearLegacyDefaults;

@end
