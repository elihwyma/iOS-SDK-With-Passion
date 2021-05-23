/*
 Image: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
 */

#import <Foundation/NSObject.h>

@interface PTRowAction : NSObject

{
    CDUnknownBlockType _handler;
}

@property (nonatomic, readonly) CDUnknownBlockType handler;

+ (id)actionWithHandler:(CDUnknownBlockType)arg1;

- (CDUnknownBlockType)defaultHandler;
- (_Bool)deselectsRowOnSuccess;

@end
