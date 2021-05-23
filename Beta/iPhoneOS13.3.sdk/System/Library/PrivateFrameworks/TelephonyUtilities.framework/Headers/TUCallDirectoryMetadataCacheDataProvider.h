/*
 Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

#import <TelephonyUtilities/TUMetadataCacheDataProvider.h>

@class CXCallDirectoryManager;

@interface TUCallDirectoryMetadataCacheDataProvider : TUMetadataCacheDataProvider

{
    int _identificationEntriesChangedNotifyToken;
    CXCallDirectoryManager *_callDirectoryManager;
    CDUnknownBlockType _countryDialingCode;
    CDUnknownBlockType _firstIdentificationEntriesForEnabledExtensions;
}

@property (nonatomic, readonly) CXCallDirectoryManager *callDirectoryManager;
@property (nonatomic, readonly) int identificationEntriesChangedNotifyToken;
@property (copy, nonatomic) CDUnknownBlockType countryDialingCode;
@property (copy, nonatomic) CDUnknownBlockType firstIdentificationEntriesForEnabledExtensions;

- (id)init;
- (void)dealloc;
- (void)updateCacheWithDestinationIDs:(id)arg1 withGroup:(id)arg2;

@end
