/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

#import <Home/Swift-Protocol.h>

@class NSSet, NSString;

@protocol HFIconDescriptor;

@interface HFUserNotificationServiceTopic : NSObject <Swift>

{
    NSSet *_serviceTypes;
    NSSet *_accessoryCategoryTypes;
    NSString *_topicName;
    id <HFIconDescriptor> _iconDescriptor;
}

@property (copy, nonatomic, readonly) NSSet *serviceTypes;
@property (copy, nonatomic, readonly) NSSet *accessoryCategoryTypes;
@property (copy, nonatomic, readonly) NSString *topicName;
@property (nonatomic, readonly) id <HFIconDescriptor> iconDescriptor;
@property (copy, nonatomic, readonly) NSString *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)na_identity;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)initWithServiceTypes:(id)arg1 accessoryCategoryTypes:(id)arg2 topicName:(id)arg3 iconDescriptor:(id)arg4;
- (id)initWithServiceType:(id)arg1 topicName:(id)arg2;

@end
