/*
 Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

#import <ContentKit/Swift-Protocol.h>

@class NSArray;

@protocol WFSiriUserInterface <Swift>

@property (copy, nonatomic, readonly) NSArray *airPlayRouteIDs;
@property (nonatomic, readonly) long long executionContext;

- (unsigned short)openURL:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)showInteractionIfNeeded:requiringConfirmation:requiringAuthentication:executionStage:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)speakText:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)openInteractionInApp:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)openUserActivity:bundleIdentifier:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)executeIntent:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)configureIntent: /* Error: Ran out of types for this method. */;

@end
