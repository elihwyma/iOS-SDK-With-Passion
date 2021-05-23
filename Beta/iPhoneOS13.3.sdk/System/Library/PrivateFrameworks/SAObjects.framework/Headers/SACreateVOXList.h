/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseCommand.h>

#import <SAObjects/Swift-Protocol.h>

@class NSArray, NSString;

@interface SACreateVOXList : SABaseCommand <Swift>

@property (copy, nonatomic) NSString *domainName;
@property (copy, nonatomic) NSArray *introductions;
@property (copy, nonatomic) NSArray *items;
@property (nonatomic) long long pageSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSString *aceId;
@property (copy, nonatomic) NSString *refId;

+ (id)createVOXList;
+ (id)createVOXListWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
