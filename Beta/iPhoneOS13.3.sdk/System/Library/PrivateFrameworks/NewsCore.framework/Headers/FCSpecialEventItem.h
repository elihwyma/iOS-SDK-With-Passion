/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

#import <NewsCore/Swift-Protocol.h>

@class NSDate, NSString;

@protocol FCSpecialEventArticleProviding, FCSpecialEventWebEmbedProviding;

@interface FCSpecialEventItem : NSObject <Swift>

{
    unsigned long long _itemType;
    NSString *_title;
    NSString *_actionTitle;
    NSString *_actionUrlString;
    NSString *_articleID;
    NSString *_urlString;
    NSString *_storyType;
    NSDate *_displayDate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) id <FCSpecialEventArticleProviding> asArticle;
@property (nonatomic, readonly) id <FCSpecialEventWebEmbedProviding> asWebEmbed;
@property (nonatomic, readonly) unsigned long long itemType;
@property (copy, nonatomic, readonly) NSString *title;
@property (copy, nonatomic, readonly) NSString *actionTitle;
@property (copy, nonatomic, readonly) NSString *actionUrlString;
@property (copy, nonatomic, readonly) NSString *identifier;
@property (copy, nonatomic, readonly) NSString *articleID;
@property (copy, nonatomic, readonly) NSDate *displayDate;
@property (copy, nonatomic, readonly) NSString *storyType;
@property (copy, nonatomic, readonly) NSString *urlString;

+ (id)itemWithArticleID:(id)arg1 title:(id)arg2 actionTitle:(id)arg3 actionUrlString:(id)arg4 storyType:(id)arg5 displayDate:(id)arg6;
+ (id)itemWithUrlString:(id)arg1 title:(id)arg2 actionTitle:(id)arg3 actionUrlString:(id)arg4;
+ (id)itemWithItemDict:(id)arg1;
+ (id)itemWithArticleDict:(id)arg1;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSpecialEventItemType:(unsigned long long)arg1 title:(id)arg2 actionTitle:(id)arg3 actionUrlString:(id)arg4 articleID:(id)arg5 urlString:(id)arg6 storyType:(id)arg7 displayDate:(id)arg8;

@end
