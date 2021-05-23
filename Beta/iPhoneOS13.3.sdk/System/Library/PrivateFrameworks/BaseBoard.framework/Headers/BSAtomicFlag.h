/*
 Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

#import <Foundation/NSObject.h>

@interface BSAtomicFlag : NSObject

{
    _Atomic _Bool _flag;
}

- (id)init;
- (id)description;
- (id)initWithFlag:(_Bool)arg1;
- (_Bool)getFlag;
- (_Bool)setFlag:(_Bool)arg1;

@end
