/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <CoreData/NSPersistentHistoryToken.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface _NSPersistentHistoryToken : NSPersistentHistoryToken

{
    NSDictionary *_storeTokens;
}

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (long long)compare:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)storeTokens;
- (id)initWithTransactionNumber:(id)arg1 andStoreID:(id)arg2;
- (long long)compareToken:(id)arg1 error:(id *)arg2;

@end
