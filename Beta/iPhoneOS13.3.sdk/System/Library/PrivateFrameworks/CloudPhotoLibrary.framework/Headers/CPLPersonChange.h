/*
 Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

#import <CloudPhotoLibrary/CPLRecordChange.h>

@class NSData, NSDictionary, NSString;

@interface CPLPersonChange : CPLRecordChange

{
    NSString *_fullName;
    long long _personType;
    long long _manualSortOrder;
    NSString *_displayName;
    long long _verifiedType;
    NSString *_mergeTargetPersonIdentifier;
    NSData *_contactDescriptor;
}

@property (copy, nonatomic) NSData *contactDescriptor;
@property (copy, nonatomic) NSString *fullName;
@property (nonatomic) long long personType;
@property (nonatomic) long long manualSortOrder;
@property (copy, nonatomic) NSDictionary *contactMatchingDictionary;
@property (copy, nonatomic) NSString *displayName;
@property (nonatomic) long long verifiedType;
@property (copy, nonatomic) NSString *mergeTargetPersonIdentifier;

+ (_Bool)serverSupportsGraphPeopleHome;
+ (_Bool)serverSupportsMergeTargetRef;
+ (_Bool)cplShouldIgnorePropertyForCoding:(id)arg1;
+ (_Bool)cplShouldIgnorePropertyForEquality:(id)arg1;

- (_Bool)supportsDeletion;
- (_Bool)supportsDirectDeletion;
- (id)relatedIdentifier;
- (void)setRelatedIdentifier:(id)arg1;
- (_Bool)validateRecordForTracker:(id)arg1;

@end
