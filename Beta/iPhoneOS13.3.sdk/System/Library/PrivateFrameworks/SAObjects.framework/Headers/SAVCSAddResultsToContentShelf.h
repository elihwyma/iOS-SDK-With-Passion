/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SAUIAddContentToView.h>

@class NSArray, NSString;

@interface SAVCSAddResultsToContentShelf : SAUIAddContentToView

@property (copy, nonatomic) NSString *contentShelfViewId;
@property (copy, nonatomic) NSArray *fetchMoreResultsCommands;
@property (nonatomic) long long pageNumber;
@property (copy, nonatomic) NSArray *results;

+ (id)addResultsToContentShelf;
+ (id)addResultsToContentShelfWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
