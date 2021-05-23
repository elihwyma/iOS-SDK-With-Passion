/*
 Image: /System/Library/PrivateFrameworks/FMF.framework/FMF
 */

#import <FMF/Swift-Protocol.h>

@protocol FMFMapXPCInterface <Swift>

- (unsigned short)gridImageForWidth:height:andCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)noLocationImageForWidth:height:andCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)mapImageForRequest:andCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)mapImageForLocation:altitude:pitch:width:height:andCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)gridImageForScreenRatio:andCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)noLocationImageForScreenRatio:andCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)mapImageForLocation:altitude:pitch:screenRatio:andCompletion: /* Error: Ran out of types for this method. */;

@end
