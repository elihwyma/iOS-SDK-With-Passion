/*
 Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

#import <Foundation/NSObject.h>

@class NSMutableSet, NSUserDefaults;

__attribute__((visibility("hidden")))
@interface MSPLongLivedCKOpCache : NSObject

{
    NSUserDefaults *_defaults;
    NSMutableSet *_currentOpIDs;
}

@property (retain, nonatomic) NSUserDefaults *defaults;
@property (retain, nonatomic) NSMutableSet *currentOpIDs;

+ (id)sharedCache;

- (id)init;
- (id)_operationIDsByType;
- (id)_operationIDsForType:(id)arg1;
- (void)_setOperationIDs:(id)arg1 forType:(id)arg2;
- (void)addOperation:(id)arg1 forType:(id)arg2;
- (void)removeOperation:(id)arg1 forType:(id)arg2;
- (void)pruneOperationsToIDs:(id)arg1;
- (_Bool)hasOperationID:(id)arg1 forType:(id)arg2;
- (_Bool)isAwareOfOperationID:(id)arg1;
- (_Bool)isCurrentOperationID:(id)arg1;

@end
