/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray;

@interface SAUIUpdateViews : SABaseClientBoundCommand

@property (copy, nonatomic) NSArray *views;

+ (id)updateViews;
+ (id)updateViewsWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
