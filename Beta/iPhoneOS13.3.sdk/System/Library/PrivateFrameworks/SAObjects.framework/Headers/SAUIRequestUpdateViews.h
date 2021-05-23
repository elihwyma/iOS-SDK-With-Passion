/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray, NSNumber;

@interface SAUIRequestUpdateViews : SABaseClientBoundCommand

@property (copy, nonatomic) NSArray *commands;
@property (copy, nonatomic) NSNumber *timeInSeconds;
@property (copy, nonatomic) NSArray *viewIds;

+ (id)requestUpdateViews;
+ (id)requestUpdateViewsWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
