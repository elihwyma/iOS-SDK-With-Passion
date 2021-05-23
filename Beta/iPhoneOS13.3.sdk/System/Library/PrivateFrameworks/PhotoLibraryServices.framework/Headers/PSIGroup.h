/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/PSIReusableObject.h>

@class NSMutableString, NSString;

@interface PSIGroup : PSIReusableObject

{
    NSMutableString *_contentString;
    NSMutableString *_normalizedString;
    NSMutableString *_lookupIdentifier;
    unsigned long long _compressedRanges[2];
    struct _NSRange _tokenRanges[8];
    unsigned long long _tokenRangesCount;
    short _category;
    unsigned long long _groupId;
    unsigned long long _owningGroupId;
    struct __CFArray *_assetIds;
    struct __CFArray *_collectionIds;
}

@property (nonatomic) unsigned long long groupId;
@property (nonatomic) unsigned long long owningGroupId;
@property (nonatomic) short category;
@property (nonatomic, readonly) NSString *contentString;
@property (nonatomic, readonly) NSString *normalizedString;
@property (nonatomic, readonly) NSString *lookupIdentifier;
@property (retain, nonatomic) struct __CFArray *assetIds;
@property (retain, nonatomic) struct __CFArray *collectionIds;

+ (void)_getTokenRanges:(struct _NSRange [8])arg1 fromCompressedRanges:(unsigned long long [2])arg2;
+ (void)getCompressedRanges:(unsigned long long [2])arg1 fromTokenRanges:(CDStruct_627e0f85 *)arg2 count:(long long)arg3;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)prepareForReuse;
- (id)initWithContentString:(id)arg1 lookIdentifier:(id)arg2 category:(short)arg3 owningGroupId:(long long)arg4;
- (id)_tokenRangesDescription;
- (long long)compareToGroup:(id)arg1;
- (unsigned long long)tokenRangesCount;
- (struct _NSRange)tokenRangeAtIndex:(unsigned long long)arg1;
- (void)prepareFromStatement:(struct sqlite3_stmt *)arg1;
- (void)prepareFromFilenameStatement:(struct sqlite3_stmt *)arg1;
- (unsigned long long)groupIdForObjectLookup;
- (void)unionCollectionIdsWithGroup:(id)arg1;
- (void)unionIdsWithGroup:(id)arg1;

@end
