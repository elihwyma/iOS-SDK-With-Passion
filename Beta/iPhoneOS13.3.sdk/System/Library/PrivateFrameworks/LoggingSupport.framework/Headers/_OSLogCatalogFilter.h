/*
 Image: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
 */

#import <Foundation/NSObject.h>

@class NSMutableSet;

__attribute__((visibility("hidden")))
@interface _OSLogCatalogFilter : NSObject

{
    NSMutableSet *_pidAccept;
    NSMutableSet *_processLookupSubstr;
    NSMutableSet *_senderLookupSubstr;
    NSMutableSet *_subsysSubstrAccept;
    NSMutableSet *_uuidAccept;
    char *_uuidtext_path;
    _Bool _hasItems;
    _Bool _hasSharedCacheItems;
}

- (void)dealloc;
- (void)visitPredicate:(id)arg1;
- (void)visitPredicateExpression:(id)arg1;
- (void)visitPredicateOperator:(id)arg1;
- (void)addProcessID:(id)arg1;
- (_Bool)isKeptCatalog:(struct catalog_s *)arg1;
- (void)processComparisonPredicate:(id)arg1;
- (id)initWithPredicate:(id)arg1 collection:(id)arg2;
- (_Bool)containsProcessID:(id)arg1;
- (void)addSubsystem:(id)arg1;
- (_Bool)containsSubsystemSubstr:(id)arg1;
- (void)addUUID:(id)arg1;
- (_Bool)containsUUID:(id)arg1;
- (void)addProcessLookupSubstr:(id)arg1;
- (void)addSenderLookupSubstr:(id)arg1;
- (_Bool)containsProcessLookupSubstr:(id)arg1;
- (_Bool)containsSenderLookupSubstr:(id)arg1;
- (void)generateUUIDSet;
- (void)readDSOUUIDs;
- (void)handleDSOFile:(struct _ftsent *)arg1;
- (void)readDSCUUIDs;
- (struct uuiddb_dsc_map_s *)getDSCMap;
- (void)handleDSCContents:(struct uuiddb_dsc_map_s *)arg1;
- (void)processLeftExpression:(id)arg1 andRightExpression:(id)arg2;

@end
