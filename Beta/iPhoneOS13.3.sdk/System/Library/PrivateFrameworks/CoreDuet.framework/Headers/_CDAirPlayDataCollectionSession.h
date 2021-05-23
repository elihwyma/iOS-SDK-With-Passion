/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <Foundation/NSObject.h>

@class NSData, NSDate, NSString;

@interface _CDAirPlayDataCollectionSession : NSObject

{
    NSString *_identifier;
    NSData *_salt;
    NSDate *_latestStartDate;
    NSDate *_lastCollectionDate;
    unsigned long long _batchNumber;
}

@property (copy, nonatomic, readonly) NSString *identifier;
@property (copy, nonatomic, readonly) NSData *salt;
@property (copy, nonatomic, readonly) NSDate *latestStartDate;
@property (copy, nonatomic, readonly) NSDate *lastCollectionDate;
@property (nonatomic, readonly) unsigned long long batchNumber;

+ (_Bool)supportsSecureCoding;
+ (id)generateNewSession;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 salt:(id)arg2 latestStartDate:(id)arg3 lastCollectionDate:(id)arg4 batchNumber:(unsigned long long)arg5;
- (id)subsequentSessionWithlatestStartDate:(id)arg1 lastCollectionDate:(id)arg2;
- (_Bool)isValidForCollectionDate:(id)arg1;

@end
