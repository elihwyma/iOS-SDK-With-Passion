/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/AceObject.h>

#import <SAObjects/Swift-Protocol.h>

@class NSArray, NSString;

@interface SALocalSearchOfferList : AceObject <Swift>

@property (copy, nonatomic) NSArray *offers;
@property (copy, nonatomic) NSString *providerId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)offerList;
+ (id)offerListWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
