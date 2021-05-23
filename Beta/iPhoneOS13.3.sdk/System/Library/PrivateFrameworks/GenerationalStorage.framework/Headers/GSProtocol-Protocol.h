/*
 Image: /System/Library/PrivateFrameworks/GenerationalStorage.framework/GenerationalStorage
 */

@protocol GSProtocol

- (unsigned short)listAdditionsOfStorage:nameSpace:withOptions:withoutOptions:andEnumerationState:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)isPermanentStorageSupportedForHandle:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)stagingPrefixForDevice:volumeUUID:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)stagingPrefixRelinquish: /* Error: Ran out of types for this method. */;
- (unsigned short)permanentStorageOpenForHandle:withRemoteID:andDocumentID:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)permanentStorageClose: /* Error: Ran out of types for this method. */;
- (unsigned short)getAdditionInStorage:andNameSpace:named:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)getAdditionsInStorage:andNameSpace:named:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)setAdditionOptionsInStorage:nameSpace:additionName:value:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)removeAdditionsInStorage:removalSpec:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)createAdditionInStorage:stagedFileDescriptor:creationInfo:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)checkItemAtURLValidInsidePermanentStorage:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)mergeAdditionInfoValueInStorage:nameSpace:additionName:value:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)setAdditionDisplayNameInStorage:nameSpace:additionName:value:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)setAdditionNameSpaceInStorage:nameSpace:additionName:value:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)requestFreeSpace:forVolume:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)getFileIdForDocumentId:onDevice:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)hintDocIDCreationForFileHandle: /* Error: Ran out of types for this method. */;
- (unsigned short)permanentStoragePrefixForHandle:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)permanentStorageIDForHandle:reply: /* Error: Ran out of types for this method. */;

@end
