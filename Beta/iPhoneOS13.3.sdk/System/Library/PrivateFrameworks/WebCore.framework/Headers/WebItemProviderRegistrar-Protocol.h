/*
 Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import <WebCore/Swift-Protocol.h>

@class NSData, NSString;

@protocol NSItemProviderWriting;

@protocol WebItemProviderRegistrar <Swift>

@property (nonatomic, readonly) id <NSItemProviderWriting> representingObjectForClient;
@property (nonatomic, readonly) NSString *typeIdentifierForClient;
@property (nonatomic, readonly) NSData *dataForClient;

- (unsigned short)registerItemProvider: /* Error: Ran out of types for this method. */;

@end
