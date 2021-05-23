/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/Frameworks/ComponentKit.framework/ComponentKit
 */

#import <Foundation/NSObject.h>

@protocol NSObject;

@interface CKTextKitEntityAttribute : NSObject

{
    id <NSObject> _entity;
}

@property (nonatomic, readonly) id <NSObject> entity;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithEntity:(id)arg1;

@end
