/*
 Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

#import <BulletinDistributorCompanion/BLTActionInfo.h>

@class NSString;

@interface BLTSupplementaryActionInfo : BLTActionInfo

{
    NSString *_identifier;
}

@property (copy, nonatomic) NSString *identifier;

- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;

@end
