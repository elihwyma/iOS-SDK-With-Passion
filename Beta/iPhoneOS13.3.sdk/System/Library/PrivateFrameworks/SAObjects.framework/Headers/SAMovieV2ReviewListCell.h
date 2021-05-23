/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SADomainObject.h>

@class NSDate, NSString;

@interface SAMovieV2ReviewListCell : SADomainObject

@property (copy, nonatomic) NSString *reviewAuthor;
@property (copy, nonatomic) NSDate *reviewDate;
@property (copy, nonatomic) NSString *reviewText;

+ (id)reviewListCell;
+ (id)reviewListCellWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
