/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKDiscoveryTrigger.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSDate;

@interface PKDiscoveryTimeTrigger : PKDiscoveryTrigger <Swift>

{
    NSDate *_time;
}

@property (nonatomic, readonly) NSDate *time;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end
