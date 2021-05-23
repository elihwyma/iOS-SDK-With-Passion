/*
 Image: /System/Library/PrivateFrameworks/DataDetectorsCore.framework/DataDetectorsCore
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol OS_dispatch_queue;

@interface DDScannerServiceConfiguration : NSObject

{
    int _scannerType;
    long long _resultsOptions;
    long long _scannerOptions;
    double _timeout;
    _Bool _noObjC;
    _Bool _spotlightSuggestionsEnabled;
    NSString *_recyclingIdentifier;
    long long *_jobIdentifierPtr;
    NSObject<OS_dispatch_queue> *_completionQueue;
}

@property (nonatomic) _Bool noObjC;
@property (nonatomic) _Bool spotlightSuggestionsEnabled;
@property (nonatomic) double timeout;
@property (nonatomic) long long resultsOptions;
@property (nonatomic) long long scannerOptions;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *completionQueue;

- (id)init;
- (id)description;
- (id)copy;
- (_Bool)supportsSecureCoding;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithScannerType:(int)arg1 passiveIntent:(_Bool)arg2;
- (id)initEmpty;
- (void)updateRecyclingIdentifier;
- (id)recyclingIdentifier;
- (int)scannerType;

@end
