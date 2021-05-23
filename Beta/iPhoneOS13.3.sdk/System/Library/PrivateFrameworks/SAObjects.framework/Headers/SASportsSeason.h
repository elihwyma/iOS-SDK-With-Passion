/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/AceObject.h>

#import <SAObjects/Swift-Protocol.h>

@class NSNumber, NSString;

@interface SASportsSeason : AceObject <Swift>

@property (copy, nonatomic) NSNumber *currentSeasonYear;
@property (copy, nonatomic) NSString *relativeSeasonYear;
@property (copy, nonatomic) NSNumber *seasonYear;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)season;
+ (id)seasonWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
