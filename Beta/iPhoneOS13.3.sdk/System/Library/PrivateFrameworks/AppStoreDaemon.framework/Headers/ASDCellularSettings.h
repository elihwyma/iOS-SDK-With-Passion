/*
 Image: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface ASDCellularSettings : NSObject

{
    NSString *_defaultsKey;
}

@property (nonatomic) _Bool allowAutomaticDownloads;
@property (nonatomic) long long cellularDataPrompt;

+ (id)settingsForIdentity:(id)arg1;

- (id)initWithDefaultsKey:(id)arg1;
- (id)_cellularSettings;

@end
