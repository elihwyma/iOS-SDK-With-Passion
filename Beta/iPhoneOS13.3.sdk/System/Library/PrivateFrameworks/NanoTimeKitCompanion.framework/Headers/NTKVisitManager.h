/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <Foundation/NSObject.h>

@interface NTKVisitManager : NSObject

+ (id)fallbackVisit;
+ (id)sharedVisitManager;

- (id)currentVisit;
- (id)anyVisit;
- (struct NSString *)startVisitUpdatesWithIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)stopVisitUpdatesForToken:(struct NSString *)arg1;
- (id)previousVisit;

@end
