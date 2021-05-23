/*
 Image: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
 */

#import <WiFiKit/WFOperation.h>

@class NSDictionary, NSMutableSet, NSSet, NSString, WFScanRequest;

@interface WFScanOperation : WFOperation

{
    NSString *_targetSSID;
    WFScanRequest *_request;
    NSMutableSet *_scanResults;
    NSDictionary *_scanParameters;
}

@property (retain, nonatomic) NSMutableSet *scanResults;
@property (retain, nonatomic) WFScanRequest *request;
@property (retain, nonatomic) NSDictionary *scanParameters;
@property (nonatomic, readonly) NSSet *results;
@property (copy, nonatomic) NSString *targetSSID;

- (id)description;
- (void)cancel;
- (void)start;
- (void)finish;
- (id)initWithRequest:(id)arg1;
- (void)scanDidFinishWithResults:(id)arg1 error:(int)arg2;

@end
