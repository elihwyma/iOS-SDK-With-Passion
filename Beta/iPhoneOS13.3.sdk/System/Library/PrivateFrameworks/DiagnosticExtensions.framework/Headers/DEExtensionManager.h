/*
 Image: /System/Library/PrivateFrameworks/DiagnosticExtensions.framework/DiagnosticExtensions
 */

#import <Foundation/NSObject.h>

@class NSArray;

@protocol OS_dispatch_queue;

@interface DEExtensionManager : NSObject

{
    _Bool _extendedLoaded;
    NSObject<OS_dispatch_queue> *_initialLoadQueue;
    NSArray *_extensions;
    CDUnknownBlockType _afterExtendedBlock;
}

@property (retain, nonatomic) NSArray *extensions;
@property (copy, nonatomic) CDUnknownBlockType afterExtendedBlock;
@property (nonatomic) _Bool extendedLoaded;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *initialLoadQueue;

+ (id)sharedInstance;

- (id)init;
- (void)loadExtensions;
- (id)extensionForIdentifier:(id)arg1;
- (id)extensionsWithFilter:(id)arg1;

@end
