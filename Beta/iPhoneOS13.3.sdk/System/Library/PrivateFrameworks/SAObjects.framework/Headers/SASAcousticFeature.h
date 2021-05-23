/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/AceObject.h>

#import <SAObjects/Swift-Protocol.h>

@class NSArray, NSNumber, NSString;

@interface SASAcousticFeature : AceObject <Swift>

@property (copy, nonatomic) NSArray *acousticFeaturePerFrame;
@property (copy, nonatomic) NSNumber *frameDuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)acousticFeature;
+ (id)acousticFeatureWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
