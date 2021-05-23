/*
 Image: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
 */

#import <DiagnosticsKit/Swift-Protocol.h>

@class MISSING_TYPE;

@protocol DKRequestDelegate;

@protocol DKRequest <Swift>

@property (weak, nonatomic) id <DKRequestDelegate> delegate;
@property (retain, nonatomic) id context;
@property (weak, nonatomic) id hostServicesDelegate;

+ (MISSING_TYPE *)requestWithExtensionAttributes: /* Error: Ran out of types for this method. */;

- (MISSING_TYPE *)cancel;
- (MISSING_TYPE *)connectWithError: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)beginWithPayload: /* Error: Ran out of types for this method. */;

@end
