/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

#import <HealthDaemon/Swift-Protocol.h>

@class NSMutableSet, NSSet;

@interface HDDatabaseTransactionContext : NSObject <Swift>

{
    long long _journalType;
    long long _cacheScope;
    unsigned long long _options;
    NSMutableSet *_accessibilityAssertions;
}

@property (nonatomic, readonly) _Bool skipJournalMerge;
@property (nonatomic, readonly) _Bool requiresNewDatabaseConnection;
@property (copy, nonatomic, readonly) NSSet *accessibilityAssertions;
@property (nonatomic, readonly, getter=isEmpty) _Bool empty;
@property (nonatomic, readonly) long long journalType;
@property (nonatomic, readonly) long long cacheScope;
@property (nonatomic, readonly) _Bool requiresWrite;
@property (nonatomic, readonly) _Bool requiresProtectedData;
@property (nonatomic, readonly) _Bool highPriority;

+ (id)contextForReadingProtectedData;
+ (id)contextForWritingProtectedData;
+ (id)contextForWriting;
+ (id)_cachedContextForOptions:(unsigned long long)arg1;
+ (id)contextForReading;
+ (id)highPriorityContext;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)_initWithOptions:(unsigned long long)arg1;
- (id)copyForReadingProtectedData;
- (id)copyForWritingProtectedData;
- (id)mergedContextWithContext:(id)arg1 error:(id *)arg2;
- (_Bool)containsContext:(id)arg1 error:(id *)arg2;
- (id)_initWithOptions:(unsigned long long)arg1 journalType:(long long)arg2 cacheScope:(long long)arg3 assertions:(id)arg4;
- (id)copyForWriting;
- (void)_applyOptions:(unsigned long long)arg1 enable:(_Bool)arg2;

@end
