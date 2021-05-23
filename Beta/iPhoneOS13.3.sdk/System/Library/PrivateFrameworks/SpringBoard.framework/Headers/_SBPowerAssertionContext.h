/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface _SBPowerAssertionContext : NSObject

{
    NSString *_processName;
    CDUnknownBlockType _collectionBlock;
}

@property (copy, nonatomic) NSString *processName;
@property (copy, nonatomic) CDUnknownBlockType collectionBlock;

@end
