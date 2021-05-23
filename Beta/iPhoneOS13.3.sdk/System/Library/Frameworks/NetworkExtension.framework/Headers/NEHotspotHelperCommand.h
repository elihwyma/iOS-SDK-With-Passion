/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <Foundation/NSObject.h>

@class NEHotspotNetwork, NSArray, NSString;

@interface NEHotspotHelperCommand : NSObject

{
    struct __CNPluginCommand *_command;
}

@property struct __CNPluginCommand *command;
@property (readonly) NSString *interfaceName;
@property (readonly) long long commandType;
@property (readonly) NEHotspotNetwork *network;
@property (readonly) NSArray *networkList;

- (void)dealloc;
- (id)description;
- (id)initWithCommand:(struct __CNPluginCommand *)arg1;
- (id)createResponse:(long long)arg1;
- (id)createTCPConnection:(id)arg1;
- (id)createUDPSession:(id)arg1;

@end
