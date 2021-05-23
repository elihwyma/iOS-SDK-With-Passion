/*
 Image: /System/Library/PrivateFrameworks/Tips.framework/Tips
 */

#import <Foundation/NSObject.h>

@class PPTopicStore;

@interface TPSPortraitDataProvider : NSObject

{
    PPTopicStore *_store;
}

- (id)init;
- (id)_initWithStore:(id)arg1;
- (_Bool)matchesTopics:(id)arg1 confidenceThreshold:(double)arg2;

@end
