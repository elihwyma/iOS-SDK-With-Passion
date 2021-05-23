/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface WFKeychain : NSObject

{
    NSString *_service;
    NSString *_accessGroup;
}

@property (nonatomic, readonly) NSString *service;
@property (nonatomic, readonly) NSString *accessGroup;

- (id)dataForKey:(id)arg1;
- (_Bool)setData:(id)arg1 forKey:(id)arg2;
- (id)items;
- (unsigned long long)numberOfItems;
- (id)initWithService:(id)arg1;
- (id)initWithService:(id)arg1 accessGroup:(id)arg2;

@end
