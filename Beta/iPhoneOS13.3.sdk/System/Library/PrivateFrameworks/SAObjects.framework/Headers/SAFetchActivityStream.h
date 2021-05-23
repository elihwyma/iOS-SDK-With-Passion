/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseClientBoundCommand.h>

#import <SAObjects/Swift-Protocol.h>

@class NSArray, NSDate, NSDictionary, NSNumber, NSString;

@interface SAFetchActivityStream : SABaseClientBoundCommand <Swift>

@property (copy, nonatomic) NSString *activityType;
@property (nonatomic) _Bool ascending;
@property (copy, nonatomic) NSDate *fromDate;
@property (copy, nonatomic) NSNumber *limit;
@property (copy, nonatomic) NSArray *matchingMetadataKeys;
@property (copy, nonatomic) NSDictionary *matchingMetadataKeysAndStringValues;
@property (copy, nonatomic) NSString *sortBy;
@property (copy, nonatomic) NSArray *streamTypes;
@property (copy, nonatomic) NSString *taskType;
@property (copy, nonatomic) NSDate *toDate;
@property (copy, nonatomic) NSString *visibility;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)fetchActivityStream;
+ (id)fetchActivityStreamWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
