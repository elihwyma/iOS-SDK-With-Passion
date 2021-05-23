/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface RLMSortDescriptor : NSObject

{
    _Bool _ascending;
    NSString *_keyPath;
}

@property (nonatomic, readonly) NSString *keyPath;
@property (nonatomic, readonly) _Bool ascending;

+ (id)sortDescriptorWithKeyPath:(id)arg1 ascending:(_Bool)arg2;

- (id)reversedSortDescriptor;

@end
