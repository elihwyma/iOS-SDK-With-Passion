/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SADomainCommand.h>

@class NSDate, NSString;

@interface SANoteSearch : SADomainCommand

@property (copy, nonatomic) NSString *contentQuery;
@property (copy, nonatomic) NSDate *fromDate;
@property (copy, nonatomic) NSDate *toDate;

+ (id)search;
+ (id)searchWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
