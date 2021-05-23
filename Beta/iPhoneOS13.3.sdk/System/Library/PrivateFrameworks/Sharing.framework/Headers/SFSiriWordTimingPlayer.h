/*
 Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString, SFSiriWordTimingInfo;

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface SFSiriWordTimingPlayer : NSObject

{
    NSObject<OS_dispatch_source> *_timer;
    unsigned long long _wordIndex;
    SFSiriWordTimingInfo *_wordInfo;
    unsigned int _flags;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    double _startTime;
    NSString *_text;
    CDUnknownBlockType _wordHandler;
    NSArray *_wordTimings;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic) unsigned int flags;
@property (nonatomic) double startTime;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) CDUnknownBlockType wordHandler;
@property (copy, nonatomic) NSArray *wordTimings;

- (id)init;
- (void)invalidate;
- (void)activate;
- (void)_processNextWord;
- (void)_processWord;

@end
