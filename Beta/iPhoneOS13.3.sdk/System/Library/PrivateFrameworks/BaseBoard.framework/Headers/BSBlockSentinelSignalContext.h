/*
 Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface BSBlockSentinelSignalContext : NSObject

{
    _Bool _complete;
    _Bool _failed;
    id _context;
}

@property (nonatomic, getter=isComplete) _Bool complete;
@property (nonatomic, getter=isFailed) _Bool failed;
@property (weak, nonatomic) id context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)context;
+ (id)failureContext;

@end
