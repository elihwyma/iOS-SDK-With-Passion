/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString, WDDocument;

__attribute__((visibility("hidden")))
@interface WDCitation : NSObject

{
    NSString *mSourceType;
    NSMutableArray *mAuthors;
    NSString *mYear;
    NSMutableArray *mTitles;
    NSMutableArray *mUrls;
    NSString *mPeriodicalTitle;
    NSString *mVolume;
    NSString *mNumber;
    NSString *mSection;
    NSString *mPubDate;
    NSString *mPages;
    WDDocument *mDocument;
}

@property (retain, nonatomic) NSString *year;
@property (retain, nonatomic) NSMutableArray *authors;
@property (retain, nonatomic) NSString *sourceType;
@property (retain, nonatomic) NSMutableArray *titles;
@property (retain, nonatomic) NSString *periodicalTitle;
@property (retain, nonatomic) NSString *volume;
@property (retain, nonatomic) NSString *number;
@property (retain, nonatomic) NSString *section;
@property (retain, nonatomic) NSString *pubDate;
@property (retain, nonatomic) NSMutableArray *urls;
@property (retain, nonatomic) NSString *pages;
@property (weak, readonly) WDDocument *document;

+ (id)refTypeEnumMap;
+ (id)wordRefTypeEnumMap;
+ (struct _xmlNode *)nodeAtPath:(id)arg1 nodePtr:(struct _xmlNode *)arg2;
+ (struct _xmlNode *)trimStyle:(struct _xmlNode *)arg1;
+ (id)endNoteStringForRefType:(int)arg1;
+ (int)refTypeForWordString:(id)arg1;
+ (id)wordStringForRefType:(int)arg1;
+ (id)subStringOf:(struct _xmlNode *)arg1 forPath:(id)arg2;
+ (id)stringValueForNodeAtPath:(id)arg1 nodePtr:(struct _xmlNode *)arg2 trimStyle:(_Bool)arg3;
+ (id)stringValuesForNodesAtPath:(id)arg1 nodePtr:(struct _xmlNode *)arg2 trimStyle:(_Bool)arg3;

- (id)description;
- (id)initWithDocument:(id)arg1;

@end
