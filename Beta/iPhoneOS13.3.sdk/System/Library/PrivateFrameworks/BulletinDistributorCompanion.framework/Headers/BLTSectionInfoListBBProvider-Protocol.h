/*
 Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

#import <BulletinDistributorCompanion/Swift-Protocol.h>

@protocol BLTSectionInfoListProviderDelegate;

@protocol BLTSectionInfoListBBProvider <Swift>

@property (weak, nonatomic) id <BLTSectionInfoListProviderDelegate> delegate;

- (unsigned short)sectionInfoForSectionID: /* Error: Ran out of types for this method. */;
- (unsigned short)reloadSection:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)reloadWithCompletion: /* Error: Ran out of types for this method. */;

@end
