/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface HMCharacteristicBatchRequest : NSObject

{
    CDUnknownBlockType _progressHandler;
    CDUnknownBlockType _completionHandler;
    NSArray *_requests;
}

@property (retain, nonatomic) NSArray *requests;
@property (copy, nonatomic) CDUnknownBlockType progressHandler;
@property (copy, nonatomic) CDUnknownBlockType completionHandler;

+ (_Bool)validateRequestTypes:(id)arg1 requestClass:(Class)arg2;
+ (id)characteristicBatchRequestWithReadRequests:(id)arg1;
+ (id)characteristicBatchRequestWithWriteRequests:(id)arg1;

- (id)initWithRequests:(id)arg1 requestClass:(Class)arg2;

@end
