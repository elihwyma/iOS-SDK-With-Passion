/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface OABBlip : NSObject

+ (id)readBlipFromEshBlip:(struct EshBlip *)arg1;
+ (id)delayedSubBlipWithMetafileInfo:(const struct EshMetafileBlipInfo *)arg1;
+ (void)setMetafileBoundsFromPictData:(id)arg1 info:(struct EshMetafileBlipInfo *)arg2;
+ (id)compressMetafileData:(id)arg1 info:(struct EshMetafileBlipInfo *)arg2;
+ (void)writeEmptyBlipStoreEntry:(struct EshBSE *)arg1;
+ (struct EshBlip *)writeBlip:(id)arg1;
+ (id)readBlipFromBse:(id)arg1;
+ (void)writeBlip:(id)arg1 toBlipStoreEntry:(struct EshBSE *)arg2;
+ (int)blipTypeForBlipSignature:(int)arg1;
+ (id)dibFileContentsWithDibBlipData:(const struct OcBinaryData *)arg1;
+ (id)subBlipWithMetafileInfo:(const struct EshMetafileBlipInfo *)arg1;

@end
