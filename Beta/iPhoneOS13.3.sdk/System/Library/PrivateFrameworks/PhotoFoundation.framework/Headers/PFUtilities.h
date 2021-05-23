/*
 Image: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
 */

#import <Foundation/NSObject.h>

@interface PFUtilities : NSObject

+ (_Bool)didStopInDebugger;
+ (void)getSystemVersionMajor:(unsigned int *)arg1 systemVersionMinor:(unsigned int *)arg2 systemVersionBugFixRev:(unsigned int *)arg3;
+ (_Bool)runningUnderDebugger;
+ (_Bool)isOnACPower:(double *)arg1;
+ (_Bool)hasInternalPhotosDiagnosticsCapability;
+ (_Bool)hasEnabledManagedUserDefault:(id)arg1;

@end
