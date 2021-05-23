/*
 Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

#import <Foundation/NSObject.h>

@class PARSession;

__attribute__((visibility("hidden")))
@interface WeakSession : NSObject

{
    PARSession *_weakSession;
}

@property (nonatomic, readonly) PARSession *strongSession;

- (id)initWithSession:(id)arg1;

@end
