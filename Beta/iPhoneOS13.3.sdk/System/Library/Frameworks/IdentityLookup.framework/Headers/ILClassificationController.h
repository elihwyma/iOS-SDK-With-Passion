/*
 Image: /System/Library/Frameworks/IdentityLookup.framework/IdentityLookup
 */

#import <Foundation/NSObject.h>

@class NSArray, NSExtension, NSHashTable;

@protocol OS_dispatch_queue;

@interface ILClassificationController : NSObject

{
    NSExtension *_electedExtension;
    NSArray *_extensions;
    NSObject<OS_dispatch_queue> *_queue;
    id _matchingExtensionToken;
    NSHashTable *_delegates;
    CDUnknownBlockType _firstMatchCompletionBlock;
}

@property (copy, nonatomic) NSArray *extensions;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) id matchingExtensionToken;
@property (nonatomic, readonly) NSHashTable *delegates;
@property (copy, nonatomic) CDUnknownBlockType firstMatchCompletionBlock;
@property (copy, nonatomic) NSExtension *electedExtension;
@property (nonatomic, readonly, getter=isClassificationAvailable) _Bool classificationAvailable;

+ (id)sharedInstance;
+ (_Bool)shouldActivate;
+ (id)electedExtensionFromExtensions:(id)arg1;

- (id)init;
- (void)dealloc;
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;
- (void)addDelegate:(id)arg1;
- (void)removeDelegate:(id)arg1;
- (void)beginMatchingExtensionsWithFirstCompletion:(CDUnknownBlockType)arg1;
- (void)updateExtensions:(id)arg1 electedExtensions:(id)arg2;

@end
