/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SAAceView.h>

@class NSArray, NSString, NSURL;

@interface SAVCSContentShelf : SAAceView

@property (copy, nonatomic) NSArray *contentHead;
@property (copy, nonatomic) NSArray *fetchMoreResultsCommands;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSURL *url;

+ (id)contentShelf;
+ (id)contentShelfWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
