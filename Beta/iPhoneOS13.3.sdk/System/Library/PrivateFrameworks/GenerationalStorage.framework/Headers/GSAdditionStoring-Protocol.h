/*
 Image: /System/Library/PrivateFrameworks/GenerationalStorage.framework/GenerationalStorage
 */

@class NSURL;

@protocol NSCopying><NSSecureCoding;

@protocol GSAdditionStoring

@property (retain) NSURL *documentURL;
@property (nonatomic, readonly) id <NSCopying><NSSecureCoding> persistentIdentifier;

- (unsigned short)enumeratorForAdditionsInNameSpace:withOptions:withoutOptions:ordering: /* Error: Ran out of types for this method. */;
- (unsigned short)removeAdditions:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)prepareAdditionCreationWithItemAtURL:byMoving:creationInfo:error: /* Error: Ran out of types for this method. */;
- (unsigned short)cleanupStagingURL: /* Error: Ran out of types for this method. */;
- (unsigned short)createAdditionStagedAtURL:creationInfo:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)removeAllAdditionsForNamespaces:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)additionWithName:inNameSpace:error: /* Error: Ran out of types for this method. */;
- (unsigned short)replaceDocumentWithContentsOfAddition:preservingCurrentVersionWithCreationInfo:createdAddition:error: /* Error: Ran out of types for this method. */;
- (unsigned short)URLforReplacingItemWithError: /* Error: Ran out of types for this method. */;
- (unsigned short)stagingURLforCreatingAdditionWithError: /* Error: Ran out of types for this method. */;
- (unsigned short)replaceDocumentWithContentsOfItemAtURL:preservingCurrentVersionWithCreationInfo:createdAddition:error: /* Error: Ran out of types for this method. */;
- (unsigned short)additionsWithNames:inNameSpace:error: /* Error: Ran out of types for this method. */;

@end
