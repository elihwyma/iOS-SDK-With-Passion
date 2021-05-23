/*
 Image: /System/Library/PrivateFrameworks/QuickLookSupport.framework/QuickLookSupport
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSMapTable, NSMutableDictionary;

@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface QLExtensionManagerCache : NSObject

{
    NSObject<OS_dispatch_queue> *_accessMatchingExtensionsQueue;
    NSObject<OS_dispatch_queue> *_waitForExtensionListQueue;
    _Bool _isMatchingExtensions;
    NSDictionary *_matchingAttributes;
    id _matchingContext;
    NSMutableDictionary *_matchingExtensions;
    NSMapTable *_qlExtensions;
    NSObject<OS_dispatch_semaphore> *_waitForExtensionsSemaphore;
}

@property (retain, nonatomic) NSDictionary *matchingAttributes;
@property (retain, nonatomic) id matchingContext;
@property (retain, nonatomic) NSMutableDictionary *matchingExtensions;
@property (retain, nonatomic) NSMapTable *qlExtensions;
@property (nonatomic) _Bool isMatchingExtensions;
@property (retain) NSObject<OS_dispatch_semaphore> *waitForExtensionsSemaphore;

- (void)dealloc;
- (void)beginMatchingExtensions;
- (void)endMatchingExtensions;
- (void)_didReceiveNewMatchingExtensionList:(id)arg1;
- (id)extensionWithMatchingAttributes:(id)arg1 allowExtensionsForParentTypes:(_Bool)arg2 extensionPath:(id)arg3;
- (void)_synchronouslyWaitForExtensionListIfNeeded;
- (_Bool)_supportedContentTypesFromExtension:(id)arg1 matches:(id)arg2 allowMatchingWithParentTypes:(_Bool)arg3;
- (id)_bestMatchingExtensionsFromSupportingExtensions:(id)arg1 includingExtensionsWithSupportingParentTypes:(_Bool)arg2 byContentType:(id)arg3;
- (id)initWithMatchingAttributes:(id)arg1;
- (_Bool)hasExtensionWithMatchingAttributes:(id)arg1;

@end
