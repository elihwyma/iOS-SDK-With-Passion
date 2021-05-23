/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/AceObject.h>

#import <SAObjects/Swift-Protocol.h>

@class NSArray, NSNumber, NSString;

@interface SAWebWebSearchResult : AceObject <Swift>

@property (copy, nonatomic) NSArray *imageResults;
@property (copy, nonatomic) NSArray *newsResults;
@property (copy, nonatomic) NSArray *relatedSearchResults;
@property (copy, nonatomic) NSNumber *totalImageResults;
@property (copy, nonatomic) NSNumber *totalNewsResults;
@property (copy, nonatomic) NSNumber *totalVideoResults;
@property (copy, nonatomic) NSNumber *totalWebResults;
@property (copy, nonatomic) NSArray *videoResults;
@property (copy, nonatomic) NSArray *webResults;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)webSearchResult;
+ (id)webSearchResultWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
