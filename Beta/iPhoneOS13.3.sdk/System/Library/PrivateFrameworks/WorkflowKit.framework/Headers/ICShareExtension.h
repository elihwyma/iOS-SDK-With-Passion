/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <Foundation/NSObject.h>

@class ICApp, NSArray, NSDictionary, NSString;

@interface ICShareExtension : NSObject

{
    ICApp *_app;
    NSString *_bundleIdentifier;
    NSString *_serviceType;
    NSString *_name;
    NSArray *_actions;
    NSDictionary *_definition;
}

@property (copy, nonatomic, readonly) NSDictionary *definition;
@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, readonly) NSString *serviceType;
@property (nonatomic, readonly) NSString *name;
@property (weak, nonatomic, readonly) ICApp *app;
@property (nonatomic, readonly) NSArray *actions;
@property (nonatomic, readonly, getter=isAvailable) _Bool available;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithDefinition:(id)arg1 app:(id)arg2;

@end
