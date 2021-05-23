/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/AceObject.h>

#import <SAObjects/Swift-Protocol.h>

@class NSArray, NSString;

@interface SASiriSupport : AceObject <Swift>

@property (copy, nonatomic) NSString *authToken;
@property (copy, nonatomic) NSArray *endpoints;
@property (copy, nonatomic) NSArray *useCases;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)siriSupport;
+ (id)siriSupportWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
