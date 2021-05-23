/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <Foundation/NSSet.h>

@interface NSSet (AppleMediaServices)

+ (id)ams_PLISTClasses;
+ (id)ams_JSONClasses;

- (id)ams_filterUsingTest:(CDUnknownBlockType)arg1;
- (id)ams_firstObjectPassingTest:(CDUnknownBlockType)arg1;
- (id)ams_mapWithTransform:(CDUnknownBlockType)arg1;
- (id)ams_nonEmptyComponentsJoinedByString:(id)arg1;

@end
