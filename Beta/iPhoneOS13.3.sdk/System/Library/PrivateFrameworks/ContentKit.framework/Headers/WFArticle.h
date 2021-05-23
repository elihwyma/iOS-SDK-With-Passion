/*
 Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

#import <Foundation/NSObject.h>

@class NSDate, NSString, NSURL;

@interface WFArticle : NSObject

{
    NSString *_title;
    NSString *_author;
    NSDate *_publishedDate;
    NSString *_body;
    NSString *_excerpt;
    unsigned long long _numberOfWords;
    NSURL *_URL;
    NSURL *_mainImageURL;
}

@property (copy, nonatomic, readonly) NSString *title;
@property (copy, nonatomic, readonly) NSString *author;
@property (copy, nonatomic, readonly) NSDate *publishedDate;
@property (copy, nonatomic, readonly) NSString *body;
@property (copy, nonatomic, readonly) NSString *excerpt;
@property (nonatomic, readonly) unsigned long long numberOfWords;
@property (copy, nonatomic, readonly) NSURL *URL;
@property (copy, nonatomic, readonly) NSURL *mainImageURL;
@property (copy, nonatomic, readonly) NSString *wfName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)objectWithWFSerializedRepresentation:(id)arg1;
+ (void)fetchArticleFromURL:(id)arg1 pageHTML:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (unsigned long long)numberOfWordsInString:(id)arg1;
+ (id)summaryOfParagraph:(id)arg1;
+ (id)mainImageURLFromHTML:(id)arg1;
+ (id)articleWithTitle:(id)arg1 author:(id)arg2 publishedDate:(id)arg3 body:(id)arg4 excerpt:(id)arg5 numberOfWords:(unsigned long long)arg6 mainImageURL:(id)arg7 URL:(id)arg8;

- (_Bool)isEqual:(id)arg1;
- (id)wfSerializedRepresentation;
- (id)initWithTitle:(id)arg1 author:(id)arg2 publishedDate:(id)arg3 body:(id)arg4 excerpt:(id)arg5 numberOfWords:(unsigned long long)arg6 mainImageURL:(id)arg7 URL:(id)arg8;

@end
