/*
 Image: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSUUID;

@interface _DECResult : NSObject

{
    NSUUID *_identifier;
    unsigned long long _consumer;
    NSDictionary *_results;
    long long _reason;
    NSDictionary *_reasonMetadata;
}

@property (nonatomic, readonly) unsigned long long consumer;
@property (retain, nonatomic) NSDictionary *results;
@property (nonatomic) long long reason;
@property (retain, nonatomic) NSDictionary *reasonMetadata;
@property (nonatomic, readonly) NSUUID *identifier;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithConsumer:(unsigned long long)arg1;
- (id)resultForCategory:(unsigned long long)arg1;
- (_Bool)isEquivalentToResult:(id)arg1 limit:(unsigned long long)arg2;
- (_Bool)isEquivalentToResult:(id)arg1;

@end
