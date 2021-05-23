/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/FCModifyRecordsCommand.h>

@interface FCModifyIssueHistoryCommand : FCModifyRecordsCommand

+ (id)desiredKeys;

- (id)recordZoneName;
- (id)initWithIssueHistoryItems:(id)arg1 merge:(_Bool)arg2;
- (_Bool)mergeLocalRecord:(id)arg1 withRemoteRecord:(id)arg2;

@end
