/*
 Image: /System/Library/PrivateFrameworks/OSAnalytics.framework/OSAnalytics
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface KCContainer : NSObject

{
    unsigned int _type;
    int _pid;
    int _unindexed_frames;
    int _invalid_images;
    unsigned long long _tag;
    NSMutableDictionary *_data;
    NSMutableDictionary *_truncated_threads;
}

@property (nonatomic, readonly) unsigned int type;
@property (nonatomic, readonly) unsigned long long tag;
@property (nonatomic, readonly) NSMutableDictionary *data;
@property (nonatomic) int pid;
@property (nonatomic, readonly) NSMutableDictionary *truncated_threads;
@property (nonatomic) int unindexed_frames;
@property (nonatomic) int invalid_images;

- (id)initWithKCData:(struct kcdata_iter)arg1;
- (void)omit;

@end
