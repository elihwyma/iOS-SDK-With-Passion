/*
 Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface IMMultiQueueItem : NSObject

{
    id _block;
    NSString *_GUID;
    NSString *_describer;
}

@property (nonatomic, readonly) id block;
@property (nonatomic, readonly) NSString *GUID;
@property (nonatomic, readonly) NSString *describer;

- (void)dealloc;
- (id)initWithBlock:(id)arg1 GUID:(id)arg2 description:(id)arg3;

@end
