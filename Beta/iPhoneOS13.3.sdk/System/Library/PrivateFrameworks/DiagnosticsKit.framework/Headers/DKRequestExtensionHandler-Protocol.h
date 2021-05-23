/*
 Image: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
 */

#import <DiagnosticsKit/Swift-Protocol.h>

@class MISSING_TYPE;

@protocol NSCopying;

@protocol DKRequestExtensionHandler <Swift>

@property (nonatomic, readonly) id <NSCopying> extensionRequestIdentifier;
@property (nonatomic, readonly) id <NSCopying> requestIdentifier;

- (MISSING_TYPE *)interrupt;
- (MISSING_TYPE *)complete;
- (MISSING_TYPE *)cancelWithError: /* Error: Ran out of types for this method. */;

@end
