/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

@class NSString, NSXPCListener, WBSCyclerServiceProxy;

@protocol WBSCyclerTestTarget;

@interface WBSCyclerConnectionManager : NSObject

{
    NSXPCListener *_xpcListener;
    WBSCyclerServiceProxy *_cyclerProxy;
    id <WBSCyclerTestTarget> _testTarget;
}

@property (nonatomic, readonly) id <WBSCyclerTestTarget> testTarget;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)isCyclerEnabled;

- (id)init;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)connect;
- (id)initWithTestTarget:(id)arg1;

@end
