/*
 Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

#import <Foundation/NSObject.h>

@interface SBFLazyObjectProvider : NSObject

{
    id _object;
    CDUnknownBlockType _generator;
}

@property (retain, nonatomic) id object;
@property (copy, nonatomic) CDUnknownBlockType generator;

- (id)initWithGenerator:(CDUnknownBlockType)arg1;

@end
