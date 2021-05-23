/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SASportsSnippet.h>

@class NSArray;

@interface SASportsStandingsSnippet : SASportsSnippet

@property (copy, nonatomic) NSArray *columns;
@property (copy, nonatomic) NSArray *entities;
@property (copy, nonatomic) NSArray *selectedEntities;
@property (nonatomic) _Bool showCardinalPositions;

+ (id)standingsSnippet;
+ (id)standingsSnippetWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
