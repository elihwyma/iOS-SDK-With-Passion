/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface SXJSONObjectMergerClassProvider : NSObject

{
    Class _objectClass;
}

@property (nonatomic, readonly) Class objectClass;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (Class)classForObject:(id)arg1 specVersion:(id)arg2;
- (id)initWithObjectClass:(Class)arg1;

@end
