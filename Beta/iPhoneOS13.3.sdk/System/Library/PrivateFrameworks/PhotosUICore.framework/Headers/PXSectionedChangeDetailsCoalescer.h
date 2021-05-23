/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, PXMutableArrayChangeDetails, PXSectionedDataSourceChangeDetails;

@interface PXSectionedChangeDetailsCoalescer : NSObject

{
    unsigned long long _fromDataSourceIdentifier;
    unsigned long long _currentToDataSourceIdentifier;
    PXMutableArrayChangeDetails *_sectionChangeDetails;
    NSMutableArray *_itemChangeEntries;
    PXSectionedDataSourceChangeDetails *_cachedResult;
}

@property (nonatomic, readonly) PXSectionedDataSourceChangeDetails *coalescedChangeDetails;

+ (_Bool)_verboseLoggingEnabled;
+ (id)changeDetailsByCoalescingChangeDetails:(id)arg1;

- (id)init;
- (void)addChangeDetails:(id)arg1;
- (id)initWithSectionedChangeDetails:(id)arg1;

@end
