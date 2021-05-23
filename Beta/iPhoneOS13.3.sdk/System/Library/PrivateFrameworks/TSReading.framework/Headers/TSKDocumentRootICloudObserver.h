/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@class NSOperationQueue;

@interface TSKDocumentRootICloudObserver : NSObject

{
    long long _identifier;
    NSOperationQueue *_operationQueue;
    CDUnknownBlockType _block;
    long long _identifer;
}

@property (nonatomic, readonly) long long identifer;

- (void)dealloc;
- (id)initWithBlock:(CDUnknownBlockType)arg1;
- (void)invokeWithDocumentRoot:(id)arg1;

@end
