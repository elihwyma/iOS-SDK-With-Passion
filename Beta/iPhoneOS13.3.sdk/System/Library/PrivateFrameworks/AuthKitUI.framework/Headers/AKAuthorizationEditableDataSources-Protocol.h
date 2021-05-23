/*
 Image: /System/Library/PrivateFrameworks/AuthKitUI.framework/AuthKitUI
 */

#import <AuthKitUI/Swift-Protocol.h>

@class AKAuthorizationScopeChoices;

@protocol AKAuthorizationEditableDataSources <Swift>

@property (nonatomic, readonly) AKAuthorizationScopeChoices *editableScopeChoices;
@property (nonatomic) _Bool editableScopeChoicesChanged;

@end
