/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

@class NSDate, NSString, NSURL;

@interface WBSSiriIntelligenceDonorHistoryData : NSObject

{
    NSURL *_pageURL;
    NSString *_userVisibleURLString;
    NSString *_pageTitle;
    NSString *_fullPageText;
    NSString *_readerText;
    NSDate *_lastVisitedDate;
    unsigned long long _visitCount;
}

@property (copy, nonatomic) NSURL *pageURL;
@property (copy, nonatomic) NSString *userVisibleURLString;
@property (copy, nonatomic) NSString *pageTitle;
@property (copy, nonatomic) NSString *fullPageText;
@property (copy, nonatomic) NSString *readerText;
@property (copy, nonatomic) NSDate *lastVisitedDate;
@property (nonatomic) unsigned long long visitCount;

@end
