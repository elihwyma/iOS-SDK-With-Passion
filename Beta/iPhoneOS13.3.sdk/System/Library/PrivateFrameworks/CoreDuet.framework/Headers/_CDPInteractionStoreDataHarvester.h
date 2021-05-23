/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableDictionary, NSPredicate, NSString, _CDInteractionStore;

@interface _CDPInteractionStoreDataHarvester : NSObject

{
    NSMutableDictionary *_identifierToContactMap;
    _CDInteractionStore *_store;
    NSPredicate *_predicate;
    NSArray *_interactions;
}

@property (retain, nonatomic) _CDInteractionStore *store;
@property (retain, nonatomic) NSPredicate *predicate;
@property (nonatomic, readonly) NSArray *interactions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)loadWithLimit:(unsigned long long)arg1 dataPointReader:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (id)contactForIdentifier:(id)arg1;

@end
