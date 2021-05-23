/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface TSKLayerPool : NSObject

{
    NSMutableArray *mLayerPool;
    Class mLayerClass;
    id mLayerDelegate;
}

@property (nonatomic) id layerDelegate;
@property (nonatomic) Class layerClass;

- (id)init;
- (void)dealloc;
- (id)requestLayerFromPool;
- (void)returnLayerToPool:(id)arg1;

@end
