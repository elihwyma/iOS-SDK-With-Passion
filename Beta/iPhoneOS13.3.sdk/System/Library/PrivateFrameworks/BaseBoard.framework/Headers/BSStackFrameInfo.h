/*
 Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface BSStackFrameInfo : NSObject

{
    unsigned long long _address;
    NSString *_functionName;
    NSString *_className;
    NSString *_executablePath;
    NSString *_realFunctionName;
}

@property (nonatomic, readonly) unsigned long long address;
@property (nonatomic, readonly) NSString *functionName;
@property (nonatomic, readonly) NSString *executableName;
@property (nonatomic, readonly) NSString *executablePath;
@property (nonatomic, readonly) NSString *className;

- (id)description;
- (id)initWithReturnAddress:(unsigned long long)arg1;

@end
