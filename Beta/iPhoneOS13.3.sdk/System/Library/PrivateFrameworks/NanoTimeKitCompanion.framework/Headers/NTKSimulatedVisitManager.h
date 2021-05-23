/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKVisitManager.h>

@interface NTKSimulatedVisitManager : NTKVisitManager

- (id)init;
- (id)currentVisit;
- (struct NSString *)startVisitUpdatesWithIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)stopVisitUpdatesForToken:(struct NSString *)arg1;
- (id)previousVisit;

@end
