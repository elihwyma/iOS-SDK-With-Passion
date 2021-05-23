/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

#import <NewsCore/Swift-Protocol.h>

@class NSString;

@interface FCIssueBookmark : NSObject <Swift>

{
    long long _issueType;
    NSString *_pageID;
    NSString *_articleID;
}

@property (nonatomic, readonly) long long issueType;
@property (copy, nonatomic, readonly) NSString *pageID;
@property (copy, nonatomic, readonly) NSString *articleID;

+ (id)ANFBookmarkWithArticleID:(id)arg1;
+ (id)PDFBookmarkWithPageID:(id)arg1;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithIssueType:(long long)arg1 articleID:(id)arg2 pageID:(id)arg3;

@end
