/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Foundation/NSObject.h>

@class NSDate, NSMutableDictionary, NSNumber, NSString;

@interface PHImportDuplicateInfo : NSObject

{
    NSMutableDictionary *_info;
}

@property (retain, nonatomic) NSMutableDictionary *info;
@property (nonatomic, readonly) NSString *fileName;
@property (nonatomic, readonly) NSDate *imageDate;
@property (retain, nonatomic) NSDate *alternateImportImageDate;
@property (nonatomic, readonly) NSNumber *fileSize;
@property (nonatomic, readonly) _Bool isInTrash;
@property (nonatomic, readonly) NSString *fingerprint;
@property (nonatomic, readonly) NSString *avchdFingerprint;
@property (nonatomic, readonly) double timezoneOffset;
@property (nonatomic, readonly) _Bool hasVideoComplement;

- (id)description;
- (_Bool)isLegacy;
- (id)objectID;
- (id)originatingAssetIdentifier;
- (id)initWithAssetInfo:(id)arg1;

@end
