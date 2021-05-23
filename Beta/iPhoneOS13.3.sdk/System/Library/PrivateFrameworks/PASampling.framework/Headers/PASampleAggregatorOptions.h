/*
 Image: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
 */

#import <Foundation/NSObject.h>

@interface PASampleAggregatorOptions : NSObject

{
    _Bool _tabDelineateBinaryImageSections;
    _Bool _binaryImagesBeforeStacks;
    _Bool _printSpinSignatureStack;
    _Bool _printTargetHIDEvent;
    _Bool _printHeavyStacks;
    _Bool _displayHeader;
    _Bool _displayBody;
    _Bool _displayFooter;
    _Bool _displayFrameAddresses;
    _Bool _displaySub1MsCpuTime;
    _Bool _displayStateChangesOnIdleThreads;
    _Bool _displayProcessFirstLastTimes;
    _Bool _displayOffsetsFromUnnamedSymbols;
    _Bool _displaySymbolInformation;
    _Bool _displayBinaryImageAddresses;
    _Bool _displayBinaryImagesLackingNameOrPath;
    _Bool _displayRunningThreads;
    _Bool _displayRunnableThreads;
    _Bool _displayBlockedThreads;
    _Bool _displayIdleWorkQueueThreads;
    _Bool _displayAllBinaries;
    _Bool _displayBlockedReasons;
    _Bool _displayBlockedReasonsLackingProcessOwners;
    _Bool _displayAddressesInBlockedReasons;
    _Bool _displayEmptyBootArgs;
    _Bool _displayAllHIDEvents;
    _Bool _aggregateStacksByThread;
    _Bool _aggregateStacksByProcess;
}

@property _Bool tabDelineateBinaryImageSections;
@property _Bool binaryImagesBeforeStacks;
@property _Bool printSpinSignatureStack;
@property _Bool printTargetHIDEvent;
@property _Bool printHeavyStacks;
@property _Bool displayHeader;
@property _Bool displayBody;
@property _Bool displayFooter;
@property _Bool displayFrameAddresses;
@property _Bool displaySub1MsCpuTime;
@property _Bool displayStateChangesOnIdleThreads;
@property _Bool displayProcessFirstLastTimes;
@property _Bool displayOffsetsFromUnnamedSymbols;
@property _Bool displaySymbolInformation;
@property _Bool displayBinaryImageAddresses;
@property _Bool displayBinaryImagesLackingNameOrPath;
@property _Bool displayRunningThreads;
@property _Bool displayRunnableThreads;
@property _Bool displayBlockedThreads;
@property _Bool displayIdleWorkQueueThreads;
@property _Bool displayAllBinaries;
@property _Bool displayBlockedReasons;
@property _Bool displayBlockedReasonsLackingProcessOwners;
@property _Bool displayAddressesInBlockedReasons;
@property _Bool displayEmptyBootArgs;
@property _Bool displayAllHIDEvents;
@property _Bool aggregateStacksByThread;
@property _Bool aggregateStacksByProcess;
@property _Bool verbose;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
