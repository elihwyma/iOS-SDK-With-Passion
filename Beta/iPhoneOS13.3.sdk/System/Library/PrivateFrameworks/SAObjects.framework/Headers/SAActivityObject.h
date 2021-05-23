/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SADomainObject.h>

@class NSDate, NSDictionary, NSString, SAClientUserActivity;

@interface SAActivityObject : SADomainObject

@property (copy, nonatomic) NSDate *endDate;
@property (copy, nonatomic) NSDictionary *metadata;
@property (copy, nonatomic) NSDate *startDate;
@property (copy, nonatomic) NSString *streamType;
@property (copy, nonatomic) NSString *type;
@property (retain, nonatomic) SAClientUserActivity *userActivity;
@property (copy, nonatomic) NSString *visibility;

+ (id)activityObject;
+ (id)activityObjectWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
