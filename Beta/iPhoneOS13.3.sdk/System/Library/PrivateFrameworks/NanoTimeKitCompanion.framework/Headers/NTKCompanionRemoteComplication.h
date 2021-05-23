/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKRemoteComplication.h>

@class NTKCompanion3rdPartyApp;

@interface NTKCompanionRemoteComplication : NTKRemoteComplication

{
    NTKCompanion3rdPartyApp *_app;
}

@property (retain, nonatomic) NTKCompanion3rdPartyApp *app;

+ (id)complicationWithApp:(id)arg1;

- (id)localizedDetailText;

@end
