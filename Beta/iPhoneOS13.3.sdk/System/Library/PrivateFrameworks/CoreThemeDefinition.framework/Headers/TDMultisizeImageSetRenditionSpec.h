/*
 Image: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
 */

#import <CoreThemeDefinition/TDRenditionSpec.h>

@class NSSet, TDMultisizeImageSetProduction;

@interface TDMultisizeImageSetRenditionSpec : TDRenditionSpec

@property (retain, nonatomic) TDMultisizeImageSetProduction *multisizeImageSetProduction;
@property (retain, nonatomic) NSSet *multisizeImageRenditions;

- (id)createCSIRepresentationWithCompression:(_Bool)arg1 colorSpaceID:(unsigned long long)arg2 document:(id)arg3;
- (_Bool)canBePackedWithDocument:(id)arg1;

@end
