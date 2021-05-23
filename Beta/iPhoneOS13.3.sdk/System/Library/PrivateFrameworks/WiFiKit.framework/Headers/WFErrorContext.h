/*
 Image: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
 */

#import <Foundation/NSObject.h>

@class NSError, NSString, UIViewController;

@protocol WFNetworkListRecord, WFNetworkView;

@interface WFErrorContext : NSObject

{
    _Bool _needsDismissal;
    UIViewController<WFNetworkView> *_provider;
    CDUnknownBlockType _completionHandler;
    NSError *_error;
    id <WFNetworkListRecord> _network;
}

@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) id <WFNetworkListRecord> network;
@property (copy, nonatomic) CDUnknownBlockType completionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) long long requestedFields;
@property (weak, nonatomic) UIViewController<WFNetworkView> *provider;
@property (nonatomic, readonly) _Bool needsDismissal;

- (void)cancel;
- (id)initWithAssociationError:(id)arg1 network:(id)arg2;
- (id)_userInfoForAssociationError:(id)arg1 networkName:(id)arg2;

@end
