/*
 Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import <Symbolication/Swift-Protocol.h>

@class NSString, VMUClassInfoMap;

@protocol VMUCommonGraphInterface <Swift>

@property (nonatomic, readonly) int pid;
@property (nonatomic, readonly) _Bool is64bit;
@property (nonatomic, readonly) unsigned int vmPageSize;
@property (nonatomic, readonly) VMUClassInfoMap *realizedClasses;
@property (nonatomic, readonly) unsigned int zoneCount;
@property (nonatomic, readonly) unsigned int regionCount;
@property (nonatomic, readonly) unsigned int nodeCount;
@property (nonatomic, readonly) unsigned int nodeNamespaceSize;
@property (nonatomic, readonly) NSString *processName;
@property (nonatomic, readonly) NSString *processDescriptionString;
@property (nonatomic, readonly) NSString *executablePath;
@property (nonatomic, readonly) NSString *binaryImagesDescription;
@property (nonatomic, readonly) unsigned long long physicalFootprint;
@property (nonatomic, readonly) unsigned long long physicalFootprintPeak;

- (unsigned short)enumerateObjectsWithBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)refineTypesWithOverlay: /* Error: Ran out of types for this method. */;
- (unsigned short)nodeForAddress: /* Error: Ran out of types for this method. */;
- (unsigned short)markReachableNodesFromRoots:inMap: /* Error: Ran out of types for this method. */;
- (unsigned short)labelForNode: /* Error: Ran out of types for this method. */;
- (unsigned short)nodeDetails: /* Error: Ran out of types for this method. */;
- (unsigned short)vmuVMRegionForAddress: /* Error: Ran out of types for this method. */;
- (unsigned short)contentForNode: /* Error: Ran out of types for this method. */;
- (unsigned short)copyUserMarked;
- (unsigned short)zoneNameForIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)vmuVMRegionForNode: /* Error: Ran out of types for this method. */;
- (unsigned short)enumerateMarkedObjects:withBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)enumerateRegionsWithBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)enumerateReferencesWithBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)hasLabelsForNodes;
- (unsigned short)shortLabelForNode: /* Error: Ran out of types for this method. */;

@end
