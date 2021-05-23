/*
 Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <Foundation/NSObject.h>

@interface EKCompatibility : NSObject

+ (_Bool)simulateLegacyBehaviors;
+ (_Bool)isProgramSDKAtLeast:(CDStruct_c0454aff)arg1;
+ (void)perform:(CDUnknownBlockType)arg1 whileSimulatingLegacyBehaviors:(_Bool)arg2;
+ (void)setSimulateLegacyBehaviors:(_Bool)arg1;
+ (void)performWhileSimulatingLegacyBehaviors:(CDUnknownBlockType)arg1;

@end
