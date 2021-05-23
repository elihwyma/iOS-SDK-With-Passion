/*
 Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

#import <CloudPhotoLibrary/CPLRecordChange.h>

@class CPLSuggestionAssetList, NSData, NSDate, NSString;

@interface CPLSuggestionChange : CPLRecordChange

{
    unsigned short _type;
    unsigned short _subtype;
    unsigned short _notificationState;
    unsigned short _state;
    NSString *_title;
    NSString *_subtitle;
    CPLSuggestionAssetList *_assetList;
    NSDate *_creationDate;
    long long _version;
    NSDate *_activationDate;
    NSDate *_relevantUntilDate;
    NSDate *_expungeDate;
    NSData *_actionData;
    NSData *_featuresData;
}

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (nonatomic) unsigned short type;
@property (nonatomic) unsigned short subtype;
@property (copy, nonatomic) CPLSuggestionAssetList *assetList;
@property (copy, nonatomic) NSDate *creationDate;
@property (nonatomic) unsigned short notificationState;
@property (nonatomic) unsigned short state;
@property (nonatomic) long long version;
@property (copy, nonatomic) NSDate *activationDate;
@property (copy, nonatomic) NSDate *relevantUntilDate;
@property (copy, nonatomic) NSDate *expungeDate;
@property (copy, nonatomic) NSData *actionData;
@property (copy, nonatomic) NSData *featuresData;

+ (_Bool)serverSupportsSuggestion;
+ (id)_createTestSuggestionWithKeyAssets:(id)arg1 representativeAssets:(id)arg2;

- (_Bool)supportsDeletion;
- (id)propertiesDescription;
- (_Bool)supportsDirectDeletion;
- (CDUnknownBlockType)checkDefaultValueBlockForPropertyWithSelector:(SEL)arg1;
- (id)scopedIdentifiersForMapping;
- (id)translateToCloudChangeUsingIDMapping:(id)arg1 error:(id *)arg2;
- (id)translateToClientChangeUsingIDMapping:(id)arg1 error:(id *)arg2;

@end
