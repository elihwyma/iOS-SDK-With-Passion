/*
 Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

#import <Foundation/NSObject.h>

@class NSCountedSet, NSString;

@protocol OS_dispatch_queue;

@interface NUFontManager : NSObject

{
    NSObject<OS_dispatch_queue> *_registrationQueue;
    NSCountedSet *_referenceCounts;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *registrationQueue;
@property (nonatomic, readonly) NSCountedSet *referenceCounts;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (unsigned long long)referenceCountForFontWithURL:(id)arg1;
- (void)increaseReferenceCountForFontWithURL:(id)arg1;
- (void)decreaseReferenceCountForFontWithURL:(id)arg1;
- (_Bool)shouldUnregisterFontWithURL:(id)arg1;
- (_Bool)unregisterFontAtURL:(id)arg1 error:(id *)arg2;
- (_Bool)registerFontWithURL:(id)arg1 error:(id *)arg2;
- (void)unregisterFontWithURL:(id)arg1;

@end
