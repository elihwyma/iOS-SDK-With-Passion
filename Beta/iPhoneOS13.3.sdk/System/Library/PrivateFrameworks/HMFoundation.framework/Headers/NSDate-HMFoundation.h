/*
 Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
 */

#import <Foundation/NSDate.h>

@class NSArray, NSDateComponents, NSString;

@interface NSDate (HMFoundation)

@property (copy, readonly) NSString *hmf_localTimeDescription;
@property (copy, readonly) NSDateComponents *hmf_dateComponents;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, readonly) NSString *shortDescription;
@property (copy, readonly) NSString *privateDescription;
@property (copy, readonly) NSString *propertyDescription;
@property (copy, nonatomic, readonly) NSArray *attributeDescriptions;
@property (copy, readonly) NSString *localTimeDescription;
@property (copy, readonly) NSDateComponents *dateComponents;
@property (copy, readonly) NSString *iso8601Description;
@property (copy, readonly) NSString *fileNameDescription;

+ (id)shortDescription;
+ (id)timeIntervalDescription:(double)arg1;
+ (id)dateFromFileNameDescription:(id)arg1;

@end
