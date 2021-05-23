/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/FCGroupConfig.h>

@class NSArray, NSDictionary, NSString;

@interface FCSpecialEventGroupConfig : FCGroupConfig

{
    NSArray *_specialEventItems;
    NSDictionary *_specialEventsArticleMetadataByArticleID;
    NSArray *_breakingNewsArticleIDs;
    NSArray *_specialEventArticleIDs;
}

@property (retain, nonatomic) NSArray *breakingNewsArticleIDs;
@property (retain, nonatomic) NSArray *specialEventItems;
@property (retain, nonatomic) NSArray *specialEventArticleIDs;
@property (nonatomic, readonly) NSString *groupMicaAnimationFileURLString;
@property (nonatomic, readonly) NSString *groupMicaAnimationFileURLStringiPad;
@property (nonatomic, readonly) NSDictionary *specialEventsArticleMetadataByArticleID;

- (id)initWithDictionary:(id)arg1;

@end
