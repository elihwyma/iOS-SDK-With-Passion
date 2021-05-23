/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBAWDMetric.h>

@class AWDServerConnection;

@interface SBAWDQueryableMetric : SBAWDMetric

{
    AWDServerConnection *_connection;
    CDUnknownBlockType _builder;
}

- (void)_postQueryableMetric;
- (void)registerWithDataBuilder:(CDUnknownBlockType)arg1;

@end
