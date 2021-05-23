/*
 Image: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
 */

#import <Foundation/NSObject.h>

#import <AuthKit/Swift-Protocol.h>

@class NSData, NSNumber;

@interface AKIconContext : NSObject <Swift>

{
    NSData *_data;
    NSNumber *_scale;
    unsigned long long _maskingStyle;
}

@property (retain, nonatomic) NSData *data;
@property (retain, nonatomic) NSNumber *scale;
@property (nonatomic) unsigned long long maskingStyle;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
