/*
 Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;

@interface IMDContactStoreChangeHistoryEventsHandler : NSObject

{
    NSMutableDictionary *_aliasToCNIDMap;
    NSMutableDictionary *_CNIDToAliasesMap;
}

@property (retain, nonatomic) NSMutableDictionary *aliasToCNIDMap;
@property (retain, nonatomic) NSMutableDictionary *CNIDToAliasesMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)visitDropEverythingEvent:(id)arg1;
- (void)visitAddContactEvent:(id)arg1;
- (void)visitUpdateContactEvent:(id)arg1;
- (void)visitDeleteContactEvent:(id)arg1;
- (id)generateCNIDToAliasesMapFrom:(id)arg1;
- (void)handleAddOrUpdateEventForCNContact:(id)arg1;
- (id)matchAliasesFromCacheForCNContact:(id)arg1;
- (id)initWithAliasToCNIDMap:(id)arg1;
- (id)getAliasToCNIDMap;

@end
