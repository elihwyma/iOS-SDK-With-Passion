/*
 Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
 */

#import <Foundation/NSObject.h>

@interface IMCoreSpotlightUtilities : NSObject

+ (_Bool)needsIndexing;
+ (_Bool)needsDeferredIndexing;
+ (void)setNeedsDeferredIndexing;
+ (unsigned long long)lastIndexedRowID;
+ (unsigned long long)currentIndexVersion;
+ (unsigned long long)expectedIndexVersion;
+ (unsigned long long)messageIndexBatchSize:(_Bool)arg1;
+ (_Bool)bypassIndexVersionCheck;
+ (id)descriptionForReindexReason:(unsigned long long)arg1;

@end
