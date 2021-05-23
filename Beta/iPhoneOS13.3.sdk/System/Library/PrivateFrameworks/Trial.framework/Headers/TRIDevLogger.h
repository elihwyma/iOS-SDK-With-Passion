/*
 Image: /System/Library/PrivateFrameworks/Trial.framework/Trial
 */

#import <Trial/TRILogger.h>

@interface TRIDevLogger : TRILogger

{
    int _clientProjectId;
}

- (void)logEvent:(id)arg1;
- (id)initWithClientProjectId:(int)arg1;

@end
