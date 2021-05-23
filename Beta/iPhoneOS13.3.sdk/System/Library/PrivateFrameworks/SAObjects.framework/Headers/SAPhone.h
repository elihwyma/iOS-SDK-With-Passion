/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/AceObject.h>

@class NSNumber, NSString;

@interface SAPhone : AceObject

@property (copy, nonatomic) NSNumber *favoriteFacetime;
@property (copy, nonatomic) NSNumber *favoriteFacetimeAudio;
@property (copy, nonatomic) NSNumber *favoriteVoice;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSString *number;
@property (copy, nonatomic) NSNumber *pseudo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)phone;
+ (id)phoneWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
