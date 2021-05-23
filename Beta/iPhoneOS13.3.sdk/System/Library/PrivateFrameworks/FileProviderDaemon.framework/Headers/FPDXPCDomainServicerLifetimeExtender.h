/*
 Image: /System/Library/PrivateFrameworks/FileProviderDaemon.framework/FileProviderDaemon
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface FPDXPCDomainServicerLifetimeExtender : NSObject

{
    int _requestEffectivePID;
    NSString *_prettyDescription;
    CDUnknownBlockType _stopBlock;
}

@property int requestEffectivePID;
@property (retain) NSString *prettyDescription;
@property (copy, nonatomic) CDUnknownBlockType stopBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)stopExtendingLifetime;

@end
