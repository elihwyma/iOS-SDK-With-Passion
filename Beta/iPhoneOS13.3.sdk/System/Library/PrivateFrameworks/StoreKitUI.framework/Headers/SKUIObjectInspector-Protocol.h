/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/Swift-Protocol.h>

@class NSString;

@protocol SKUIObjectInspector <Swift>

@property (copy, nonatomic) NSString *friendlyName;
@property (copy, nonatomic) NSString *information;

- (unsigned short)beginSectionWithFriendlyName: /* Error: Ran out of types for this method. */;
- (unsigned short)exposePropertyWithFriendlyName:value: /* Error: Ran out of types for this method. */;
- (unsigned short)endSection;

@end
