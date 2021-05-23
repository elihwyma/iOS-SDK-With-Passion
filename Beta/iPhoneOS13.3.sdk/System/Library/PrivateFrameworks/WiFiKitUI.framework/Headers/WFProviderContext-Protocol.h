/*
 Image: /System/Library/PrivateFrameworks/WiFiKitUI.framework/WiFiKitUI
 */

#import <WiFiKitUI/Swift-Protocol.h>

@protocol WFNetworkListRecord;

@protocol WFProviderContext <Swift>

@property (nonatomic, readonly) id <WFNetworkListRecord> network;
@property (nonatomic, readonly) long long requestedFields;

- (unsigned short)cancel;

@end
