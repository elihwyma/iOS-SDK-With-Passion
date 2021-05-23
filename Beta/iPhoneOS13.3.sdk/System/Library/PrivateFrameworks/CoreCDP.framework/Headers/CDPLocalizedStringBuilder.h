/*
 Image: /System/Library/PrivateFrameworks/CoreCDP.framework/CoreCDP
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface CDPLocalizedStringBuilder : NSObject

{
    NSString *_key;
}

+ (id)builderForKey:(id)arg1;

- (id)currentKey;
- (id)localizedString;
- (id)addDeviceClass:(id)arg1;
- (id)addUnqualifiedDeviceClass:(id)arg1;
- (id)addSecretType:(unsigned long long)arg1;

@end
