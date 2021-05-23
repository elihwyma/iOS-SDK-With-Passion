/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSData, NSDictionary, NSString;

@interface PLAssetJournalEntryPayloadResource : NSObject

{
    NSDictionary *_payloadAttributes;
}

@property (nonatomic, readonly) unsigned long long cplType;
@property (nonatomic, readonly) unsigned int dataStoreClassID;
@property (nonatomic, readonly) unsigned int resourceType;
@property (nonatomic, readonly) unsigned int version;
@property (nonatomic, readonly) unsigned int recipeID;
@property (nonatomic, readonly) NSString *uniformTypeIdentifier;
@property (nonatomic, readonly) NSString *volumeUuidString;
@property (nonatomic, readonly) NSData *bookmarkData;
@property (nonatomic, readonly) NSString *bookmarkPath;
@property (nonatomic, readonly) NSDictionary *payloadAttributes;

- (id)description;
- (short)trashedState;
- (id)fourCharCodeName;
- (id)initWithPayloadAttributes:(id)arg1;
- (id)validatedExternalResourceWithAsset:(id)arg1 isCPLEnabled:(_Bool)arg2;
- (void)updateStoredResource:(id)arg1;
- (_Bool)isOriginalResource;
- (_Bool)isAdjusted;
- (_Bool)isReferenceResource;

@end
