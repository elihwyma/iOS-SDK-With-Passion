/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSArray, NSString, NSXPCListenerEndpoint, PBItemCollection, UIDraggingSystemTouchRoutingPolicy;

@interface UIDraggingSessionConfiguration : NSObject <Swift>

{
    _Bool _supportsSystemDrag;
    NSArray *_touchIDs;
    UIDraggingSystemTouchRoutingPolicy *_routingPolicy;
    PBItemCollection *_itemCollection;
    NSXPCListenerEndpoint *_dataProviderEndpoint;
    NSXPCListenerEndpoint *_axEndpoint;
    NSString *_sceneIdentifier;
    struct CGPoint _initialCentroid;
}

@property (retain, nonatomic) NSArray *touchIDs;
@property (nonatomic) struct CGPoint initialCentroid;
@property (retain, nonatomic) UIDraggingSystemTouchRoutingPolicy *routingPolicy;
@property (retain, nonatomic) NSXPCListenerEndpoint *axEndpoint;
@property (retain, nonatomic) PBItemCollection *itemCollection;
@property (retain, nonatomic) NSXPCListenerEndpoint *dataProviderEndpoint;
@property (nonatomic) _Bool supportsSystemDrag;
@property (retain, nonatomic) NSString *sceneIdentifier;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
