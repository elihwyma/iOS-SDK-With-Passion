/*
 Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface EKConferenceURLDetector : NSObject

+ (id)logHandle;
+ (id)_dataDetector;
+ (id)_linksInSource:(id)arg1;
+ (_Bool)_isPreferredURL:(id)arg1;
+ (_Bool)_isValidTelURL:(id)arg1;
+ (id)_preferredHostSuffixes;
+ (id)conferenceURLFromSources:(id)arg1;

@end
