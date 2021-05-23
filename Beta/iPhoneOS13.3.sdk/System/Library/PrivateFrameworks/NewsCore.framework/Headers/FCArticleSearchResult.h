/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class NSString, SFSearchResult;

@protocol FCHeadlineProviding;

@interface FCArticleSearchResult : NSObject

{
    NSString *_articleID;
    id <FCHeadlineProviding> _deflatedHeadline;
    id <FCHeadlineProviding> _inflatedHeadline;
    SFSearchResult *_searchResult;
}

@property (retain, nonatomic) SFSearchResult *searchResult;
@property (nonatomic, readonly) NSString *articleID;
@property (nonatomic, readonly) id <FCHeadlineProviding> deflatedHeadline;
@property (retain, nonatomic) id <FCHeadlineProviding> inflatedHeadline;

- (id)initWithParsecSearchResult:(id)arg1 cloudContext:(id)arg2;

@end
