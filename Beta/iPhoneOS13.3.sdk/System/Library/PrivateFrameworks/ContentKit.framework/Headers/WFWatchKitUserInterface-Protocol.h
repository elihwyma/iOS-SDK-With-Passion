/*
 Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

#import <ContentKit/Swift-Protocol.h>

@class WKInterfaceController;

@protocol WFWatchKitUserInterface <Swift>

@property (nonatomic, readonly) WKInterfaceController *interfaceController;
@property (copy, nonatomic) CDUnknownBlockType dismissalHandler;

- (unsigned short)dismissWithCompletionHandler: /* Error: Ran out of types for this method. */;

@end
