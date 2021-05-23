/*
 Image: /System/Library/PrivateFrameworks/SoftwareUpdateServicesUI.framework/SoftwareUpdateServicesUI
 */

#import <SoftwareUpdateServices/SUDescriptor.h>

@interface SUSUIFakeSUDescriptor : SUDescriptor

- (id)productVersion;
- (id)productBuildVersion;
- (int)updateType;
- (id)publisher;
- (id)documentation;
- (_Bool)isDownloadable;
- (unsigned long long)downloadSize;
- (unsigned long long)installationSize;
- (id)humanReadableUpdateName;
- (id)productSystemName;
- (unsigned long long)preparationSize;
- (_Bool)isDownloadableOverCellular;

@end
