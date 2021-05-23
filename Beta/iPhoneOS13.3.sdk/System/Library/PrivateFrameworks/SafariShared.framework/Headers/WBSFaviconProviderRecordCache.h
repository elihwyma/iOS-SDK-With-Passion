/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface WBSFaviconProviderRecordCache : NSObject

{
    NSMutableDictionary *_iconURLStringToInfoDictionary;
    NSMutableDictionary *_iconUUIDToURLStringDictionary;
}

- (id)init;
- (id)iconInfoForURLString:(id)arg1;
- (void)setDateAdded:(id)arg1 forFaviconURLString:(id)arg2 iconUUID:(id)arg3 iconSize:(struct CGSize)arg4 hasGeneratedResolutions:(_Bool)arg5;
- (id)dateAddedForFaviconURLString:(id)arg1 iconUUID:(id *)arg2 size:(struct CGSize *)arg3;
- (void)removeAllRecords;
- (void)removeRecordForIconUUIDs:(id)arg1;

@end
