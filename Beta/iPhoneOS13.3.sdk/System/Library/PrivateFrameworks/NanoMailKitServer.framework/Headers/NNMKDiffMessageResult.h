/*
 Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableSet;

@interface NNMKDiffMessageResult : NSObject

{
    _Bool _trimed;
    NSMutableSet *_messageIdsToAddToWatch;
    NSMutableSet *_messageIdsToUpdateOnWatch;
    NSMutableSet *_messageIdsToDeleteFromWatch;
    NSArray *_messageToAddToWatch;
}

@property (retain, nonatomic) NSMutableSet *messageIdsToAddToWatch;
@property (retain, nonatomic) NSMutableSet *messageIdsToUpdateOnWatch;
@property (retain, nonatomic) NSMutableSet *messageIdsToDeleteFromWatch;
@property (retain, nonatomic) NSArray *messageToAddToWatch;
@property (nonatomic) _Bool trimed;

@end
