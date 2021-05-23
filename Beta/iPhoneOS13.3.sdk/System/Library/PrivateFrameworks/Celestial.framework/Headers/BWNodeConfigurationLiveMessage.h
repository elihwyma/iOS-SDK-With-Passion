/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/BWNodeMessage.h>

@class BWFormat;

@interface BWNodeConfigurationLiveMessage : BWNodeMessage

{
    long long _configurationID;
    BWFormat *_updatedFormat;
}

@property (readonly) long long configurationID;
@property (readonly) BWFormat *updatedFormat;

+ (id)newMessageWithConfigurationID:(long long)arg1 updatedFormat:(id)arg2;
+ (id)newMessageWithConfigurationID:(long long)arg1;

- (void)dealloc;
- (id)_initWithConfigurationID:(long long)arg1 updatedFormat:(id)arg2;

@end
