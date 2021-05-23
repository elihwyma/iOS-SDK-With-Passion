/*
 Image: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
 */

#import <Foundation/NSObject.h>

#import <EmailDaemon/Swift-Protocol.h>

@class NSArray, NSMutableDictionary, NSSet;

__attribute__((visibility("hidden")))
@interface _EMSearchableIndexPendingRemovals : NSObject <Swift>

{
    NSMutableDictionary *_reasonsByIdentifier;
    NSSet *_purgeReasons;
    NSSet *_exclusionReasons;
}

@property (readonly) unsigned long long count;
@property (nonatomic, readonly) NSArray *identifiers;
@property (nonatomic, readonly) NSArray *purgedIdentifiers;
@property (nonatomic, readonly) NSArray *deletedIdentifiers;
@property (copy, nonatomic) NSSet *purgeReasons;
@property (copy, nonatomic) NSSet *exclusionReasons;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithPurgeReasons:(id)arg1 exclusionReasons:(id)arg2;
- (void)removeAllIdentifiers;
- (void)addIdentifiers:(id)arg1 withReasons:(id)arg2;
- (id)_identifiersPassingReasonsTest:(CDUnknownBlockType)arg1;
- (void)removeIdentifier:(id)arg1;

@end
