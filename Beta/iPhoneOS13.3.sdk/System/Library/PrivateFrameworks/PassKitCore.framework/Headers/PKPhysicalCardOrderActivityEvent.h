/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSDate, NSString;

@interface PKPhysicalCardOrderActivityEvent : NSObject <Swift>

{
    unsigned long long _activity;
    NSDate *_date;
    NSString *_localizedReason;
}

@property (nonatomic) unsigned long long activity;
@property (retain, nonatomic) NSDate *date;
@property (copy, nonatomic, readonly) NSString *localizedReason;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end
