/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <Foundation/NSObject.h>

@interface NTKJetsamInfoFetcher : NSObject

- (void)dealloc;
- (_Bool)resetInterval;
- (_Bool)getInfo:(struct jetsam_info *)arg1;

@end
