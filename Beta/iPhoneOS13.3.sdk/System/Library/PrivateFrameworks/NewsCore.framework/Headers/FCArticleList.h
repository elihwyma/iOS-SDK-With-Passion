/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class FCArticleListEditorialMetadata, FCInterestToken, NSArray, NSDate, NSString, NTPBArticleListRecord;

@interface FCArticleList : NSObject

{
    NSString *_identifier;
    NSArray *_articleIDs;
    unsigned long long _type;
    FCArticleListEditorialMetadata *_editorialMetadata;
    NSDate *_lastModifiedDate;
    NTPBArticleListRecord *_record;
    FCInterestToken *_interestToken;
}

@property (nonatomic, readonly) NTPBArticleListRecord *record;
@property (nonatomic, readonly) FCInterestToken *interestToken;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSArray *articleIDs;
@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic, readonly) FCArticleListEditorialMetadata *editorialMetadata;
@property (copy, nonatomic, readonly) NSDate *lastModifiedDate;

- (id)initWithRecord:(id)arg1 interestToken:(id)arg2;

@end
