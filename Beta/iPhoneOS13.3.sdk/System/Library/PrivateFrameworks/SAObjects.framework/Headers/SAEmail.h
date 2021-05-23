/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/AceObject.h>

@class NSNumber, NSString;

@interface SAEmail : AceObject

@property (copy, nonatomic) NSString *emailAddress;
@property (copy, nonatomic) NSNumber *favoriteFacetime;
@property (copy, nonatomic) NSNumber *favoriteFacetimeAudio;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSNumber *pseudo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)email;
+ (id)emailWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
