/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@protocol PXLayoutPerformer;

@interface PXLayoutPerformerCacheEntry : NSObject

{
    id <PXLayoutPerformer> _performer;
    unsigned long long _reentryCount;
}

@property (retain, nonatomic) id <PXLayoutPerformer> performer;
@property (nonatomic) unsigned long long reentryCount;

@end
