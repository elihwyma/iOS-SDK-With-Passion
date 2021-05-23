/*
 Image: /System/Library/PrivateFrameworks/TouchML.framework/TouchML
 */

#import <NSObject.h>

@interface TMLPointer : NSObject

{
    CDUnknownBlockType _readBlock;
    CDUnknownBlockType _writeBlock;
}

@property (copy, nonatomic) CDUnknownBlockType readBlock;
@property (copy, nonatomic) CDUnknownBlockType writeBlock;
@property (nonatomic) id pointee;

+ (id)pointerWithReadBlock:(CDUnknownBlockType)arg1 writeBlock:(CDUnknownBlockType)arg2;

@end
