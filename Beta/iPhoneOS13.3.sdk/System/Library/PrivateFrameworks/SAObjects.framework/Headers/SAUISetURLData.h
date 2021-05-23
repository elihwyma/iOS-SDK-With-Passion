/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray;

@interface SAUISetURLData : SABaseClientBoundCommand

@property (copy, nonatomic) NSArray *urlData;

+ (id)setURLData;
+ (id)setURLDataWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
