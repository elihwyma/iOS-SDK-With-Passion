/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SAAceView.h>

@class NSArray, NSString;

@interface SAMacFileSearchView : SAAceView

@property (copy, nonatomic) NSArray *entities;
@property (nonatomic) long long numResults;
@property (copy, nonatomic) NSString *query;
@property (copy, nonatomic) NSString *searchTitle;

+ (id)fileSearchView;
+ (id)fileSearchViewWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
