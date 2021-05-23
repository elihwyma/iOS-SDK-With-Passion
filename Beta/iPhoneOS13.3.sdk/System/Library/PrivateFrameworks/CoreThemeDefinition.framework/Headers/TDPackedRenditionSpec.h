/*
 Image: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
 */

#import <CoreThemeDefinition/TDRenditionSpec.h>

@class TDThemeCompressionType;

@interface TDPackedRenditionSpec : TDRenditionSpec

@property (retain, nonatomic) TDThemeCompressionType *compressionType;

- (id)createCSIRepresentationWithCompression:(_Bool)arg1 colorSpaceID:(unsigned long long)arg2 document:(id)arg3;
- (id)renditionPackName;

@end
