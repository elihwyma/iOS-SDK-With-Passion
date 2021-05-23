/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/Swift-Protocol.h>

@class NSDate, NSString;

@protocol FCSpecialEventArticleProviding <Swift>

@property (copy, nonatomic, readonly) NSString *articleID;
@property (copy, nonatomic, readonly) NSDate *displayDate;
@property (copy, nonatomic, readonly) NSString *storyType;

@end
