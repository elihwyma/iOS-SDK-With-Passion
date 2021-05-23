/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <Foundation/NSObject.h>

@interface NTKCTinCanSettings : NSObject

{
    _Bool _tinCanEnabled;
}

@property (nonatomic, readonly) _Bool tinCanEnabled;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)_readValue;
- (void)_handlePrefsChanged;
- (void)_notifyClientsOfChange;

@end
