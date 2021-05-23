/*
 Image: /System/Library/PrivateFrameworks/FontServices.framework/FontServices
 */

#import <Foundation/NSObject.h>

@class NSXPCConnection, NSXPCListenerEndpoint;

@interface FontPickerSupporter : NSObject

{
    _Bool _clientHasFontAccessEntitlement;
    NSXPCConnection *_connection;
    NSXPCListenerEndpoint *_clientEndpoint;
}

@property (retain, nonatomic) NSXPCConnection *connection;
@property (retain, nonatomic, readonly) NSXPCListenerEndpoint *clientEndpoint;
@property (nonatomic) _Bool clientHasFontAccessEntitlement;

- (id)initWithEndpoint:(id)arg1;
- (void)done;
- (void)setup;
- (void)makeConnection;
- (id)locallyActivatedFontFilePaths;

@end
