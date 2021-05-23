/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <Foundation/NSObject.h>

@class NPSManager;

@interface NTKCustomMonogramStore : NSObject

{
    NPSManager *_npsManager;
}

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (id)_customMonogramFromPrefs;
- (id)customMonogram;
- (void)setCustomMonogram:(id)arg1;
- (void)_notifyClientsOfChange;

@end
