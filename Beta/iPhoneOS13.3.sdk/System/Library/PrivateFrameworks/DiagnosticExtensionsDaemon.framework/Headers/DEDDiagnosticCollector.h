/*
 Image: /System/Library/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/DiagnosticExtensionsDaemon
 */

#import <Foundation/NSObject.h>

@class NSArray;

@protocol OS_os_log;

@interface DEDDiagnosticCollector : NSObject

{
    unsigned long long _collectionTimeout;
    NSObject<OS_os_log> *_log;
    NSArray *_cachedExtensions;
}

@property (retain) NSObject<OS_os_log> *log;
@property (retain) NSArray *cachedExtensions;
@property unsigned long long collectionTimeout;

- (id)init;
- (id)extensionManager;
- (id)availableDiagnosticExtensions;
- (id)collectItemsWithIdentifier:(id)arg1 parameters:(id)arg2;
- (id)extensionForIdentifier:(id)arg1;
- (_Bool)isDiagnosticExtensionAvailable;

@end
