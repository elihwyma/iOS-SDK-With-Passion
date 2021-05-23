/*
 Image: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <DAEAS/ASTask.h>

@class DASearchQuery;

@interface ASSearchTask : ASTask

{
    int _numDownloadedElements;
    DASearchQuery *_query;
}

@property (retain, nonatomic) DASearchQuery *query;
@property (nonatomic) int numDownloadedElements;

- (id)description;
- (id)initWithQuery:(id)arg1;
- (long long)taskStatusForExchangeStatus:(int)arg1;
- (int)commandCode;

@end
