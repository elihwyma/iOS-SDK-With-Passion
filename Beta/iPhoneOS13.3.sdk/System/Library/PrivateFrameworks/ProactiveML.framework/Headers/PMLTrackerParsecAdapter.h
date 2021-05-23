/*
 Image: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface PMLTrackerParsecAdapter : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)_writeDataForTransparency:(id)arg1;
+ (id)wrappedMessage:(id)arg1;

- (void)postMetricId:(unsigned int)arg1 message:(id)arg2;

@end
