/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <Foundation/NSObject.h>

@class NEIKEv2IKESPI;

@protocol NEIKEv2TransportDelegate;

@interface NEIKEv2TransportClient : NSObject

{
    _Bool _wildcard;
    NEIKEv2IKESPI *_clientSPI;
    id <NEIKEv2TransportDelegate> _delegate;
}

@property (retain) NEIKEv2IKESPI *clientSPI;
@property _Bool wildcard;
@property (weak) id <NEIKEv2TransportDelegate> delegate;

- (id)description;

@end
