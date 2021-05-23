/*
 Image: /System/Library/PrivateFrameworks/SignpostSupport.framework/SignpostSupport
 */

#import <Foundation/NSObject.h>

@interface SignpostSupportObjectFilter : NSObject

{
    CDUnknownBlockType _filterBlock;
}

@property (copy, nonatomic, readonly) CDUnknownBlockType filterBlock;

- (_Bool)passesObject:(id)arg1;
- (id)initWithFilterBlock:(CDUnknownBlockType)arg1;

@end
