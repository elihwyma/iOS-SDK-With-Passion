/*
 Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

#import <Foundation/NSObject.h>

@class NSString, NSURL;

@interface NUArticleExcerptHTML : NSObject

{
    NSString *_processedHTML;
    NSURL *_URL;
    unsigned long long _lengthType;
}

@property (nonatomic, readonly) NSString *processedHTML;
@property (nonatomic, readonly) NSURL *URL;
@property (nonatomic, readonly) unsigned long long lengthType;

+ (id)articleExcerptCSS;
+ (id)articleExcerptHTML;

- (id)stripHTMLTagsFromExcerptHTML:(id)arg1;
- (id)excerptHTMLToProcessedHTML:(id)arg1 article:(id)arg2 scale:(double)arg3;
- (id)paragraphShortExcerptHTML:(id)arg1 article:(id)arg2;
- (id)embedCSSIntoExcerptHTML:(id)arg1 scale:(double)arg2;
- (id)initWithArticle:(id)arg1 excerptHTML:(id)arg2 scale:(double)arg3;

@end
