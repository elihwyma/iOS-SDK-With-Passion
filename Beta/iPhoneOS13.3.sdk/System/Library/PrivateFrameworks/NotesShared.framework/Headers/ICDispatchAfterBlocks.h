/*
 Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

#import <Foundation/NSObject.h>

@protocol NSCopying;

@interface ICDispatchAfterBlocks : NSObject

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
