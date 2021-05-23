/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/FCModifyRecordsCommand.h>

@class NSArray;

@interface FCModifyHistoryCommand : FCModifyRecordsCommand

{
    NSArray *_historyItems;
    NSArray *_recordItems;
}

@property (copy, nonatomic, readonly) NSArray *historyItems;
@property (copy, nonatomic, readonly) NSArray *recordItems;

+ (id)desiredKeys;

- (id)recordZoneName;
- (id)initWithHistoryItems:(id)arg1 merge:(_Bool)arg2;
- (_Bool)mergeLocalRecord:(id)arg1 withRemoteRecord:(id)arg2;

@end
