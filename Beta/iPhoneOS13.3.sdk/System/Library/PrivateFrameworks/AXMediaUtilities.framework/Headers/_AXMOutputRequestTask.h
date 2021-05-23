/*
 Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

#import <AXMediaUtilities/AXMTask.h>

@class AXMOutputRequest;

@interface _AXMOutputRequestTask : AXMTask

{
    AXMOutputRequest *_request;
}

@property (retain, nonatomic) AXMOutputRequest *request;

@end
