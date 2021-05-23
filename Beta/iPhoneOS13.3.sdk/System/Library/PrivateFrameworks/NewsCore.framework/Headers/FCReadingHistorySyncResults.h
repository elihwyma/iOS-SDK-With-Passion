/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface FCReadingHistorySyncResults : NSObject

{
    NSArray *_modifiedArticleIDs;
    NSArray *_deletedArticleIDs;
    NSArray *_newlyCreatedArticleIDs;
}

@property (retain, nonatomic) NSArray *modifiedArticleIDs;
@property (retain, nonatomic) NSArray *deletedArticleIDs;
@property (retain, nonatomic) NSArray *newlyCreatedArticleIDs;

- (id)initWithModifiedArticleIDs:(id)arg1 deletedArticleIDs:(id)arg2 newArticleIDs:(id)arg3;

@end
