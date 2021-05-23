/*
 Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface BSStateCaptureInvalidator : NSObject

{
    unsigned long long _handle;
    _Bool _invalidated;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)invalidate;
- (id)initWithHandle:(unsigned long long)arg1;

@end
