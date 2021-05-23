/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <Foundation/NSObject.h>

@class NSDate, NSDictionary, NSString;

@interface CRKLogEvent : NSObject

{
    NSString *_name;
    NSDate *_date;
    NSDictionary *_userInfo;
}

@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) NSDate *date;
@property (copy, nonatomic) NSDictionary *userInfo;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqualToEvent:(id)arg1;
- (id)initWithName:(id)arg1 date:(id)arg2 userInfo:(id)arg3;

@end
