/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SAUISnippet.h>

@class NSNumber, NSString, NSURL, SAFmfGeoFence;

@interface SAFmfGeoFenceSnippet : SAUISnippet

@property (retain, nonatomic) SAFmfGeoFence *aceFmfGeoFence;
@property (copy, nonatomic) NSNumber *enable;
@property (copy, nonatomic) NSString *fenceType;
@property (copy, nonatomic) NSNumber *oneTimeOnly;
@property (copy, nonatomic) NSURL *searchContext;

+ (id)geoFenceSnippet;
+ (id)geoFenceSnippetWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
