/*
 Image: /System/Library/PrivateFrameworks/QuickLookSupport.framework/QuickLookSupport
 */

#import <Foundation/NSObject.h>

@interface QLUTIManager : NSObject

+ (id)screentimeiWorkBundleForUTI:(id)arg1;
+ (id)typesForWhichExternalGeneratorsArePreferred;
+ (id)valueInTypeKeyedDictionary:(id)arg1 forType:(id)arg2;
+ (id)_recursiveValueInDictionary:(id)arg1 forType:(id)arg2 alreadySeenUTIs:(id)arg3 matchedValueToTypeBlock:(CDUnknownBlockType)arg4 validationBlock:(CDUnknownBlockType)arg5;
+ (id)_selectParentUTIForUTI:(id)arg1 fromParentUTIs:(id)arg2 dictionary:(id)arg3 alreadySeenUTIs:(id)arg4 matchedValueToTypeBlock:(CDUnknownBlockType)arg5 validationBlock:(CDUnknownBlockType)arg6;
+ (id)_searchParentTypesFor:(id)arg1 fromDictionary:(id)arg2 alreadySeenUTIs:(id)arg3 matchedValueToTypeBlock:(CDUnknownBlockType)arg4 validationBlock:(CDUnknownBlockType)arg5;
+ (id)_preferredParentUTIof:(id)arg1 fromParents:(id)arg2;
+ (id)claimedTextTypes;
+ (id)claimedLivePhotoTypes;
+ (id)claimedContactTypes;
+ (id)claimedCalendarTypes;
+ (id)claimedPDFTypes;
+ (id)claimedImageTypes;
+ (id)claimedAVTypes;
+ (id)claimedOfficeTypes;
+ (id)claimediWorkTypes;
+ (id)claimedCSVTypes;
+ (id)claimedWebViewTypes;
+ (id)findAndStoreValueInTypeKeyedDictionary:(id)arg1 forType:(id)arg2 withDescription:(id)arg3 withQueue:(id)arg4 validationBlock:(CDUnknownBlockType)arg5;
+ (id)internallyClaimedTypes;

@end
