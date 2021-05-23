/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <NSObject.h>

@interface CKDCancelToken : NSObject

{
    _Bool _isCancelled;
    CDUnknownBlockType _cancelAction;
}

@property (copy, nonatomic) CDUnknownBlockType cancelAction;

- (void)cancel;
- (_Bool)isCancelled;

@end
