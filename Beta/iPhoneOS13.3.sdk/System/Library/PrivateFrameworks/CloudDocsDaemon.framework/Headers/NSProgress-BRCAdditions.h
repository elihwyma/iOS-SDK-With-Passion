/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <Foundation/NSProgress.h>

@interface NSProgress (BRCAdditions)

- (void)brc_publish;
- (void)brc_unpublish;
- (id)brc_dumpDescription;

@end
