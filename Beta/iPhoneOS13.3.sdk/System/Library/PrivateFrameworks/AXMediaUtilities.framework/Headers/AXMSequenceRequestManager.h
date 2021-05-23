/*
 Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

#import <Foundation/NSObject.h>

@class VNSequenceRequestHandler;

@interface AXMSequenceRequestManager : NSObject

{
    VNSequenceRequestHandler *_sequenceRequestHandler;
}

@property (retain, nonatomic) VNSequenceRequestHandler *sequenceRequestHandler;

@end
