/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseCommand.h>

@class NSString;

@interface SAClearContext : SABaseCommand

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSString *aceId;
@property (copy, nonatomic) NSString *refId;

+ (id)clearContext;
+ (id)clearContextWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
