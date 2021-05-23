/*
 Image: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
 */

#import <Foundation/NSObject.h>

#import <NewsToday/Swift-Protocol.h>

@class NSDate, NSOrderedSet;

@interface NTTodayResults : NSObject <Swift>

{
    NSOrderedSet *_sections;
    NSDate *_expirationDate;
}

@property (copy, nonatomic) NSOrderedSet *sections;
@property (copy, nonatomic, readonly) NSDate *expirationDate;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)itemCount;
- (id)initWithSections:(id)arg1 expirationDate:(id)arg2;

@end
