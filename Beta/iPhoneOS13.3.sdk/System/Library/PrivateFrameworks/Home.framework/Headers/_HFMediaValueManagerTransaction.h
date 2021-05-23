/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

@class NAFuture, NSNumber;

@interface _HFMediaValueManagerTransaction : NSObject

{
    NAFuture *_writeFuture;
    long long _playbackState;
    NSNumber *_transactionNumber;
}

@property (retain, nonatomic) NAFuture *writeFuture;
@property (nonatomic) long long playbackState;
@property (retain, nonatomic) NSNumber *transactionNumber;

- (id)init;
- (id)description;

@end
