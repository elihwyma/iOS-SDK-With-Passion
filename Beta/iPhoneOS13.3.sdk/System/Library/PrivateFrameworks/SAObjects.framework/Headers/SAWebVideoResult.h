/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SAWebImageResult.h>

@class NSNumber;

@interface SAWebVideoResult : SAWebImageResult

@property (copy, nonatomic) NSNumber *runTimeInMilliseconds;

+ (id)videoResult;
+ (id)videoResultWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
