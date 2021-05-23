/*
 Image: /System/Library/PrivateFrameworks/SidecarCore.framework/SidecarCore
 */

#import <SidecarCore/SidecarService.h>

__attribute__((visibility("hidden")))
@interface SidecarService_Scanner : SidecarService

+ (id)name;
+ (id)returnTypes;
+ (long long)minimumRapportVersion;

- (id)localizedDescription;
- (id)serviceIdentifier;
- (id)serviceExtension;
- (id)localizedItemName;
- (id)makeRequest;

@end
