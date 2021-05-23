/*
 Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary;

@interface BLTBulletinFetcher : NSObject

{
    NSDictionary *_bulletinIDs;
    NSArray *_sectionIDs;
    long long _sectionIDsIndex;
    NSArray *_publisherMatchIDsForSection;
    unsigned long long _publisherMatchIDsForSectionIndex;
    CDUnknownBlockType _clientCompletion;
    CDUnknownBlockType _fetcher;
}

+ (id)batchBulletinFetchForBulletinIDs:(id)arg1 fetcher:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;

- (_Bool)_incrementSection;
- (void)_fetchBulletins;
- (void)_setFetcher:(CDUnknownBlockType)arg1;
- (void)_setClientCompletion:(CDUnknownBlockType)arg1;
- (void)_setBulletinIDs:(id)arg1;

@end
