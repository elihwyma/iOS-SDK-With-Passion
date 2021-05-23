/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SASportsEntity.h>

@class NSArray, NSString;

@interface SASportsEntityGroup : SASportsEntity

@property (copy, nonatomic) NSArray *entities;
@property (copy, nonatomic) NSString *groupType;

+ (id)entityGroup;
+ (id)entityGroupWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
