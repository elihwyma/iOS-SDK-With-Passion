/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/FCModifyRecordsCommand.h>

@interface FCModifyUserInfoCommand : FCModifyRecordsCommand

+ (id)desiredKeys;

- (id)initWithUserInfoRecord:(id)arg1;
- (_Bool)mergeLocalRecord:(id)arg1 withRemoteRecord:(id)arg2;

@end
