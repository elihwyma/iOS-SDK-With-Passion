/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class NSDate, NSDictionary;

@interface FCArticleListEditorialMetadata : NSObject

{
    NSDate *_publishDate;
    NSDictionary *_articleMetadata;
}

@property (retain, nonatomic) NSDate *publishDate;
@property (retain, nonatomic) NSDictionary *articleMetadata;

- (id)initWithDictionary:(id)arg1;

@end
