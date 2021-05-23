/*
 Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

#import <Foundation/NSObject.h>

#import <BulletinBoard/Swift-Protocol.h>

@class BBSectionInfo, NSString;

@interface BBParentSectionDataProviderFactory : NSObject <Swift>

{
    BBSectionInfo *_sectionInfo;
    NSString *_universalSectionIdentifier;
}

@property (copy, nonatomic) BBSectionInfo *sectionInfo;
@property (copy, nonatomic) NSString *universalSectionIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)factoryFromSectionInfo:(id)arg1;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)sectionIdentifier;
- (id)sectionDisplayName;
- (id)sectionIcon;
- (id)initWithSectionInfo:(id)arg1;
- (id)dataProviders;

@end
