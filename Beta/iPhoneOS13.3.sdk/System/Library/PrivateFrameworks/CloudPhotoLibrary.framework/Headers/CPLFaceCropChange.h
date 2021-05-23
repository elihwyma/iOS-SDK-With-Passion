/*
 Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

#import <CloudPhotoLibrary/CPLRecordChange.h>

@class NSData, NSString;

@interface CPLFaceCropChange : CPLRecordChange

{
    NSString *_personIdentifier;
    NSData *_resourceData;
    long long _faceCropType;
    NSString *_rejectedPersonIdentifier;
}

@property (copy, nonatomic) NSString *personIdentifier;
@property (copy, nonatomic) NSData *resourceData;
@property (nonatomic) long long faceCropType;
@property (copy, nonatomic) NSString *rejectedPersonIdentifier;

- (_Bool)supportsDeletion;
- (id)propertiesDescription;
- (_Bool)supportsDirectDeletion;
- (id)relatedIdentifier;
- (void)setRelatedIdentifier:(id)arg1;
- (_Bool)validateFullRecord;
- (_Bool)validateChangeWithError:(id *)arg1;
- (id)personScopedIdentifier;
- (void)setPersonScopedIdentifier:(id)arg1;

@end
