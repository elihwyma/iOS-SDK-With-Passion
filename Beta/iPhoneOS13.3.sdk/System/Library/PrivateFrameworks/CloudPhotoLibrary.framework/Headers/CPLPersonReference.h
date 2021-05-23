/*
 Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

#import <NSObject.h>

@class NSDictionary, NSString;

@interface CPLPersonReference : NSObject

{
    NSDictionary *_extraProperties;
    NSString *_personIdentifier;
}

@property (copy, nonatomic) NSString *personIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSDictionary *extraProperties;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSerializedString:(id)arg1;
- (id)serializedString;
- (id)initWithCPLArchiver:(id)arg1;
- (id)plistArchiveWithCPLArchiver:(id)arg1;

@end
