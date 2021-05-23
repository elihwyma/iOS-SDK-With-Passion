/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <ITMLKit/Swift-Protocol.h>

@class IKJSRestrictions, NSString;

@protocol IKJSDeviceSettings <Swift>

@property (retain, nonatomic, readonly) NSString *language;
@property (retain, nonatomic, readonly) NSString *storefrontCountryCode;
@property (nonatomic, readonly) IKJSRestrictions *restrictions;

@end
