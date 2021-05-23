/*
 Image: /System/Library/PrivateFrameworks/NewsFoundation.framework/NewsFoundation
 */

#import <Foundation/NSObject.h>

@class NFContainer, NSString;

@interface NFProxyContainer : NSObject

{
    NFContainer *_container;
    NFContainer *_privateContainer;
}

@property (retain, nonatomic) NFContainer *container;
@property (retain, nonatomic) NFContainer *privateContainer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithContainer:(id)arg1 privateContainer:(id)arg2;
- (id)registerClass:(Class)arg1 name:(id)arg2 factory:(CDUnknownBlockType)arg3;
- (id)registerProtocol:(id)arg1 name:(id)arg2 factory:(CDUnknownBlockType)arg3;
- (id)registerKey:(id)arg1 factory:(CDUnknownBlockType)arg2;
- (id)registerClass:(Class)arg1 factory:(CDUnknownBlockType)arg2;
- (id)registerProtocol:(id)arg1 factory:(CDUnknownBlockType)arg2;
- (id)unsafeRegisterForKey:(id)arg1 name:(id)arg2 factory:(CDUnknownBlockType)arg3;

@end
