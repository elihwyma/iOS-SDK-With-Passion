/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/Frameworks/ComponentKit.framework/ComponentKit
 */

#import <Foundation/NSObject.h>

@class NSThread;

@protocol NSObject;

@interface CKTransactionalComponentDataSourceConfiguration : NSObject

{
    struct CKSizeRange _sizeRange;
    Class _componentProvider;
    id <NSObject> _context;
    NSThread *_workThreadOverride;
}

@property (nonatomic, readonly) NSThread *workThreadOverride;
@property (nonatomic, readonly) Class componentProvider;
@property (nonatomic, readonly) id <NSObject> context;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id).cxx_construct;
- (id)initWithComponentProvider:(Class)arg1 context:(id)arg2 sizeRange:(const struct CKSizeRange *)arg3;
- (id)initWithComponentProvider:(Class)arg1 context:(id)arg2 sizeRange:(const struct CKSizeRange *)arg3 workThreadOverride:(id)arg4;
- (const struct CKSizeRange *)sizeRange;

@end
