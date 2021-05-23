/*
 Image: /System/Library/Frameworks/QuickLookThumbnailing.framework/QuickLookThumbnailing
 */

#import <Foundation/NSObject.h>

@class NSData, NSDate, NSString;

@interface QLThumbnailVersion : NSObject

{
    NSDate *_modificationDate;
    unsigned long long _fileSize;
    NSString *_generatorID;
    NSString *_generatorVersion;
    NSData *_versionIdentifier;
}

@property (copy) NSString *generatorID;
@property (copy) NSString *generatorVersion;
@property (copy) NSDate *modificationDate;
@property (copy) NSData *versionIdentifier;
@property unsigned long long fileSize;
@property (readonly, getter=isDefaultVersion) _Bool defaultVersion;
@property (readonly, getter=isAutomaticallyGenerated) _Bool automaticallyGenerated;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithFileURL:(id)arg1 automaticallyGenerated:(_Bool)arg2;
- (id)initWithFPItem:(id)arg1 automaticallyGenerated:(_Bool)arg2;
- (id)initWithModificationDate:(id)arg1 fileSize:(unsigned long long)arg2 versionIdentifier:(id)arg3 generatorID:(id)arg4 generatorVersion:(id)arg5;
- (void)getGeneratorID:(id *)arg1 version:(id *)arg2;
- (id)initWithFileURL:(id)arg1 generatorID:(id)arg2 generatorVersion:(id)arg3;
- (id)initWithFPItem:(id)arg1 generatorID:(id)arg2 generatorVersion:(id)arg3;
- (_Bool)shouldBeInvalidatedByThumbnailWithVersion:(id)arg1;

@end
