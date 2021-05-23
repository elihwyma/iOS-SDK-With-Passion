/*
 Image: /System/Library/PrivateFrameworks/Search.framework/Search
 */

#import <Search/SPSearchEntity.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SPSuggestionSearchEntity : SPSearchEntity

{
    NSString *_queryString;
    NSString *_tokenText;
}

@property (retain, nonatomic) NSString *queryString;
@property (retain, nonatomic) NSString *tokenText;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithQueryString:(id)arg1 tokenText:(id)arg2;

@end
