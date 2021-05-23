/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <NanoPassKit/Swift-Protocol.h>

@class NSString;

@protocol NPKBalanceField <Swift>

@property (nonatomic, readonly) NSString *label;
@property (nonatomic, readonly) NSString *formattedValue;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) _Bool isPrimaryBalance;

@end
