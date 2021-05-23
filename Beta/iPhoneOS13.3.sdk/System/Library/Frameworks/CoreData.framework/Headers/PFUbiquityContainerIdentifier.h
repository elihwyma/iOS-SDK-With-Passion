/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

@class NSOperationQueue, NSSet, NSString, NSURL, PFUbiquityLocation;

__attribute__((visibility("hidden")))
@interface PFUbiquityContainerIdentifier : NSObject

{
    NSString *_storeName;
    NSString *_localPeerID;
    PFUbiquityLocation *_ubiquityRootLocation;
    NSString *_uuidString;
    PFUbiquityLocation *_uuidFileLocation;
    NSURL *_presentedItemURL;
    _Bool _usedExistingUUIDFile;
}

@property (nonatomic, readonly) NSString *uuidString;
@property (nonatomic, readonly) PFUbiquityLocation *uuidFileLocation;
@property (nonatomic, readonly) _Bool usedExistingUUIDFile;
@property (copy, readonly) NSURL *presentedItemURL;
@property (readonly) NSOperationQueue *presentedItemOperationQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, readonly) NSURL *primaryPresentedItemURL;
@property (readonly) NSSet *observedPresentedItemUbiquityAttributes;

- (id)init;
- (void)dealloc;
- (void)accommodatePresentedItemDeletionWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithLocalPeerID:(id)arg1 storeName:(id)arg2 andUbiquityRootLocation:(id)arg3;
- (_Bool)identifyContainer:(id *)arg1;
- (_Bool)replaceIdentifierWithUUID:(id)arg1 error:(id *)arg2;
- (void)setUUIDStringFromLocation:(id)arg1;
- (_Bool)writeToDisk:(id *)arg1;

@end
