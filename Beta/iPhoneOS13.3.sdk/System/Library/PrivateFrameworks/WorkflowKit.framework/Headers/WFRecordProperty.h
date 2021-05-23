/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface WFRecordProperty : NSObject

{
    _Bool _readOnly;
    _Bool _nonAtomic;
    _Bool _dynamic;
    NSString *_name;
    NSString *_getter;
    NSString *_setter;
}

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly, getter=isReadOnly) _Bool readOnly;
@property (nonatomic, readonly, getter=isNonAtomic) _Bool nonAtomic;
@property (nonatomic, readonly, getter=isDynamic) _Bool dynamic;
@property (nonatomic, readonly) NSString *getter;
@property (nonatomic, readonly) NSString *setter;

- (id)initWithName:(id)arg1 property:(struct objc_property *)arg2;

@end
