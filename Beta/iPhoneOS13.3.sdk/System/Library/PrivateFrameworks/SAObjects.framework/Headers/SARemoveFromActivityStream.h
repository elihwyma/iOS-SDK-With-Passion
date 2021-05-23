/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSDate, NSString;

@interface SARemoveFromActivityStream : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *activityType;
@property (copy, nonatomic) NSDate *fromDate;
@property (copy, nonatomic) NSString *streamType;
@property (copy, nonatomic) NSString *taskType;
@property (copy, nonatomic) NSDate *toDate;
@property (copy, nonatomic) NSString *visibility;

+ (id)removeFromActivityStream;
+ (id)removeFromActivityStreamWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
