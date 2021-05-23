/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <Foundation/NSObject.h>

@class NSDate, NSString;

@interface MNTimepoint : NSObject

{
    long long _type;
    NSDate *_date;
}

@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) NSDate *date;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)leaveNow;
+ (id)leaveBy:(id)arg1;
+ (id)arriveBy:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)jsonDictionary;
- (id)initWithType:(long long)arg1 date:(id)arg2;

@end
