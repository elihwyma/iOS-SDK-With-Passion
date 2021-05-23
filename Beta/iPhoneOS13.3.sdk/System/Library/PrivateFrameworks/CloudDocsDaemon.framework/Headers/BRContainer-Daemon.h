/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <CloudDocs/BRContainer.h>

@interface BRContainer (Daemon)

- (id)lastServerUpdate;
- (unsigned int)currentStatus;
- (_Bool)isOverQuota;

@end
