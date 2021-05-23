/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SADomainObject.h>

@class NSDate, NSString;

@interface SAStockRequest : SADomainObject

@property (copy, nonatomic) NSDate *endDate;
@property (copy, nonatomic) NSString *requestType;
@property (copy, nonatomic) NSDate *startDate;

+ (id)request;
+ (id)requestWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
