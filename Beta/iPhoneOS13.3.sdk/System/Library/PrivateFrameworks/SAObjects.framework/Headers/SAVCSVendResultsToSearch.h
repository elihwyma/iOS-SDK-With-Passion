/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray, NSString;

@interface SAVCSVendResultsToSearch : SABaseClientBoundCommand

@property (copy, nonatomic) NSArray *shelves;
@property (copy, nonatomic) NSString *title;

+ (id)vendResultsToSearch;
+ (id)vendResultsToSearchWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
