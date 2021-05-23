/*
 Image: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AccessibilityUIService.framework/AccessibilityUIService
 */

#import <NSObject.h>

@class NSMutableArray;

@protocol AXUIService, NSObject><NSCopying;

@interface AXUIServiceContext : NSObject

{
    id <AXUIService> _service;
    id <NSObject><NSCopying> _serviceIdentifier;
    NSMutableArray *_clientMessengers;
}

@property (retain, nonatomic) id <AXUIService> service;
@property (copy, nonatomic) id <NSObject><NSCopying> serviceIdentifier;
@property (retain, nonatomic) NSMutableArray *clientMessengers;
@property (nonatomic, readonly) unsigned long long clientsCount;

- (id)clientMessengerWithIdentifier:(id)arg1;
- (unsigned long long)_indexOfClientWithIdentifier:(id)arg1;
- (id)initWithService:(id)arg1 serviceIdentifier:(id)arg2;
- (void)addClientWithIdentifier:(id)arg1 connection:(id)arg2;
- (void)removeClientWithIdentifier:(id)arg1;
- (_Bool)hasClientWithIdentifier:(id)arg1;
- (void)enumerateClientsUsingBlock:(CDUnknownBlockType)arg1;

@end
