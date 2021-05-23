/*
 Image: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
 */

#import <Foundation/NSObject.h>

@class NSArray, _UIMatchingExtensionsResult;

@protocol OS_dispatch_queue;

@interface _UIActivityApplicationExtensionDiscovery : NSObject

{
    NSArray *_extensionPointIdentifiers;
    CDUnknownBlockType _fetchShortcutsBlock;
    NSObject<OS_dispatch_queue> *_primedExtensionsQueue;
    _UIMatchingExtensionsResult *_primedExtensionsResult;
}

@property (copy, nonatomic) NSArray *extensionPointIdentifiers;
@property (retain) NSObject<OS_dispatch_queue> *primedExtensionsQueue;
@property (retain) _UIMatchingExtensionsResult *primedExtensionsResult;
@property (copy, nonatomic) CDUnknownBlockType fetchShortcutsBlock;

+ (id)extensionBasedActivityForExtension:(id)arg1;
+ (id)extensionMatchingDictionariesForExtensionItems:(id)arg1;

- (id)init;
- (void)dealloc;
- (id)initWithExtensionPointIdentifiers:(id)arg1;
- (void)primeWithDiscoveryContext:(id)arg1;
- (id)activitiesForMatchingContext:(id)arg1 error:(id *)arg2;

@end
