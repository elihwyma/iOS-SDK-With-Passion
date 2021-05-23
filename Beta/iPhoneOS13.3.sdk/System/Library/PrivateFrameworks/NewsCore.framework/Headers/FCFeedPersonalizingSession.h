/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class FCDateRange, NSString;

@interface FCFeedPersonalizingSession : NSObject

{
    FCDateRange *_dateRange;
    unsigned long long _fixedArticleCount;
    long long _feedType;
    NSString *_sessionID;
}

@property (retain, nonatomic) FCDateRange *dateRange;
@property (nonatomic) unsigned long long fixedArticleCount;
@property (nonatomic) long long feedType;
@property (retain, nonatomic) NSString *sessionID;

@end
