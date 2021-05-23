/*
 Image: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSSet, NSString;

@interface DKReporterRegistry : NSObject

{
    struct NSMutableDictionary *_generatorLookup;
    struct NSMutableDictionary *_componentDedup;
}

@property (retain, nonatomic) NSMutableDictionary *generatorLookup;
@property (retain, nonatomic) NSMutableDictionary *componentDedup;
@property (nonatomic, readonly) NSSet *components;
@property (nonatomic, readonly) NSSet *generators;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) Class extensionClass;
@property (nonatomic, readonly) Class responseObjectClass;

- (id)init;
- (void)addExtensionAdapter:(id)arg1;
- (void)enumerateExtensionAdaptersWithBlock:(CDUnknownBlockType)arg1;
- (id)generatorForComponentIdentity:(id)arg1;

@end
