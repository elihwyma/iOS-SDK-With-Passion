/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface NTKCompanionSyncedComplication : NSObject

{
    NSString *_companionBundleIdentifier;
    NSString *_fallbackName;
    NSString *_localizedName;
    NSString *_clientIdentifier;
    NSString *_appBundleIdentifier;
    NSArray *_supportedFamilies;
}

@property (nonatomic, readonly) NSString *clientIdentifier;
@property (nonatomic, readonly) NSString *appBundleIdentifier;
@property (nonatomic, readonly) NSArray *supportedFamilies;
@property (nonatomic, readonly) NSString *localizedName;

+ (id)_stocksComplication;

- (id)initWithRemoteApplication:(id)arg1 supportedFamilies:(id)arg2;

@end
