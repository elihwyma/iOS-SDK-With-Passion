/*
 Image: /System/Library/Frameworks/NotificationCenter.framework/NotificationCenter
 */

#import <Foundation/NSMutableArray.h>

@interface NSMutableArray (NCStackSupport)

- (void)nc_push:(id)arg1;
- (id)nc_peek;
- (id)nc_pop;

@end
