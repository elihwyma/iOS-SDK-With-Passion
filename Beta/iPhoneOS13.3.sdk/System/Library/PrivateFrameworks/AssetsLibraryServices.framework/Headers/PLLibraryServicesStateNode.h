/*
 Image: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSOperationQueue;

@interface PLLibraryServicesStateNode : NSObject

{
    unsigned int _qos;
    long long _state;
    NSOperationQueue *_operationQueue;
}

@property (nonatomic, readonly) long long state;
@property (nonatomic, readonly) NSOperationQueue *operationQueue;
@property (nonatomic) unsigned int qos;

- (void)run;
- (id)description;
- (void)terminate;
- (id)initWithLibraryServicesState:(long long)arg1 qualityOfService:(unsigned int)arg2;

@end
