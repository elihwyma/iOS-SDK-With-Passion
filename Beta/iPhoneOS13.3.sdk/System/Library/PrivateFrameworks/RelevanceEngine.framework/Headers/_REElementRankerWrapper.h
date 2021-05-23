/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <Foundation/NSObject.h>

@class NSString, REMLElementComparator;

@protocol OS_dispatch_queue;

@interface _REElementRankerWrapper : NSObject

{
    CDUnknownBlockType _featureMapGenerator;
    REMLElementComparator *_comparator;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (copy, nonatomic) CDUnknownBlockType featureMapGenerator;
@property (retain, nonatomic) REMLElementComparator *comparator;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)shouldHideElement:(id)arg1;

@end
