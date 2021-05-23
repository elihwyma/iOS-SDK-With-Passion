/*
 Image: /System/Library/PrivateFrameworks/LocationSupport.framework/LocationSupport
 */

#import <LocationSupport/Swift-Protocol.h>

@class CLServiceVendor, CLSilo;

@protocol CLIntersiloUniverse <Swift>

@property (nonatomic, readonly) CLSilo *silo;
@property (nonatomic, readonly) CLServiceVendor *vendor;

@end
