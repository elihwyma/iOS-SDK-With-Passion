/*
 Image: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString;

@interface PMLTrackerMockAdapter : NSObject

{
    NSMutableArray *_trackedMessages;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)postMetricId:(unsigned int)arg1 message:(id)arg2;
- (void)clearAllTrackedMessages;
- (id)trackedMessagesByClass:(Class)arg1;

@end
