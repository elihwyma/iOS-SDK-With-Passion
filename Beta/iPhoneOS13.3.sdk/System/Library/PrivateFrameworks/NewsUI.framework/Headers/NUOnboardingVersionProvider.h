/*
 Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

#import <Foundation/NSObject.h>

#import <NewsUI/Swift-Protocol.h>

@class NSString;

@interface NUOnboardingVersionProvider : NSObject <Swift>

{
    long long _onboardingVersion;
}

@property (nonatomic, readonly) long long onboardingVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)adContextValueForKeyPath:(id)arg1;
- (id)initWithOnboardingVersion:(long long)arg1;

@end
