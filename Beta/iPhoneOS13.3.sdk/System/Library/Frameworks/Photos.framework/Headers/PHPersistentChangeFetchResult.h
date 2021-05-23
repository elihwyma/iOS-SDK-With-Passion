/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Foundation/NSObject.h>

@class NSArray, NSManagedObjectContext, NSPersistentHistoryToken;

@interface PHPersistentChangeFetchResult : NSObject

{
    NSPersistentHistoryToken *_initialToken;
    NSArray *_transactions;
    NSManagedObjectContext *_context;
    unsigned long long _maximumChangeThreshold;
    unsigned long long _changeCount;
}

@property (nonatomic, readonly) unsigned long long changeCount;

+ (id)fetchResultWithToken:(id)arg1 maximumChangeThreshold:(unsigned long long)arg2 managedObjectObjectContext:(id)arg3 error:(id *)arg4;

- (id)initWithInitialToken:(id)arg1 transactions:(id)arg2 maximumChangeThreshold:(unsigned long long)arg3 managedObjectObjectContext:(id)arg4;
- (void)enumerateChangesWithBlock:(CDUnknownBlockType)arg1;

@end
