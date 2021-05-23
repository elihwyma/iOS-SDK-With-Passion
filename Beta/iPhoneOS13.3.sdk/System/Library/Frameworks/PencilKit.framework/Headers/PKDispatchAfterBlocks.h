/*
 Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

#import <Foundation/NSObject.h>

@protocol NSCopying;

@interface PKDispatchAfterBlocks : NSObject

{
    id <NSCopying> _identifier;
}

@property (copy, nonatomic) id <NSCopying> identifier;

- (void)dealloc;
- (id)initWithIdentifier:(id)arg1;
- (void)performBlock:(CDUnknownBlockType)arg1;
- (void)cancelAll;
- (void)dispatchAfter:(double)arg1 withBlock:(CDUnknownBlockType)arg2;

@end
