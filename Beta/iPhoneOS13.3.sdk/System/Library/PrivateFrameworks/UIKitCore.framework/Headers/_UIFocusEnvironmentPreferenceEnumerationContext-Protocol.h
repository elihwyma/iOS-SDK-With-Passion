/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/Swift-Protocol.h>

@class NSArray, _UIDebugLogReport;

@protocol UIFocusEnvironment;

@protocol _UIFocusEnvironmentPreferenceEnumerationContext <Swift>

@property (nonatomic, readonly) id <UIFocusEnvironment> environment;
@property (nonatomic, readonly) _Bool isPrimaryPreference;
@property (nonatomic, readonly) _Bool isLeafPreference;
@property (nonatomic, readonly, getter=isPreferredByItself) _Bool preferredByItself;
@property (nonatomic, readonly) _Bool prefersNothingFocused;
@property (nonatomic, readonly) id <UIFocusEnvironment> preferringEnvironment;
@property (nonatomic, readonly) NSArray *preferredEnvironments;
@property (nonatomic, readonly) _UIDebugLogReport *debugReport;

@end
