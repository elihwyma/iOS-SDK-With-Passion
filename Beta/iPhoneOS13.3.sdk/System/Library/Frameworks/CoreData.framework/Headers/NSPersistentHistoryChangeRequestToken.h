/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

@class NSData, NSDate, NSDictionary;

__attribute__((visibility("hidden")))
@interface NSPersistentHistoryChangeRequestToken : NSObject

{
    NSData *_fetchData;
    NSDictionary *_token;
    NSDate *_date;
    long long _resultType;
    _Bool _delete;
    _Bool _transactionFromToken;
    unsigned long long _fetchLimit;
    unsigned long long _fetchBatchSize;
}

@property (retain, nonatomic, readonly) NSData *fetchData;
@property (retain, nonatomic, readonly) NSDictionary *token;
@property (retain, nonatomic, readonly) NSDate *date;
@property (nonatomic, readonly) long long resultType;
@property (nonatomic, readonly) _Bool delete;
@property (nonatomic, readonly) _Bool transactionFromToken;
@property (nonatomic, readonly) unsigned long long fetchLimit;
@property (nonatomic, readonly) unsigned long long fetchBatchSize;

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initForRequest:(id)arg1;

@end
