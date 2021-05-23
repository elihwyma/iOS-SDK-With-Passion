/*
 Image: /System/Library/Frameworks/VisionKit.framework/VisionKit
 */

#import <Foundation/NSObject.h>

@protocol NSCopying;

__attribute__((visibility("hidden")))
@interface DCDispatchAfterBlocks : NSObject

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
