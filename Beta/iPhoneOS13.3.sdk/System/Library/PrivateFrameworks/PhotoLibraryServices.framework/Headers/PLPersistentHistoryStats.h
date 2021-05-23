/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@interface PLPersistentHistoryStats : NSObject

{
    long long _filePageCount;
    long long _transactionsPageCount;
    long long _transactionStringsPageCount;
    long long _changesPageCount;
}

@property (nonatomic) long long filePageCount;
@property (nonatomic) long long transactionsPageCount;
@property (nonatomic) long long transactionStringsPageCount;
@property (nonatomic) long long changesPageCount;
@property (nonatomic, readonly) long long persistentHistoryPageCount;
@property (nonatomic, readonly) double transactionsPageCountPercent;
@property (nonatomic, readonly) double transactionStringsPageCountPercent;
@property (nonatomic, readonly) double changesPageCountPercent;
@property (nonatomic, readonly) double persistentHistoryPageCountPercent;

+ (id)statsFromDatabase:(id)arg1;

- (double)_pageCountAsPercentOfFile:(long long)arg1;

@end
