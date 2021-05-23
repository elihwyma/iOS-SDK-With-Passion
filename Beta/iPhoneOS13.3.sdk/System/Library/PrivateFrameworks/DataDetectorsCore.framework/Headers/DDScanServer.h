/*
 Image: /System/Library/PrivateFrameworks/DataDetectorsCore.framework/DataDetectorsCore
 */

#import <DataDetectorsCore/DDScannerService.h>

@interface DDScanServer : DDScannerService

{
    long long _options;
    double _timeout;
}

@property (nonatomic) long long options;
@property (nonatomic) double timeout;

- (id)init;
- (id)scanString:(id)arg1;
- (void)scanString:(id)arg1 resultsBlock:(CDUnknownBlockType)arg2;

@end
