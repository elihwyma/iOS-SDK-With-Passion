/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSDate;

@interface SBWorkItem : NSObject

{
    CDUnknownBlockType _workBlock;
    NSDate *_creationDate;
}

@property (nonatomic, readonly) NSDate *creationDate;
@property (copy, nonatomic, readonly) CDUnknownBlockType work;

- (id)initWithWork:(CDUnknownBlockType)arg1;

@end
