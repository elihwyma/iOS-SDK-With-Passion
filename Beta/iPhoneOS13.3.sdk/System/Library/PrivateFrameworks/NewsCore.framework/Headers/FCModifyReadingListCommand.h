/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/FCModifyRecordsCommand.h>

@interface FCModifyReadingListCommand : FCModifyRecordsCommand

+ (id)desiredKeys;

- (_Bool)mergeLocalRecord:(id)arg1 withRemoteRecord:(id)arg2;
- (id)initWithReadingListEntries:(id)arg1 merge:(_Bool)arg2;

@end
