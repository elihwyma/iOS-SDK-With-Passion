/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <HealthKit/HKQuery.h>

@class NSArray, NSString;

@interface HKDocumentQuery : HKQuery

{
    _Bool _includeDocumentData;
    unsigned long long _limit;
    NSArray *_sortDescriptors;
    CDUnknownBlockType _resultsHandler;
}

@property (copy, nonatomic) CDUnknownBlockType resultsHandler;
@property (readonly) unsigned long long limit;
@property (copy, readonly) NSArray *sortDescriptors;
@property (readonly) _Bool includeDocumentData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (Class)configurationClass;
+ (id)clientInterfaceProtocol;

- (void)queue_validate;
- (void)queue_deliverError:(id)arg1;
- (void)queue_queryDidDeactivate:(id)arg1;
- (void)queue_populateConfiguration:(id)arg1;
- (void)client_deliverDocument:(id)arg1 query:(id)arg2;
- (id)initWithDocumentType:(id)arg1 predicate:(id)arg2 limit:(unsigned long long)arg3 sortDescriptors:(id)arg4 includeDocumentData:(_Bool)arg5 resultsHandler:(CDUnknownBlockType)arg6;

@end
