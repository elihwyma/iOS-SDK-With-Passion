/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <Foundation/NSNumber.h>

@class NSString;

@interface NSNumber (IKPointUnit)

@property (nonatomic, setter=ik_setUnit:) unsigned long long ik_unit;
@property (nonatomic, readonly) NSString *ik_unitStringValue;

@end
