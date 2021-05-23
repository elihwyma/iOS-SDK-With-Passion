/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <Foundation/NSObject.h>

@interface NEHotspotHelperResponse : NSObject

{
    struct __CNPluginResponse *_response;
}

@property struct __CNPluginResponse *response;

- (void)dealloc;
- (id)description;
- (void)setNetwork:(id)arg1;
- (id)initWithResponse:(struct __CNPluginResponse *)arg1;
- (void)setNetworkList:(id)arg1;
- (void)deliver;

@end
