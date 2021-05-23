/*
 Image: /System/Library/PrivateFrameworks/MessageProtection.framework/MessageProtection
 */

#import <NSObject.h>

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface NGMPrekeySignatureFormatter : NSObject

{
    double _timestamp;
    NSData *_prekeyPublic;
}

@property (nonatomic, readonly) NSData *prekeyPublic;
@property (nonatomic, readonly) double timestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)signedData;
- (id)initToSignKey:(id)arg1;
- (id)initWithPublicPrekey:(id)arg1;

@end
