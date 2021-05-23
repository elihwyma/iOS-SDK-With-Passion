/*
 Image: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
 */

#import <Foundation/NSObject.h>

@interface SiriCoreConnectionType : NSObject

{
    long long _technology;
}

- (id)description;
- (long long)technology;
- (_Bool)isEdge;
- (id)initWithTechnology:(long long)arg1;
- (_Bool)isWWAN;
- (_Bool)canUseWiFiDirectly;
- (long long)diagnosticConnectionType;
- (unsigned long long)aggregatorConnectionType;

@end
