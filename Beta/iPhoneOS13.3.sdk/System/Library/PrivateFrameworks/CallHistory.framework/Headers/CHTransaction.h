/*
 Image: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
 */

#import <Foundation/NSObject.h>

@class NSData;

@interface CHTransaction : NSObject

{
    unsigned long long _transactionType;
    NSData *_record;
}

@property (nonatomic, readonly) unsigned long long transactionType;
@property (nonatomic, readonly) NSData *record;

+ (_Bool)supportsSecureCoding;
+ (id)unarchivedObjectClasses;
+ (id)unarchivedObjectFromData:(id)arg1 error:(id *)arg2;
+ (id)toString:(unsigned long long)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)archivedDataWithError:(id *)arg1;
- (id)initWithType:(unsigned long long)arg1 andRecord:(id)arg2;
- (_Bool)isEqualToTransaction:(id)arg1;
- (id)initWithString:(id)arg1 andRecord:(id)arg2;

@end
