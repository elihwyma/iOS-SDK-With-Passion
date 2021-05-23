/*
 Image: /System/Library/PrivateFrameworks/TouchML.framework/TouchML
 */

#import <NSObject.h>

@class NSString;

@interface TMLReference : NSObject

{
    id _target;
    CDUnknownBlockType _block;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)referenceForTarget:(id)arg1;
+ (id)referenceWithBlock:(CDUnknownBlockType)arg1;

- (id)value;
- (unsigned long long)valueType;
- (id)initWithTarget:(id)arg1 block:(CDUnknownBlockType)arg2;

@end
