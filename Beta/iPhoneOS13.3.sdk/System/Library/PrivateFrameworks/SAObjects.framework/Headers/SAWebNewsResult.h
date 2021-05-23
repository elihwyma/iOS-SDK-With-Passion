/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SAWebWebResult.h>

@class NSDate, NSString;

@interface SAWebNewsResult : SAWebWebResult

@property (copy, nonatomic) NSDate *publicationDate;
@property (copy, nonatomic) NSString *source;

+ (id)newsResult;
+ (id)newsResultWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
