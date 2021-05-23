/*
 Image: /System/Library/PrivateFrameworks/EmailCore.framework/EmailCore
 */

#import <EmailCore/Swift-Protocol.h>

@class NSArray, NSDictionary;

@protocol ECTransferMessageActionResultsBuilder <Swift>

@property (nonatomic) long long phaseForResults;
@property (copy, nonatomic) NSArray *completedItems;
@property (copy, nonatomic) NSArray *failedItems;
@property (copy, nonatomic) NSArray *createdServerMessages;
@property (copy, nonatomic) NSDictionary *downloadedDataByCopyItems;

@end
