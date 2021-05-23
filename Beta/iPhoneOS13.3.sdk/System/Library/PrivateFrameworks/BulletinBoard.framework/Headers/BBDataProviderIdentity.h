/*
 Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

#import <Foundation/NSObject.h>

@class BBSectionIcon, BBSectionInfo, BBSectionParameters, NSArray, NSDictionary, NSString;

@interface BBDataProviderIdentity : NSObject

{
    CDStruct_0e6e99aa _traits;
    NSString *_sectionIdentifier;
    NSString *_universalSectionIdentifier;
    BBSectionInfo *_defaultSectionInfo;
    NSString *_sectionDisplayName;
    BBSectionIcon *_sectionIcon;
    NSArray *_sortDescriptors;
    BBSectionParameters *_sectionParameters;
    NSArray *_defaultSubsectionInfos;
    NSDictionary *_subsectionDisplayNames;
    NSString *_sortKey;
    NSString *_parentSectionIdentifier;
    _Bool _syncsBulletinDismissal;
    NSDictionary *_filterDisplayNames;
}

@property (nonatomic, readonly) CDStruct_0e6e99aa traits;
@property (copy, nonatomic) NSString *sectionIdentifier;
@property (copy, nonatomic) NSString *universalSectionIdentifier;
@property (copy, nonatomic) BBSectionInfo *defaultSectionInfo;
@property (copy, nonatomic) NSString *sectionDisplayName;
@property (copy, nonatomic) BBSectionIcon *sectionIcon;
@property (copy, nonatomic) NSArray *sortDescriptors;
@property (retain, nonatomic) BBSectionParameters *sectionParameters;
@property (copy, nonatomic) NSArray *defaultSubsectionInfos;
@property (copy, nonatomic) NSString *sortKey;
@property (copy, nonatomic) NSDictionary *subsectionDisplayNames;
@property (nonatomic, readonly) _Bool syncsBulletinDismissal;
@property (copy, nonatomic) NSString *parentSectionIdentifier;
@property (copy, nonatomic) NSDictionary *filterDisplayNames;

+ (_Bool)supportsSecureCoding;
+ (id)identityForDataProvider:(id)arg1;
+ (id)identityForRemoteDataProvider:(id)arg1;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initForDataProvider:(id)arg1 forRemoteDataProvider:(_Bool)arg2;

@end
