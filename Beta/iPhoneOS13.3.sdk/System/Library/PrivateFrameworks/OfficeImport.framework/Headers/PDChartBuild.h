/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/PDBuild.h>

__attribute__((visibility("hidden")))
@interface PDChartBuild : PDBuild

{
    int mChartBuildType;
}

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (int)type;
- (void)setType:(int)arg1;
- (id)initWithBuildType:(int)arg1;

@end
