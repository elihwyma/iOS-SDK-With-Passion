/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseCommand.h>

#import <SAObjects/Swift-Protocol.h>

@class NSArray, NSString;

@interface SAUpdateReadingState : SABaseCommand <Swift>

@property (copy, nonatomic) NSArray *items;
@property (copy, nonatomic) NSString *readingStateId;
@property (nonatomic) long long updatedGroupIndex;
@property (nonatomic) long long updatedItemIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSString *aceId;
@property (copy, nonatomic) NSString *refId;

+ (id)updateReadingState;
+ (id)updateReadingStateWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
