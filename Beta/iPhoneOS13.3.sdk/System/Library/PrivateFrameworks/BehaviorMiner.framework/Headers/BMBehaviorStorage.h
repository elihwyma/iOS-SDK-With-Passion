/*
 Image: /System/Library/PrivateFrameworks/BehaviorMiner.framework/BehaviorMiner
 */

#import <Foundation/NSObject.h>

@class BMManagedObjectConverter, NSError, NSManagedObjectContext, NSPersistentContainer, NSURL;

@interface BMBehaviorStorage : NSObject

{
    struct os_unfair_lock_s _setupLock;
    _Bool _readOnly;
    NSURL *_URL;
    NSError *_setupError;
    NSPersistentContainer *_container;
    NSManagedObjectContext *_context;
    BMManagedObjectConverter *_converter;
}

@property (copy, nonatomic) NSError *setupError;
@property (retain, nonatomic) NSPersistentContainer *container;
@property (retain, nonatomic) NSManagedObjectContext *context;
@property (retain, nonatomic) BMManagedObjectConverter *converter;
@property (copy, nonatomic) NSURL *URL;
@property (nonatomic, readonly) _Bool readOnly;

+ (id)defaultURL;

- (id)init;
- (void)setupStorage;
- (id)initWithURL:(id)arg1 readOnly:(_Bool)arg2;
- (void)deleteAllWithError:(id *)arg1;
- (void)saveRules:(id)arg1 error:(id *)arg2;
- (id)fetchRulesWithSupport:(double)arg1 confidence:(double)arg2 filters:(id)arg3 error:(id *)arg4;

@end
