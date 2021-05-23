/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/FCOperation.h>

@class FCCKPrivateDatabase;

@interface FCCKPrivateDatabaseOperation : FCOperation

{
    _Bool _skipPreflight;
    _Bool _handleIdentityLoss;
    FCCKPrivateDatabase *_database;
}

@property (retain, nonatomic) FCCKPrivateDatabase *database;
@property (nonatomic) _Bool skipPreflight;
@property (nonatomic) _Bool handleIdentityLoss;

- (id)init;
- (unsigned long long)maxRetries;
- (_Bool)validateOperation;
- (_Bool)canRetryWithError:(id)arg1 retryAfter:(id *)arg2;
- (void)runChildCKOperation:(id)arg1 destination:(long long)arg2;

@end
