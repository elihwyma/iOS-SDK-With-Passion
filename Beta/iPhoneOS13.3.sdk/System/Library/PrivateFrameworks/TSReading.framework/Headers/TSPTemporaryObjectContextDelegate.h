/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@class NSError, NSMutableSet, NSSet, NSString, NSURL;

@protocol NSFilePresenter;

@interface TSPTemporaryObjectContextDelegate : NSObject

{
    NSMutableSet *_persistenceWarnings;
    _Bool _ignoreDocumentSupport;
    NSURL *_packageURL;
    NSError *_error;
}

@property (copy, nonatomic) NSURL *packageURL;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) NSSet *persistenceWarnings;
@property (nonatomic) _Bool ignoreDocumentSupport;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) id <NSFilePresenter> filePresenter;
@property (nonatomic, readonly) _Bool isDocumentSupportTemporary;
@property (nonatomic, readonly) _Bool areNewExternalReferencesToDataAllowed;

- (id)init;
- (void)addPersistenceWarnings:(id)arg1;
- (id)persistenceWarningsForData:(id)arg1 isReadable:(_Bool)arg2 isExternal:(_Bool)arg3;
- (id)initWithPackageURL:(id)arg1;
- (void)presentPersistenceError:(id)arg1;
- (void)performReadUsingAccessor:(CDUnknownBlockType)arg1;

@end
