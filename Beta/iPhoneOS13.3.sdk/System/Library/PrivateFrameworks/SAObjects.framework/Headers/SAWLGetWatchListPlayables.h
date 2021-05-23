/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString;

@interface SAWLGetWatchListPlayables : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *statsId;

+ (id)getWatchListPlayables;
+ (id)getWatchListPlayablesWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
