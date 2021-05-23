/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SADomainCommand.h>

#import <SAObjects/Swift-Protocol.h>

@class NSString, NSURL;

@interface SAFmfVisibilitySetCompleted : SADomainCommand <Swift>

@property (copy, nonatomic) NSURL *searchContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSString *aceId;
@property (copy, nonatomic) NSString *refId;

+ (id)visibilitySetCompleted;
+ (id)visibilitySetCompletedWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
