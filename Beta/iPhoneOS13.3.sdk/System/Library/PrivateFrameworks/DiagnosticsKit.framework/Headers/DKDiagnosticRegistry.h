/*
 Image: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableDictionary, NSString;

@interface DKDiagnosticRegistry : NSObject

{
    NSMutableDictionary *_diagnosticLookup;
}

@property (retain, nonatomic) NSMutableDictionary *diagnosticLookup;
@property (nonatomic, readonly) NSArray *diagnostics;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) Class extensionClass;
@property (nonatomic, readonly) Class responseObjectClass;

- (id)init;
- (id)adapterForIdentifier:(id)arg1;
- (void)addExtensionAdapter:(id)arg1;
- (void)enumerateExtensionAdaptersWithBlock:(CDUnknownBlockType)arg1;
- (id)diagnosticForIdentifier:(id)arg1;

@end
