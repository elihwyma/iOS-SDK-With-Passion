/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SAAceView.h>

#import <SAObjects/Swift-Protocol.h>

@class NSArray, NSString;

@interface SAUIDisambiguationGroup : SAAceView <Swift>

@property (copy, nonatomic) NSArray *disambiguationLists;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)disambiguationGroup;
+ (id)disambiguationGroupWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
